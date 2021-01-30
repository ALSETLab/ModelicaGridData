def write_pf_results(pp_models, model_name, n_pf = 1):
    
    # Directories to write the power flow information
    voltage_data_dir = pp_models[model_name]['voltage_data_dir']
    power_data_dir = pp_models[model_name]['power_data_dir']

    # Number of loads, generators and buses
    n_loads = pp_models[model_name].load.shape[0]
    n_gens = pp_models[model_name].gen.shape[0]
    n_buses = pp_models[model_name].bus.shape[0]

    # Number of loads, generators and buses
    n_loads = pp_models[model_name].load.shape[0]
    n_gens = pp_models[model_name].gen.shape[0]
    n_buses = pp_models[model_name].bus.shape[0]

    # ==========================
    #   Writing Power Results
    # ==========================        

    # Loading power flow results in dataframes
    load_results = copy.deepcopy(pp_models[model_name].res_load)
    load_results["bus"] = pp_models[model_name].load['bus']
    load_results.set_index("bus", inplace = True)

    gen_results = copy.deepcopy(pp_models[model_name].res_gen)
    gen_results["bus"] = pp_models[model_name].gen['bus']
    gen_results.set_index("bus", inplace = True)

    slack_results = copy.deepcopy(pp_models[model_name].res_ext_grid)
    slack_results["bus"] = pp_models[model_name].ext_grid['bus']
    slack_results.set_index("bus", inplace = True)

    # Creating the record file        
    pf_results_path = os.path.join(power_data_dir, 'pf_power_{}.mo'.format(n_pf))
    pf_results = open(pf_results_path, "w+")
    pf_results.write("record pf_power_{}\n".format(n_pf))
    pf_results.write("extends {}.PF_Data.Power_Template(\n\n".format(model_name))

    # Writing the power flow results of the loads
    for n_load in range(0, n_loads):

        load_bus_id = pp_models[model_name].load['bus'][n_load] # Load bus id
        load_bus = pp_models[model_name].bus['name'][load_bus_id]

        # Active power load
        p_load = load_results['p_mw'][load_bus_id]
        # Reactive power load
        q_load = load_results['q_mvar'][load_bus_id]

        pf_results.write("PL{} = {},\n".format(load_bus, p_load))
        pf_results.write("QL{} = {},\n\n".format(load_bus, q_load))

    # Writing the power flow results of the HVDC links (negative loads), if any
    if pp_models[model_name].sgen.shape[0] > 0:

        # Number of HVDC buses
        n_hvdc = pp_models[model_name].sgen[pp_models[model_name].sgen['controllable'] == False].shape[0]

        sgen_results = copy.deepcopy(pp_models[model_name].res_sgen)
        sgen_results["bus"] = pp_models[model_name].sgen['bus']
        sgen_results.set_index("bus", inplace = True)

        for n_link in range(0, n_hvdc):

            hvdc_bus_id = pp_models[model_name].sgen[pp_models[model_name].sgen['controllable'] == False]['bus'][n_link] # Link bus id
            hvdc_bus = pp_models[model_name].bus['name'][hvdc_bus_id] # Link bus name

            # Active power load
            p_load = -sgen_results['p_mw'][hvdc_bus_id]

            # Reactive power load
            q_load = -sgen_results['q_mvar'][hvdc_bus_id]

            pf_results.write("PL{} = {},\n".format(hvdc_bus, p_load))
            pf_results.write("QL{} = {},\n\n".format(hvdc_bus, q_load))

    # Writing the power flow results of the generators            
    for n_gen in range(0, n_gens):

        gen_bus_id = pp_models[model_name].gen['bus'][n_gen] # Generator bus id
        gen_bus = pp_models[model_name].bus['name'][gen_bus_id]

        # Active power load
        p_gen = gen_results['p_mw'][gen_bus_id]
        # Reactive power load
        q_gen = gen_results['q_mvar'][gen_bus_id]

        pf_results.write("PG{} = {},\n".format(gen_bus, p_gen))
        pf_results.write("QG{} = {},\n\n".format(gen_bus, q_gen))

    # Writing the power flow results of the slack bus

    # Information of the slack bus
    slack_bus_id = pp_models[model_name].ext_grid['bus'][0] # Slack bus id
    slack_bus = pp_models[model_name].bus['name'][slack_bus_id] 

    # Active power load
    p_slack = slack_results['p_mw'][slack_bus_id]
    # Reactive power load
    q_slack = slack_results['q_mvar'][slack_bus_id]

    pf_results.write("PS{} = {},\n".format(slack_bus, p_slack))
    pf_results.write("QS{} = {}\n\n".format(slack_bus, q_slack))

    pf_results.write(");\n")
    pf_results.write("end pf_power_{};".format(n_pf))
    pf_results.close()

    # ==========================
    #  Writing Voltage Results
    # ==========================

    # Loading power flow results in dataframes
    voltage_results_df = copy.deepcopy(pp_models[model_name].res_bus)
    voltage_results_df["name"] = pp_models[model_name].bus['name']
    voltage_results_df.set_index('name', inplace = True)
    
    # Creating the record file
    voltage_results_path = os.path.join(voltage_data_dir, 'pf_voltage_{}.mo'.format(n_pf))
    voltage_results = open(voltage_results_path, "w+")
    voltage_results.write("record pf_voltage_{}\n".format(n_pf))
    voltage_results.write("extends {}.PF_Data.Voltage_Template(\n\n".format(model_name))

    for n_bus in range(0, n_buses):

        bus_name = pp_models[model_name].bus['name'][n_bus] # Bus name

        v_bus_magnitude = voltage_results_df['vm_pu'][bus_name]
        v_bus_angle = voltage_results_df['va_degree'][bus_name]

        voltage_results.write("V{d} = {v},\n".format(d = bus_name, v = v_bus_magnitude))
        if (n_bus == n_buses - 1):
            voltage_results.write("A{d} = {v}\n\n".format(d = bus_name, v = v_bus_angle))
        else:
            voltage_results.write("A{d} = {v},\n\n".format(d = bus_name, v = v_bus_angle))

    voltage_results.write(");\n")
    voltage_results.write("end pf_voltage_{};".format(n_pf))
    voltage_results.close()