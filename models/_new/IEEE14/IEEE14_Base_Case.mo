within IEEE14;
model IEEE14_Base_Case
  inner OpenIPSL.Electrical.SystemBase SysData(fn=60)
    annotation (Placement(transformation(extent={{-118,78},{-80,98}})));
  OpenIPSL.Electrical.Buses.BusExt Bus_02(
    v_0=pf.powerflow.bus.V2,
    angle_0=pf.powerflow.bus.A2,
    V_b=69000,
    nn=2,
    np=4) annotation (Placement(transformation(extent={{-66,-84},{-64,-64}})));
  OpenIPSL.Electrical.Buses.BusExt Bus_01(
    v_0=pf.powerflow.bus.V1,
    angle_0=pf.powerflow.bus.A1,
    V_b=69000,
    np=2,
    nn=1) annotation (Placement(transformation(extent={{-68,-30},{-66,-10}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine(
    R=0.01938,
    X=0.05917,
    G=0,
    B=0.0264) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-56,-46})));
  OpenIPSL.Electrical.Buses.BusExt Bus_05(
    v_0=pf.powerflow.bus.V5,
    angle_0=pf.powerflow.bus.A5,
    V_b=69000,
    nn=3,
    np=2) annotation (Placement(transformation(extent={{-18,-32},{-16,-12}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine1(
    R=0.05403001,
    X=0.22304,
    G=0,
    B=0.0246) annotation (Placement(transformation(extent={{-52,-28},{-32,-8}})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_02(
    V_b=69000,
    P_0=pf.powerflow.loads.PL1,
    Q_0=pf.powerflow.loads.QL1,
    v_0=pf.powerflow.bus.V2,
    angle_0=pf.powerflow.bus.A2)
    annotation (Placement(transformation(extent={{-78,-100},{-66,-88}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine2(
    R=0.04699,
    X=0.19797,
    G=0,
    B=0.0219)
    annotation (Placement(transformation(extent={{-46,-86},{-26,-66}})));
  OpenIPSL.Electrical.Buses.BusExt Bus_03(
    v_0=pf.powerflow.bus.V3,
    angle_0=pf.powerflow.bus.A3,
    V_b=69000,
    nn=2,
    np=2) annotation (Placement(transformation(extent={{-2,-102},{0,-82}})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_03(
    V_b=69000,
    P_0=pf.powerflow.loads.PL2,
    Q_0=pf.powerflow.loads.QL2,
    v_0=pf.powerflow.bus.V3,
    angle_0=pf.powerflow.bus.A3)
    annotation (Placement(transformation(extent={{-36,-112},{-26,-102}})));
  OpenIPSL.Electrical.Buses.BusExt Bus_04(
    v_0=pf.powerflow.bus.V4,
    angle_0=pf.powerflow.bus.A4,
    V_b=69000,
    nn=3,
    np=4) annotation (Placement(transformation(extent={{18,-30},{20,-10}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine3(
    R=0.01335,
    X=0.04211,
    G=0,
    B=0)      annotation (Placement(transformation(extent={{-8,-32},{12,-12}})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_05(
    V_b=69000,
    P_0=pf.powerflow.loads.PL4,
    Q_0=pf.powerflow.loads.QL4,
    v_0=pf.powerflow.bus.V5,
    angle_0=pf.powerflow.bus.A5)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=180,
        origin={-23,1})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_04(
    V_b=69000,
    P_0=pf.powerflow.loads.PL3,
    Q_0=pf.powerflow.loads.QL3,
    v_0=pf.powerflow.bus.V4,
    angle_0=pf.powerflow.bus.A4)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=180,
        origin={11,3})));
  OpenIPSL.Electrical.Branches.PwLine pwLine4(
    R=0.05695,
    X=0.17388,
    G=0,
    B=0.0173) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-34,-46})));
  OpenIPSL.Electrical.Branches.PwLine pwLine5(
    R=0.05810999,
    X=0.17632,
    G=0,
    B=0.017) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-10,-46})));
  OpenIPSL.Electrical.Branches.PwLine pwLine6(
    R=0.06701,
    X=0.17103,
    G=0,
    B=0.0064) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={8,-46})));
  OpenIPSL.Electrical.Buses.BusExt Bus_06(
    v_0=pf.powerflow.bus.V6,
    angle_0=pf.powerflow.bus.A6,
    V_b=138000,
    np=3,
    nn=3) annotation (Placement(transformation(extent={{-18,22},{-16,42}})));
  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer twoWindingTransformer(
    CZ=1,
    R=0,
    X=0.25202,
    G=0,
    B=0,
    CW=1,
    t1=1,
    VNOM1=0,
    VB1=69000,
    t2=1,
    VNOM2=0,
    VB2=138000) annotation (Placement(transformation(
        extent={{-6,-4},{6,4}},
        rotation=90,
        origin={-8,8})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_06(
    V_b=138000,
    P_0=pf.powerflow.loads.PL5,
    Q_0=pf.powerflow.loads.QL5,
    v_0=pf.powerflow.bus.V6,
    angle_0=pf.powerflow.bus.A6)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={-35,17})));
  OpenIPSL.Electrical.Buses.BusExt Bus_07(
    v_0=pf.powerflow.bus.V7,
    angle_0=pf.powerflow.bus.A7,
    V_b=138000,
    nn=1,
    np=2) annotation (Placement(transformation(extent={{58,-22},{60,-2}})));
  OpenIPSL.Electrical.Buses.BusExt Bus_09(
    v_0=pf.powerflow.bus.V9,
    angle_0=pf.powerflow.bus.A9,
    V_b=138000,
    np=3,
    nn=3) annotation (Placement(transformation(extent={{86,8},{88,28}})));
  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer
    twoWindingTransformer1(
    CZ=1,
    R=0,
    X=0.20912,
    G=0,
    B=0,
    CW=1,
    t1=1,
    VNOM1=0,
    VB1=69000,
    t2=1,
    VNOM2=0,
    VB2=138000,
    ANG1=0) annotation (Placement(transformation(extent={{36,-16},{48,-8}})));
  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer
    twoWindingTransformer2(
    CZ=1,
    R=0,
    X=0.55618,
    G=0,
    B=0,
    CW=1,
    t1=1,
    VNOM1=0,
    VB1=69000,
    t2=1,
    VNOM2=0,
    VB2=138000,
    ANG1=0) annotation (Placement(transformation(extent={{44,10},{56,18}})));
  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer
    twoWindingTransformer3(
    CZ=1,
    R=0,
    X=0.17615,
    G=0,
    B=0,
    CW=1,
    t1=1,
    VNOM1=0,
    VB1=138000,
    t2=1,
    VNOM2=0,
    VB2=69000,
    ANG1=0) annotation (Placement(transformation(
        extent={{-6,-4},{6,4}},
        rotation=270,
        origin={76,-32})));
  OpenIPSL.Electrical.Buses.BusExt Bus_08(
    v_0=pf.powerflow.bus.V8,
    angle_0=pf.powerflow.bus.A8,
    V_b=69000,
    nn=1,
    np=1) annotation (Placement(transformation(extent={{86,-64},{88,-44}})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_09(
    V_b=138000,
    P_0=pf.powerflow.loads.PL6,
    Q_0=pf.powerflow.loads.QL6,
    v_0=pf.powerflow.bus.V9,
    angle_0=pf.powerflow.bus.A9)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={99,-11})));
  OpenIPSL.Electrical.Buses.BusExt Bus_14(
    v_0=pf.powerflow.bus.V14,
    angle_0=pf.powerflow.bus.A14,
    V_b=138000,
    nn=1,
    np=3) annotation (Placement(transformation(extent={{86,62},{88,82}})));
  OpenIPSL.Electrical.Buses.BusExt Bus_10(
    v_0=pf.powerflow.bus.V10,
    angle_0=pf.powerflow.bus.A10,
    V_b=138000,
    nn=1,
    np=2) annotation (Placement(transformation(extent={{44,32},{46,52}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine7(
    R=0.03181,
    X=0.0845,
    G=0,
    B=0)      annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={64,32})));
  OpenIPSL.Electrical.Branches.PwLine pwLine8(
    R=0.12711,
    X=0.27038,
    G=0,
    B=0)      annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={100,38})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_10(
    V_b=138000,
    P_0=pf.powerflow.loads.PL7,
    Q_0=pf.powerflow.loads.QL7,
    v_0=pf.powerflow.bus.V10,
    angle_0=pf.powerflow.bus.A10)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=90,
        origin={65,45})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_14(
    V_b=138000,
    P_0=pf.powerflow.loads.PL11,
    Q_0=pf.powerflow.loads.QL11,
    v_0=pf.powerflow.bus.V14,
    angle_0=pf.powerflow.bus.A14)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=90,
        origin={109,75})));
  OpenIPSL.Electrical.Buses.BusExt Bus_11(
    v_0=pf.powerflow.bus.V11,
    angle_0=pf.powerflow.bus.A11,
    V_b=138000,
    nn=1,
    np=2) annotation (Placement(transformation(extent={{14,44},{16,64}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine9(
    R=0.09498001,
    X=0.1989,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-12,38},{8,58}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine10(
    R=0.08205,
    X=0.19207,
    G=0,
    B=0) annotation (Placement(transformation(extent={{20,34},{40,54}})));
  OpenIPSL.Electrical.Buses.BusExt Bus_12(
    v_0=pf.powerflow.bus.V12,
    angle_0=pf.powerflow.bus.A12,
    V_b=138000,
    np=2,
    nn=1) annotation (Placement(transformation(extent={{-70,30},{-68,50}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine11(
    R=0.12291,
    X=0.25581,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-54,26},{-34,46}})));
  OpenIPSL.Electrical.Buses.BusExt Bus_13(
    v_0=pf.powerflow.bus.V13,
    angle_0=pf.powerflow.bus.A13,
    V_b=138000,
    np=2,
    nn=2) annotation (Placement(transformation(extent={{-20,74},{-18,94}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine12(
    R=0.22092,
    X=0.19988,
    G=0,
    B=0) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-46,68})));
  OpenIPSL.Electrical.Branches.PwLine pwLine13(
    R=0.17093,
    X=0.34802,
    G=0,
    B=0) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={32,80})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_12(
    V_b=138000,
    P_0=pf.powerflow.loads.PL9,
    Q_0=pf.powerflow.loads.QL9,
    v_0=pf.powerflow.bus.V12,
    angle_0=pf.powerflow.bus.A12)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=0,
        origin={-91,23})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_13(
    V_b=138000,
    P_0=pf.powerflow.loads.PL10,
    Q_0=pf.powerflow.loads.QL10,
    v_0=pf.powerflow.bus.V13,
    angle_0=pf.powerflow.bus.A13)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=90,
        origin={11,91})));
  OpenIPSL.Electrical.Loads.PSSE.Load LOAD_11(
    V_b=138000,
    P_0=pf.powerflow.loads.PL8,
    Q_0=pf.powerflow.loads.QL8,
    v_0=pf.powerflow.bus.V11,
    angle_0=pf.powerflow.bus.A11)
            annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=90,
        origin={41,65})));
  OpenIPSL.Electrical.Events.PwFault pwFault(
    R=0.01,
    X=0.02,
    t1=10,
    t2=10.01)
             annotation (Placement(transformation(extent={{42,-46},{54,-34}})));
  OpenIPSL.Electrical.Branches.PwLine pwLine14(
    R=0,
    X=0.11001,
    G=0,
    B=0)      annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=270,
        origin={72,0})));
  OpenIPSL.Electrical.Branches.PwLine pwLine15(
    R=0.06615,
    X=0.130270,
    G=0,
    B=0) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-26,60})));
  OpenIPSL.Electrical.Banks.PSSE.Shunt shunt(B=0.1500569, G=0)
    annotation (Placement(transformation(extent={{70,86},{82,98}})));
  OpenIPSL.Electrical.Banks.PSSE.Shunt shunt1(B=0.19, G=0)
    annotation (Placement(transformation(extent={{106,0},{118,12}})));
  IEEE14.PF_Data.Power_Flow pf(redeclare record PowerFlow =
        IEEE14.PF_Data.PF_best_00006)
    annotation (Placement(transformation(extent={{-104,50},{-84,70}})));
  Generating_Units.Gen_Bus_1 gen_Bus_1_1(
    P_0=pf.powerflow.machines.PG1,
    Q_0=pf.powerflow.machines.QG1,
    v_0=pf.powerflow.bus.V1,
    angle_0=pf.powerflow.bus.A1,
    displayPF=true)
    annotation (Placement(transformation(extent={{-106,-30},{-86,-10}})));
  Generating_Units.Gen_Bus_2 gen_Bus_2_1(
    P_0=pf.powerflow.machines.PG2,
    Q_0=pf.powerflow.machines.QG2,
    v_0=pf.powerflow.bus.V2,
    angle_0=pf.powerflow.bus.A2,
    displayPF=true)
    annotation (Placement(transformation(extent={{-108,-80},{-88,-60}})));
  Generating_Units.Gen_Bus_3 gen_Bus_3_1(
    P_0=pf.powerflow.machines.PG3,
    Q_0=pf.powerflow.machines.QG3,
    v_0=pf.powerflow.bus.V3,
    angle_0=pf.powerflow.bus.A3,
    displayPF=true)              annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={28,-104})));
  Generating_Units.Gen_Bus_6 gen_Bus_6_1(
    P_0=pf.powerflow.machines.PG4,
    Q_0=pf.powerflow.machines.QG4,
    v_0=pf.powerflow.bus.V6,
    angle_0=pf.powerflow.bus.A6,
    displayPF=true)              annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=180,
        origin={5,33})));
  Generating_Units.Gen_Bus_8 gen_Bus_8_1(
    P_0=pf.powerflow.machines.PG5,
    Q_0=pf.powerflow.machines.QG5,
    v_0=pf.powerflow.bus.V8,
    angle_0=pf.powerflow.bus.A8,
    displayPF=true)              annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={108,-52})));
equation
  connect(pwLine.n, Bus_01.p[1])
    annotation (Line(points={{-56,-37},{-56,-23},{-66,-23}},
                                                      color={0,0,255}));
  connect(pwLine1.p, Bus_01.p[2]) annotation (Line(points={{-51,-18},{-58,-18},{
          -58,-17},{-66,-17}},
                     color={0,0,255}));
  connect(LOAD_02.p, Bus_02.n[1])
    annotation (Line(points={{-72,-88},{-72,-77},{-66,-77}}, color={0,0,255}));
  connect(pwLine2.p, Bus_02.p[1]) annotation (Line(points={{-45,-76},{-52,-76},{
          -52,-78.5},{-64,-78.5}}, color={0,0,255}));
  connect(LOAD_03.p, Bus_03.n[1]) annotation (Line(points={{-31,-102},{-22,-102},
          {-22,-95},{-2,-95}}, color={0,0,255}));
  connect(pwLine2.n, Bus_03.n[2]) annotation (Line(points={{-27,-76},{-24,-76},
          {-24,-89},{-2,-89}},color={0,0,255}));
  connect(pwLine3.n, Bus_04.n[1]) annotation (Line(points={{11,-22},{14,-22},{14,
          -24},{18,-24}}, color={0,0,255}));
  connect(pwLine3.p, Bus_05.p[1]) annotation (Line(points={{-7,-22},{-12,-22},{-12,
          -25},{-16,-25}}, color={0,0,255}));
  connect(LOAD_04.p, Bus_04.n[2]) annotation (Line(points={{11,-2},{12,-2},{12,-20},
          {18,-20}}, color={0,0,255}));
  connect(pwLine4.p, Bus_02.p[2]) annotation (Line(points={{-34,-55},{-34,-68},{
          -52,-68},{-52,-75.5},{-64,-75.5}}, color={0,0,255}));
  connect(pwLine4.n, Bus_05.n[1])
    annotation (Line(points={{-34,-37},{-34,-26},{-18,-26}}, color={0,0,255}));
  connect(pwLine1.n, Bus_05.n[2]) annotation (Line(points={{-33,-18},{-26,-18},{
          -26,-22},{-18,-22}}, color={0,0,255}));
  connect(LOAD_05.p, Bus_05.n[3]) annotation (Line(points={{-23,-4},{-22,-4},{-22,
          -18},{-18,-18}}, color={0,0,255}));
  connect(pwLine.p, Bus_02.p[3]) annotation (Line(points={{-56,-55},{-56,-72.5},
          {-64,-72.5}}, color={0,0,255}));
  connect(pwLine5.p, Bus_02.p[4]) annotation (Line(points={{-10,-55},{-10,-64},{
          -54,-64},{-54,-69.5},{-64,-69.5}}, color={0,0,255}));
  connect(pwLine5.n, Bus_04.n[3]) annotation (Line(points={{-10,-37},{-10,-28},{
          14,-28},{14,-16},{18,-16}}, color={0,0,255}));
  connect(pwLine6.p, Bus_03.p[1])
    annotation (Line(points={{8,-55},{8,-95},{0,-95}}, color={0,0,255}));
  connect(pwLine6.n, Bus_04.p[1]) annotation (Line(points={{8,-37},{8,-34},{
          26,-34},{26,-24.5},{20,-24.5}},
                              color={0,0,255}));
  connect(twoWindingTransformer.p, Bus_05.p[2]) annotation (Line(points={{-8,1.4},
          {-10,1.4},{-10,-19},{-16,-19}},
                                        color={0,0,255}));
  connect(twoWindingTransformer.n, Bus_06.p[1])
    annotation (Line(points={{-8,14.6},{-8,28},{-16,28}},
                                                        color={0,0,255}));
  connect(LOAD_06.p, Bus_06.n[1]) annotation (Line(points={{-35,22},{-34,22},
          {-34,28},{-18,28}},
                         color={0,0,255}));
  connect(twoWindingTransformer1.p, Bus_04.p[2]) annotation (Line(points={{35.4,
          -12},{28,-12},{28,-21.5},{20,-21.5}},
                                           color={0,0,255}));
  connect(twoWindingTransformer2.p, Bus_04.p[3]) annotation (Line(points={{43.4,14},
          {24,14},{24,-18.5},{20,-18.5}}, color={0,0,255}));
  connect(twoWindingTransformer3.n, Bus_08.n[1])
    annotation (Line(points={{76,-38.6},{76,-54},{86,-54}},
                                                          color={0,0,255}));
  connect(pwLine7.n, Bus_10.p[1]) annotation (Line(points={{55,32},{52,32},{
          52,39},{46,39}},
                    color={0,0,255}));
  connect(pwLine8.n, Bus_09.p[1])
    annotation (Line(points={{100,29},{100,14},{88,14}}, color={0,0,255}));
  connect(pwLine8.p, Bus_14.p[1])
    annotation (Line(points={{100,47},{100,68},{88,68}}, color={0,0,255}));
  connect(LOAD_10.p, Bus_10.p[2]) annotation (Line(points={{60,45},{58,45},{
          58,44},{56,44},{56,45},{46,45}},
                                    color={0,0,255}));
  connect(pwLine9.n, Bus_11.n[1]) annotation (Line(points={{7,48},{10,48},{10,54},
          {14,54}}, color={0,0,255}));
  connect(pwLine9.p, Bus_06.p[2]) annotation (Line(points={{-11,48},{-14,48},{
          -14,32},{-16,32}},
                         color={0,0,255}));
  connect(pwLine10.n, Bus_10.n[1]) annotation (Line(points={{39,44},{42,44},{42,
          42},{44,42}}, color={0,0,255}));
  connect(pwLine10.p, Bus_11.p[1]) annotation (Line(points={{21,44},{20,44},{20,
          51},{16,51}}, color={0,0,255}));
  connect(LOAD_14.p, Bus_14.p[2]) annotation (Line(points={{104,75},{100,75},
          {100,74},{94,74},{94,72},{88,72}},
                                        color={0,0,255}));
  connect(pwLine11.p, Bus_12.p[1]) annotation (Line(points={{-53,36},{-62,36},
          {-62,37},{-68,37}},
                         color={0,0,255}));
  connect(pwLine11.n, Bus_06.n[2]) annotation (Line(points={{-35,36},{-26,36},{-26,
          32},{-18,32}}, color={0,0,255}));
  connect(pwLine12.p, Bus_12.p[2]) annotation (Line(points={{-46,59},{-46,46},
          {-62,46},{-62,43},{-68,43}},
                                  color={0,0,255}));
  connect(pwLine13.p, Bus_14.n[1]) annotation (Line(points={{41,80},{68,80},{68,
          72},{86,72}}, color={0,0,255}));
  connect(pwLine13.n, Bus_13.p[1]) annotation (Line(points={{23,80},{0,80},{0,
          81},{-18,81}},
                     color={0,0,255}));
  connect(LOAD_12.p, Bus_12.n[1]) annotation (Line(points={{-91,28},{-90,28},{-90,
          40},{-70,40}}, color={0,0,255}));
  connect(LOAD_13.p, Bus_13.p[2]) annotation (Line(points={{6,91},{-2,91},{-2,
          90},{-8,90},{-8,87},{-18,87}}, color={0,0,255}));
  connect(LOAD_11.p, Bus_11.p[2]) annotation (Line(points={{36,65},{34,65},{34,
          62},{30,62},{30,57},{16,57}},
                                    color={0,0,255}));
  connect(twoWindingTransformer1.n, Bus_07.n[1])
    annotation (Line(points={{48.6,-12},{58,-12}},
                                                 color={0,0,255}));
  connect(twoWindingTransformer3.p, Bus_07.p[1])
    annotation (Line(points={{76,-25.4},{76,-15},{60,-15}},
                                                          color={0,0,255}));
  connect(pwLine14.n, Bus_07.p[2])
    annotation (Line(points={{72,-5.4},{72,-9},{60,-9}}, color={0,0,255}));
  connect(pwLine15.p, Bus_06.n[3]) annotation (Line(points={{-26,51},{-26,46},{-22,
          46},{-22,35},{-18,35},{-18,36}}, color={0,0,255}));
  connect(pwLine15.n, Bus_13.n[1])
    annotation (Line(points={{-26,69},{-26,81},{-20,81}}, color={0,0,255}));
  connect(LOAD_09.p, Bus_09.p[2]) annotation (Line(points={{99,-6},{98,-6},{
          98,18},{88,18}},
                    color={0,0,255}));
  connect(pwLine12.n, Bus_13.n[2])
    annotation (Line(points={{-46,77},{-46,87},{-20,87}}, color={0,0,255}));
  connect(pwLine7.p, Bus_09.n[1]) annotation (Line(points={{73,32},{80,32},{80,14},
          {86,14}}, color={0,0,255}));
  connect(twoWindingTransformer2.n, Bus_09.n[2]) annotation (Line(points={{56.6,14},
          {72,14},{72,18},{86,18}}, color={0,0,255}));
  connect(pwLine14.p, Bus_09.n[3]) annotation (Line(points={{72,5.4},{76,5.4},{76,
          22},{86,22}}, color={0,0,255}));
  connect(shunt.p, Bus_14.p[3]) annotation (Line(points={{76,98},{96,98},{96,
          76},{88,76}},         color={0,0,255}));
  connect(shunt1.p, Bus_09.p[3])
    annotation (Line(points={{112,12},{112,22},{88,22}}, color={0,0,255}));
  connect(pwFault.p, Bus_04.p[4]) annotation (Line(points={{41,-40},{34,-40},
          {34,-15.5},{20,-15.5}}, color={0,0,255}));
  connect(gen_Bus_1_1.pwPin, Bus_01.n[1])
    annotation (Line(points={{-85,-20},{-68,-20}}, color={0,0,255}));
  connect(gen_Bus_2_1.pwPin, Bus_02.n[2]) annotation (Line(points={{-87,-70},{
          -76,-70},{-76,-71},{-66,-71}}, color={0,0,255}));
  connect(gen_Bus_3_1.pwPin, Bus_03.p[2]) annotation (Line(points={{17,-104},{
          14,-104},{14,-89},{2.22045e-16,-89}}, color={0,0,255}));
  connect(gen_Bus_6_1.pwPin, Bus_06.p[3])
    annotation (Line(points={{-2.7,33},{-16,33},{-16,36}}, color={0,0,255}));
  connect(gen_Bus_8_1.pwPin, Bus_08.p[1]) annotation (Line(points={{97,-52.2},{
          92.5,-52.2},{92.5,-54},{88,-54}}, color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-120,-120},
            {120,100}})),
                        Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-120,-120},{120,100}}), graphics={
        Text(
          extent={{-84,-6},{-50,-6}},
          lineColor={28,108,200},
          textString="Bus_01"),
        Text(
          extent={{-84,-60},{-50,-60}},
          lineColor={28,108,200},
          textString="Bus_02"),
        Text(
          extent={{-18,-106},{16,-106}},
          lineColor={28,108,200},
          textString="Bus_03"),
        Text(
          extent={{2,-8},{36,-8}},
          lineColor={28,108,200},
          textString="Bus_04"),
        Text(
          extent={{-38,-34},{-4,-34}},
          lineColor={28,108,200},
          textString="Bus_05"),
        Text(
          extent={{-36,20},{-2,20}},
          lineColor={28,108,200},
          textString="Bus_06"),
        Text(
          extent={{42,-24},{76,-24}},
          lineColor={28,108,200},
          textString="Bus_07"),
        Text(
          extent={{70,6},{104,6}},
          lineColor={28,108,200},
          textString="Bus_09"),
        Text(
          extent={{70,-66},{104,-66}},
          lineColor={28,108,200},
          textString="Bus_08"),
        Text(
          extent={{28,28},{62,28}},
          lineColor={28,108,200},
          textString="Bus_10"),
        Text(
          extent={{70,44},{104,44}},
          lineColor={28,108,200},
          textString="Bus_14"),
        Text(
          extent={{-2,68},{32,66}},
          lineColor={28,108,200},
          textString="Bus_11"),
        Text(
          extent={{-86,28},{-52,28}},
          lineColor={28,108,200},
          textString="Bus_12"),
        Text(
          extent={{-36,72},{-2,72}},
          lineColor={28,108,200},
          textString="Bus_13"),
        Text(
          extent={{70,60},{104,60}},
          lineColor={28,108,200},
          textString="Bus_14")}),
    experiment(StopTime=5));
end IEEE14_Base_Case;
