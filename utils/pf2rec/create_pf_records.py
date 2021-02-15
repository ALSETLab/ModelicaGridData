from .generate_component_list import *
import os

def create_pf_records(model_name, model_mo_path, data_path = None, openipsl_version = '1.5.0'):

    '''
    create_pf_records

    DESCRIPTION:
    this function creates a records structure reading the `.mo` file of a model

    INPUTS:
    - model_name: name of the model (without `.mo` ending).
    This is the name of the main model in Modelica.
    - model_mo_path: absolute path to the folder where the `.mo` file of the OpenIPSL model is located.
    - data_path: absolute path to the folder where the records (and the PF data) will be stored.
    - openipsl_version (string)

    OUTPUTS:
    - void function. Writes `.mo` files inside the data_path

    LAST MODIFICATION DATE:
    10/09/2020 by Sergio A. Dorado-Rojas
    '''

    # Getting the list of the components of the given `.mo` file
    components = generate_component_list(model_mo_path)

    # Sorting alphabetically the component list
    for comp in components.keys():
        components[comp].sort()

    #############################################################
    ################# CREATING RECORD STRUCTURE #################
    #############################################################

    # Getting absolute path of the `PF_Data` folder
    pf_data_folder_path = os.path.join(data_path, 'PF_Data')

    # Creating the `PF_Data` folder if it does not exist
    if not os.path.exists(pf_data_folder_path):
        os.makedirs(pf_data_folder_path)

    # Adding the `PF_Data` reference to the `package.order` file
    pk_order_path = os.path.join(data_path, 'package.order') # Getting the path to the 'package.order' file

    # Checking if `PF_Data` already is in `package.order`
    with open(pk_order_path, 'r') as file:
        lines = file.readlines()

    # If it is not, then append `PF_Data` at the end of the package.order file
    with open(pk_order_path, 'a') as file:
        if 'PF_Data\n' not in lines:
            file.writelines('PF_Data\n')

    # Creating `package.mo` file for the `PF_Data` of each model (if it does not exist yet)
    if 'package.mo' not in os.listdir(pf_data_folder_path):
        pack_mo_path = os.path.join(pf_data_folder_path, 'package.mo')
        pack_mo = open(pack_mo_path, "w+")

        pack_mo.write("within {};\n".format(model_name))
        pack_mo.write("package PF_Data\n\n")
        pack_mo.write("end PF_Data;")
        pack_mo.close()

    # Creating `package.order` file for each model (if it does not exist yet)
    if 'package.order' not in os.listdir(pf_data_folder_path):
        pack_order_path = os.path.join(pf_data_folder_path, 'package.order')
        pack_order = open(pack_order_path, "w+")
        # Writing main record structure
        pack_order.write("Power_Flow\n")

        # Writing main record template
        pack_order.write("Power_Flow_Template\n")

        # Writing subfolders with power flow results
        pack_order.write("Bus_Data\n")
        pack_order.write("Loads_Data\n")
        pack_order.write("Trafos_Data\n")
        pack_order.write("Machines_Data\n")
        pack_order.close()

    # Creating `Power_Flow.mo` file for each model (if it does not exist yet)
    if 'Power_Flow.mo' not in os.listdir(pf_data_folder_path):
        pf_path = os.path.join(pf_data_folder_path, 'Power_Flow.mo')
        pf_data = open(pf_path, "w+")

        # Header of the `.mo` file
        pf_data.write("within {}.PF_Data;\n".format(model_name))
        pf_data.write("record Power_Flow\n")
        pf_data.write("extends Modelica.Icons.Record;\n\n")

        # Power flow attribute declaration
        pf_data.write("replaceable record PowerFlow = {}.PF_Data.Power_Flow_Template \n".format(model_name))
        pf_data.write("constrainedby {}.PF_Data.Power_Flow_Template\n".format(model_name))
        pf_data.write("annotation(choicesAllMatching);\n\n")
        pf_data.write("PowerFlow powerflow;\n\n")

        pf_data.write("end Power_Flow;")
        pf_data.close()

    # Creating `Power_Flow_Template.mo` file for each model (if it does not exist yet)
    if 'Power_Flow_Template.mo' not in os.listdir(pf_data_folder_path):
        pf_data_path = os.path.join(pf_data_folder_path, 'Power_Flow_Template.mo')
        pf_data = open(pf_data_path, "w+")

        # Header of the `.mo` file
        pf_data.write("within {}.PF_Data;\n".format(model_name))
        #pf_data.write("partial record Power_Flow_Template\n")
        pf_data.write("record Power_Flow_Template\n")
        pf_data.write("extends Modelica.Icons.Record;\n\n")

        pf_data.write("end Power_Flow_Template;")
        pf_data.close()

    ######################################################
    ################# CREATING TEMPLATES #################
    ######################################################

    if openipsl_version == '1.5.0':
        type_p = 'OpenIPSL.Types.ActivePowerMega'
        type_q = 'OpenIPSL.Types.ReactivePowerMega'
        type_voltage_pu = 'Modelica.SIunits.PerUnit'
        type_angle = 'Modelica.SIunits.Conversions.NonSIunits.Angle_deg' # angle in deg
    else:
        type_p = 'OpenIPSL.Types.ActivePower'
        type_q = 'OpenIPSL.Types.ReactivePower'
        type_voltage_pu = 'OpenIPSL.Types.PerUnit'
        type_angle = 'OpenIPSL.Types.Angle' # angle in radians

    ###########################
    ####### BUS TEMPLATE ######
    ###########################

    bus_data_dir = os.path.join(pf_data_folder_path, "Bus_Data")
    if not os.path.exists(bus_data_dir):
        os.makedirs(bus_data_dir)

    # Creating `package.mo`
    if 'package.mo' not in os.listdir(bus_data_dir):
        # Creating the 'package.mo' file for the bus data
        if 'package.mo' not in os.listdir(bus_data_dir):
            pack_mo_path = os.path.join(bus_data_dir, "package.mo")
            pack_mo = open(pack_mo_path, "w+")
            pack_mo.write("within {}.PF_Data;\n".format(model_name))
            pack_mo.write("package Bus_Data\n\n")
            pack_mo.write("end Bus_Data;")
            pack_mo.close()

    # Creating `Bus_Template.mo`
    if 'Bus_Template.mo' not in os.listdir(bus_data_dir):

        # Creating the `.mo` file
        bus_template_path = os.path.join(bus_data_dir, 'Bus_Template.mo')
        bus_template = open(bus_template_path, "w+")
        bus_template.write(f"within {model_name}.PF_Data.Bus_Data;\n")
        bus_template.write("partial record Bus_Template\n\n")

        for n_bus, bus in enumerate(components['buses']):

            # Write V, A (and delta for the slack)
            bus_template.write(f"parameter {type_voltage_pu} V{n_bus + 1} \"(pu) {bus}\" annotation(Dialog(enable = false));\n")
            bus_template.write(f"parameter {type_angle} A{n_bus + 1} \"{bus}\" annotation(Dialog(enable = false));\n\n")

        bus_template.write("end Bus_Template;")
        bus_template.close()

    ###########################
    ##### LOADS TEMPLATE ######
    ###########################

    loads_data_dir = os.path.join(pf_data_folder_path, "Loads_Data")
    if not os.path.exists(loads_data_dir):
        os.makedirs(loads_data_dir)

    # Creating `package.mo`
    if 'package.mo' not in os.listdir(loads_data_dir):
        pack_mo_path = os.path.join(loads_data_dir, "package.mo")
        pack_mo = open(pack_mo_path, "w+")
        pack_mo.write("within {}.PF_Data;\n".format(model_name))
        pack_mo.write("package Loads_Data\n\n")
        pack_mo.write("end Loads_Data;")
        pack_mo.close()

    if 'Loads_Template.mo' not in os.listdir(loads_data_dir):

        # Creating the `.mo` file
        loads_template_path = os.path.join(loads_data_dir, 'Loads_Template.mo')
        loads_template = open(loads_template_path, "w+")
        loads_template.write(f"within {model_name}.PF_Data.Loads_Data;\n")
        loads_template.write("partial record Loads_Template\n\n")

        for n_load, load in enumerate(components['loads']):

            # Write P,Q
            loads_template.write(f"parameter {type_p} PL{n_load + 1} \"{load}\" annotation(Dialog(enable = false));\n")
            loads_template.write(f"parameter {type_q} QL{n_load + 1} \"{load}\" annotation(Dialog(enable = false));\n\n")

        loads_template.write("end Loads_Template;")
        loads_template.close()

    ###########################
    #### MACHINES TEMPLATE ####
    ###########################

    machines_data_dir = os.path.join(pf_data_folder_path, "Machines_Data")
    if not os.path.exists(machines_data_dir):
        os.makedirs(machines_data_dir)

    # Creating `package.mo`
    if 'package.mo' not in os.listdir(machines_data_dir):
        pack_mo_path = os.path.join(machines_data_dir, "package.mo")
        pack_mo = open(pack_mo_path, "w+")
        pack_mo.write("within {}.PF_Data;\n".format(model_name))
        pack_mo.write("package Machines_Data\n\n")
        pack_mo.write("end Machines_Data;")
        pack_mo.close()

    # Creating the `.mo` file
    if 'Machines_Template.mo' not in os.listdir(machines_data_dir):

        # Creating the `.mo` file
        machines_template_path = os.path.join(machines_data_dir, 'Machines_Template.mo')
        machines_template = open(machines_template_path, "w+")
        machines_template.write(f"within {model_name}.PF_Data.Machines_Data;\n")
        machines_template.write("partial record Machines_Template\n\n")

        for n_gen, gen in enumerate(components['generators']):
            # Write PG, QG
            machines_template.write(f"parameter {type_p} PG{n_gen + 1} \"{gen}\" annotation(Dialog(enable = false));\n")
            machines_template.write(f"parameter {type_q} QG{n_gen + 1} \"{gen}\" annotation(Dialog(enable = false));\n\n")

        machines_template.write("end Machines_Template;")
        machines_template.close()

    ###########################
    ## TRANSFORMERS TEMPLATE ##
    ###########################

    trafos_data_dir = os.path.join(pf_data_folder_path, "Trafos_Data")
    if not os.path.exists(trafos_data_dir):
        os.makedirs(trafos_data_dir)

    # Creating `package.mo`
    if 'package.mo' not in os.listdir(trafos_data_dir):
        pack_mo_path = os.path.join(trafos_data_dir, "package.mo")
        pack_mo = open(pack_mo_path, "w+")
        pack_mo.write("within {}.PF_Data;\n".format(model_name))
        pack_mo.write("package Trafos_Data\n\n")
        pack_mo.write("end Trafos_Data;")
        pack_mo.close()

    # Creating `.mo` file
    if 'Trafos_Template.mo' not in os.listdir(trafos_data_dir):

        # Creating the `.mo` file
        trafos_template_path = os.path.join(trafos_data_dir, 'Trafos_Template.mo')
        trafos_template = open(trafos_template_path, "w+")
        trafos_template.write(f"within {model_name}.PF_Data.Trafos_Data;\n")
        trafos_template.write("partial record Trafos_Template\n\n")

        for n_trafo, trafo in enumerate(components['trafos']):
            # Write t1, t2
            trafos_template.write(f"parameter Real t1_trafo_{n_trafo + 1} \"{trafo}\" annotation(Dialog(enable = false));\n")
            trafos_template.write(f"parameter Real t2_trafo_{n_trafo + 1} \"{trafo}\" annotation(Dialog(enable = false));\n\n")

        trafos_template.write("end Trafos_Template;")
        trafos_template.close()

    return
