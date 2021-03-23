within IEEE14;
model IEEE14_Base_Case

 inner OpenIPSL.Electrical.SystemBase SysData(fn=60)
 annotation (Placement(transformation(extent={{-116,76},{-78,96}})));

 OpenIPSL.Electrical.Buses.Bus Bus_02(
   V_0=pf.powerflow.bus.V2,
   angle_0=pf.powerflow.bus.A2,
    V_b=69)
         annotation (Placement(transformation(extent={{-70,-82},{-56,-68}})));
 OpenIPSL.Electrical.Buses.Bus Bus_01(
   V_0=pf.powerflow.bus.V1,
   angle_0=pf.powerflow.bus.A1,
    V_b=69)
         annotation (Placement(transformation(extent={{-74,-26},{-62,-14}})));
 OpenIPSL.Electrical.Branches.PwLine pwLine(
   R=0.01938,
   X=0.05917,
   G=0,
   B=0.0264) annotation (Placement(transformation(
    extent={{-10,-10},{10,10}},
    rotation=90,
    origin={-56,-46})));
 OpenIPSL.Electrical.Buses.Bus Bus_05(
   V_0=pf.powerflow.bus.V5,
   angle_0=pf.powerflow.bus.A5,
    V_b=69)
         annotation (Placement(transformation(extent={{-24,-26},{-12,-14}})));
 OpenIPSL.Electrical.Branches.PwLine pwLine1(
   R=0.05403001,
   X=0.22304,
   G=0,
   B=0.0246) annotation (Placement(transformation(extent={{-52,-28},{-32,-8}})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_02(
    V_b=69000,
   P_0=pf.powerflow.loads.PL1,
   Q_0=pf.powerflow.loads.QL1,
   V_0=pf.powerflow.bus.V2,
   angle_0=pf.powerflow.bus.A2,
   d_P=0,
   t1=50,
   d_t=50)
   annotation (Placement(transformation(extent={{-78,-100},{-66,-88}})));
 OpenIPSL.Electrical.Branches.PwLine pwLine2(
   R=0.04699,
   X=0.19797,
   G=0,
   B=0.0219)
   annotation (Placement(transformation(extent={{-46,-86},{-26,-66}})));
 OpenIPSL.Electrical.Buses.Bus Bus_03(
   V_0=pf.powerflow.bus.V3,
   angle_0=pf.powerflow.bus.A3,
    V_b=69)
         annotation (Placement(transformation(extent={{-6,-98},{10,-82}})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_03(
    V_b=69000,
    P_0=pf.powerflow.loads.PL2,
   Q_0=pf.powerflow.loads.QL2,
   V_0=pf.powerflow.bus.V3,
   angle_0=pf.powerflow.bus.A3,
   d_P=0,
   t1=50,
   d_t=50)
   annotation (Placement(transformation(extent={{-36,-112},{-26,-102}})));
 OpenIPSL.Electrical.Buses.Bus Bus_04(
   V_0=pf.powerflow.bus.V4,
   angle_0=pf.powerflow.bus.A4,
    V_b=69)
         annotation (Placement(transformation(extent={{28,-26},{16,-14}})));
 OpenIPSL.Electrical.Branches.PwLine pwLine3(
   R=0.01335,
   X=0.04211,
   G=0,
   B=0)      annotation (Placement(transformation(extent={{-8,-32},{12,-12}})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_05(
    V_b=69000,
    P_0=pf.powerflow.loads.PL4,
    Q_0=pf.powerflow.loads.QL4,
    V_0=pf.powerflow.bus.V5,
    angle_0=pf.powerflow.bus.A5,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
    extent={{-5,-5},{5,5}},
    rotation=180,
    origin={-23,1})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_04(
    V_b=69000,
    P_0=pf.powerflow.loads.PL3,
    Q_0=pf.powerflow.loads.QL3,
    V_0=pf.powerflow.bus.V4,
    angle_0=pf.powerflow.bus.A4,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
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
 OpenIPSL.Electrical.Buses.Bus Bus_06(
   V_0=pf.powerflow.bus.V6,
   angle_0=pf.powerflow.bus.A6,
    V_b=138)
         annotation (Placement(transformation(extent={{-28,24},{-12,40}})));
 OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer twoWindingTransformer(
   CZ=1,
   R=0,
   X=0.25202,
   G=0,
   B=0,
   CW=1,
   t1=1,
   VNOM1=0,
    VB1=69,
   t2=1,
   VNOM2=0,
    VB2=138)   annotation (Placement(transformation(
    extent={{-6,-4},{6,4}},
    rotation=90,
    origin={-8,8})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_06(
    V_b=138000,
    P_0=pf.powerflow.loads.PL5,
    Q_0=pf.powerflow.loads.QL5,
    V_0=pf.powerflow.bus.V6,
    angle_0=pf.powerflow.bus.A6,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
    extent={{-5,-5},{5,5}},
    rotation=0,
    origin={-35,17})));
 OpenIPSL.Electrical.Buses.Bus Bus_07(
   V_0=pf.powerflow.bus.V7,
   angle_0=pf.powerflow.bus.A7,
    V_b=138)
         annotation (Placement(transformation(extent={{54,-18},{66,-6}})));
 OpenIPSL.Electrical.Buses.Bus Bus_09(
   V_0=pf.powerflow.bus.V9,
   angle_0=pf.powerflow.bus.A9,
    V_b=138)
         annotation (Placement(transformation(extent={{84,14},{94,24}})));
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
    VB1=69,
   t2=1,
   VNOM2=0,
    VB2=138,
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
    VB1=69,
   t2=1,
   VNOM2=0,
    VB2=138,
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
    VB1=138,
   t2=1,
   VNOM2=0,
    VB2=69,
   ANG1=0) annotation (Placement(transformation(
    extent={{-6,-4},{6,4}},
    rotation=270,
    origin={76,-32})));
 OpenIPSL.Electrical.Buses.Bus Bus_08(
   V_0=pf.powerflow.bus.V8,
   angle_0=pf.powerflow.bus.A8,
    V_b=69)
         annotation (Placement(transformation(extent={{86,-56},{102,-40}})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_09(
    V_b=138000,
    P_0=pf.powerflow.loads.PL6,
    Q_0=pf.powerflow.loads.QL6,
    V_0=pf.powerflow.bus.V9,
    angle_0=pf.powerflow.bus.A9,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
    extent={{-5,-5},{5,5}},
    rotation=0,
    origin={99,-11})));
 OpenIPSL.Electrical.Buses.Bus Bus_14(
   V_0=pf.powerflow.bus.V14,
   angle_0=pf.powerflow.bus.A14,
   V_b=138000)
         annotation (Placement(transformation(extent={{80,66},{92,78}})));
 OpenIPSL.Electrical.Buses.Bus Bus_10(
   V_0=pf.powerflow.bus.V10,
   angle_0=pf.powerflow.bus.A10,
    V_b=138)
         annotation (Placement(transformation(extent={{42,38},{52,48}})));
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
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_10(
    V_b=138000,
    P_0=pf.powerflow.loads.PL7,
    Q_0=pf.powerflow.loads.QL7,
    V_0=pf.powerflow.bus.V10,
    angle_0=pf.powerflow.bus.A10,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
    extent={{-5,-5},{5,5}},
    rotation=90,
    origin={65,45})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_14(
    V_b=138000,
    P_0=pf.powerflow.loads.PL11,
    Q_0=pf.powerflow.loads.QL11,
    V_0=pf.powerflow.bus.V14,
    angle_0=pf.powerflow.bus.A14,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
    extent={{-5,-5},{5,5}},
    rotation=90,
    origin={109,73})));
 OpenIPSL.Electrical.Buses.Bus Bus_11(
   V_0=pf.powerflow.bus.V11,
   angle_0=pf.powerflow.bus.A11,
    V_b=138)
         annotation (Placement(transformation(extent={{10,50},{20,60}})));
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
 OpenIPSL.Electrical.Buses.Bus Bus_12(
   V_0=pf.powerflow.bus.V12,
   angle_0=pf.powerflow.bus.A12,
    V_b=138)
         annotation (Placement(transformation(extent={{-76,34},{-62,48}})));
 OpenIPSL.Electrical.Branches.PwLine pwLine11(
   R=0.12291,
   X=0.25581,
   G=0,
   B=0) annotation (Placement(transformation(extent={{-54,26},{-34,46}})));
 OpenIPSL.Electrical.Buses.Bus Bus_13(
   V_0=pf.powerflow.bus.V13,
   angle_0=pf.powerflow.bus.A13,
    V_b=138)
         annotation (Placement(transformation(extent={{-24,80},{-10,94}})));
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
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_12(
    V_b=138000,
    P_0=pf.powerflow.loads.PL9,
    Q_0=pf.powerflow.loads.QL9,
    V_0=pf.powerflow.bus.V12,
    angle_0=pf.powerflow.bus.A12,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
    extent={{-5,-5},{5,5}},
    rotation=0,
    origin={-91,23})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_13(
    V_b=138000,
    P_0=pf.powerflow.loads.PL10,
    Q_0=pf.powerflow.loads.QL10,
    V_0=pf.powerflow.bus.V13,
    angle_0=pf.powerflow.bus.A13,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
    extent={{-5,-5},{5,5}},
    rotation=90,
    origin={9,89})));
 OpenIPSL.Electrical.Loads.PSSE.Load_variation LOAD_11(
    V_b=138000,
    P_0=pf.powerflow.loads.PL8,
    Q_0=pf.powerflow.loads.QL8,
    V_0=pf.powerflow.bus.V11,
    angle_0=pf.powerflow.bus.A11,
   d_P=0,
   t1=50,
   d_t=50) annotation (Placement(transformation(
    extent={{-5,-5},{5,5}},
    rotation=90,
    origin={41,63})));
 OpenIPSL.Electrical.Events.PwFault pwFault(
    R=0.01,
    X=0.01,
    t1=Modelica.Constants.inf,
    t2=Modelica.Constants.inf)
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
  IEEE14.PF_Data.Power_Flow pf(redeclare record PowerFlow =
        IEEE14.PF_Data.PF_load_00016)
    annotation (Placement(transformation(extent={{-102,54},{-82,74}})));
  IEEE14.Generating_Units.Gen_Bus_3 gen_Bus_3_1(
    V_b=69,
    P_0 = pf.powerflow.machines.PG3,
    Q_0 = pf.powerflow.machines.QG3,
    V_0 = pf.powerflow.bus.V3,
    angle_0 = pf.powerflow.bus.A3,
    displayPF=true)                annotation (Placement(
        transformation(
        extent={{-7,-6},{7,6}},
        rotation=180,
        origin={25,-90})));
  IEEE14.Generating_Units.Gen_Bus_6 gen_Bus_6_1(
    V_b=138,
    P_0=pf.powerflow.machines.PG4,
    Q_0=pf.powerflow.machines.QG4,
    V_0=pf.powerflow.bus.V6,
    angle_0=pf.powerflow.bus.A6,
    displayPF=true)
    annotation (Placement(transformation(extent={{-6,20},{6,32}})));
  IEEE14.Generating_Units.Gen_Bus_8 gen_Bus_8_1(
    V_b=69,
    P_0=pf.powerflow.machines.PG5,
    Q_0=pf.powerflow.machines.QG5,
    V_0=pf.powerflow.bus.V8,
    angle_0=pf.powerflow.bus.A8,
    displayPF=true)
    annotation (Placement(transformation(extent={{90,-80},{102,-68}})));
  IEEE14.Generating_Units.Gen_Bus_1 gen_Bus_1_1(
    V_b=69,
    V_0=pf.powerflow.bus.V1,
    angle_0=pf.powerflow.bus.A1,
    P_0=pf.powerflow.machines.PG1,
    Q_0=pf.powerflow.machines.QG1,
    displayPF=true)
    annotation (Placement(transformation(extent={{-94,-28},{-80,-14}})));
  IEEE14.Generating_Units.Gen_Bus_2 gen_Bus_2_1(
    V_b = 69,
    V_0 = pf.powerflow.bus.V2,
    angle_0 = pf.powerflow.bus.A2,
    P_0 = pf.powerflow.machines.PG2,
    Q_0 = pf.powerflow.machines.QG2,
    displayPF=true)
    annotation (Placement(transformation(extent={{-100,-74},{-86,-60}})));
  OpenIPSL.Electrical.Banks.PSSE.Shunt shunt(G=0, B=0.1500569)
    annotation (Placement(transformation(extent={{74,86},{82,94}})));
  OpenIPSL.Electrical.Banks.PSSE.Shunt shunt1(G=0, B=0.19)
    annotation (Placement(visible = true, transformation(extent = {{102, 4}, {110, 12}}, rotation = 0)));
equation
  connect(pwLine12.p, Bus_12.p)
    annotation (Line(points={{-46,59},{-46,41},{-69,41}}, color={0,0,255}));
  connect(pwLine11.p, Bus_12.p)
    annotation (Line(points={{-53,36},{-60,36},{-60,41},{-69,41}},
                                                          color={0,0,255}));
  connect(LOAD_12.p, Bus_12.p) annotation (Line(points={{-91,28},{-90,28},{-90,
          41},{-69,41}}, color={0,0,255}));
  connect(pwLine15.n, Bus_13.p)
    annotation (Line(points={{-26,69},{-26,87},{-17,87}}, color={0,0,255}));
  connect(pwLine12.n, Bus_13.p)
    annotation (Line(points={{-46,77},{-46,87},{-17,87}}, color={0,0,255}));
  connect(LOAD_13.p, Bus_13.p) annotation (Line(points={{4,89},{4,88},{-17,88},
          {-17,87}}, color={0,0,255}));
  connect(LOAD_06.p, Bus_06.p) annotation (Line(points={{-35,22},{-34,22},{-34,
          32},{-20,32}}, color={0,0,255}));
  connect(pwLine11.n, Bus_06.p)
    annotation (Line(points={{-35,36},{-20,36},{-20,32}}, color={0,0,255}));
  connect(pwLine15.p, Bus_06.p)
    annotation (Line(points={{-26,51},{-26,32},{-20,32}}, color={0,0,255}));
  connect(pwLine9.p, Bus_06.p) annotation (Line(points={{-11,48},{-14,48},{-14,
          32},{-20,32}}, color={0,0,255}));
  connect(gen_Bus_6_1.pwPin, Bus_06.p) annotation (Line(points={{6.6,26},{10,26},
          {10,38},{-10,38},{-10,32},{-20,32}}, color={0,0,255}));
  connect(twoWindingTransformer.n, Bus_06.p)
    annotation (Line(points={{-8,15},{-8,32},{-20,32}}, color={0,0,255}));
  connect(gen_Bus_2_1.pwPin, Bus_02.p) annotation (Line(points={{-85.3,-67},{
          -76,-67},{-76,-75},{-63,-75}}, color={0,0,255}));
  connect(LOAD_02.p, Bus_02.p)
    annotation (Line(points={{-72,-88},{-72,-75},{-63,-75}}, color={0,0,255}));
  connect(Bus_02.p, pwLine.p)
    annotation (Line(points={{-63,-75},{-56,-75},{-56,-55}}, color={0,0,255}));
  connect(pwLine4.p, Bus_02.p) annotation (Line(points={{-34,-55},{-34,-64},{
          -52,-64},{-52,-74},{-58,-74},{-58,-75},{-63,-75}}, color={0,0,255}));
  connect(pwLine5.p, Bus_02.p) annotation (Line(points={{-10,-55},{-10,-68},{
          -50,-68},{-50,-75},{-63,-75}}, color={0,0,255}));
  connect(pwLine2.p, Bus_02.p) annotation (Line(points={{-45,-76},{-54,-76},{
          -54,-75},{-63,-75}}, color={0,0,255}));
  connect(Bus_03.p, pwLine2.n) annotation (Line(points={{2,-90},{-12,-90},{-12,
          -76},{-27,-76}}, color={0,0,255}));
  connect(LOAD_03.p, pwLine2.n) annotation (Line(points={{-31,-102},{-32,-102},
          {-32,-90},{-12,-90},{-12,-76},{-27,-76}}, color={0,0,255}));
  connect(gen_Bus_3_1.pwPin, Bus_03.p)
    annotation (Line(points={{17.3,-90},{2,-90}}, color={0,0,255}));
  connect(pwLine6.p, Bus_03.p)
    annotation (Line(points={{8,-55},{8,-90},{2,-90}}, color={0,0,255}));
  connect(Bus_08.p, twoWindingTransformer3.n)
    annotation (Line(points={{94,-48},{76,-48},{76,-39}}, color={0,0,255}));
  connect(gen_Bus_8_1.pwPin, Bus_08.p) annotation (Line(points={{102.6,-74},{
          112,-74},{112,-48},{94,-48}}, color={0,0,255}));
  connect(twoWindingTransformer1.n, Bus_07.p)
    annotation (Line(points={{49,-12},{60,-12}}, color={0,0,255}));
  connect(Bus_07.p, pwLine14.n)
    annotation (Line(points={{60,-12},{72,-12},{72,-5.4}}, color={0,0,255}));
  connect(twoWindingTransformer3.p, pwLine14.n) annotation (Line(points={{76,
          -25},{76,-12},{72,-12},{72,-5.4}}, color={0,0,255}));
  connect(pwLine1.n, Bus_05.p)
    annotation (Line(points={{-33,-18},{-18,-18},{-18,-20}}, color={0,0,255}));
  connect(pwLine4.n, Bus_05.p) annotation (Line(points={{-34,-37},{-34,-24},{
          -26,-24},{-26,-20},{-18,-20}}, color={0,0,255}));
  connect(LOAD_05.p, Bus_05.p) annotation (Line(points={{-23,-4},{-24,-4},{-24,
          -20},{-18,-20}}, color={0,0,255}));
  connect(Bus_05.p, twoWindingTransformer.p)
    annotation (Line(points={{-18,-20},{-8,-20},{-8,1}}, color={0,0,255}));
  connect(pwLine3.p, Bus_05.p) annotation (Line(points={{-7,-22},{-12,-22},{-12,
          -20},{-18,-20}}, color={0,0,255}));
  connect(gen_Bus_1_1.pwPin, Bus_01.p) annotation (Line(points={{-79.3,-21},{
          -68,-21},{-68,-20}}, color={0,0,255}));
  connect(pwLine1.p, Bus_01.p)
    annotation (Line(points={{-51,-18},{-68,-18},{-68,-20}}, color={0,0,255}));
  connect(pwLine.n, Bus_01.p) annotation (Line(points={{-56,-37},{-56,-18},{-68,
          -18},{-68,-20}}, color={0,0,255}));
  connect(pwLine3.n, Bus_04.p)
    annotation (Line(points={{11,-22},{22,-22},{22,-20}}, color={0,0,255}));
  connect(pwLine5.n, Bus_04.p) annotation (Line(points={{-10,-37},{-10,-28},{16,
          -28},{16,-22},{22,-22},{22,-20}}, color={0,0,255}));
  connect(pwLine6.n, Bus_04.p) annotation (Line(points={{8,-37},{8,-28},{16,-28},
          {16,-22},{22,-22},{22,-20}}, color={0,0,255}));
  connect(twoWindingTransformer2.p, Bus_04.p) annotation (Line(points={{43,14},
          {26,14},{26,-20},{22,-20}}, color={0,0,255}));
  connect(twoWindingTransformer1.p, Bus_04.p) annotation (Line(points={{35,-12},
          {30,-12},{30,-20},{22,-20}}, color={0,0,255}));
  connect(pwFault.p, Bus_04.p) annotation (Line(points={{41,-40},{30,-40},{30,
          -20},{22,-20}}, color={0,0,255}));
  connect(LOAD_04.p, Bus_04.p) annotation (Line(points={{11,-2},{10,-2},{10,-14},
          {16,-14},{16,-22},{22,-22},{22,-20}}, color={0,0,255}));
  connect(Bus_10.p, LOAD_10.p) annotation (Line(points={{47,43},{52,43},{52,45},
          {60,45}}, color={0,0,255}));
  connect(pwLine7.n, LOAD_10.p) annotation (Line(points={{55,32},{52,32},{52,45},
          {60,45}}, color={0,0,255}));
  connect(Bus_10.p, pwLine10.n) annotation (Line(points={{47,43},{44,43},{44,44},
          {39,44}}, color={0,0,255}));
  connect(twoWindingTransformer2.n, Bus_09.p) annotation (Line(points={{57,14},
          {74,14},{74,19},{89,19}}, color={0,0,255}));
  connect(pwLine14.p, Bus_09.p) annotation (Line(points={{72,5.4},{72,14},{74,
          14},{74,19},{89,19}}, color={0,0,255}));
  connect(pwLine7.p, Bus_09.p) annotation (Line(points={{73,32},{80,32},{80,19},
          {89,19}}, color={0,0,255}));
  connect(Bus_09.p, shunt1.p)
    annotation (Line(points={{89,19},{106,19},{106,12}}, color={0,0,255}));
  connect(pwLine8.n, shunt1.p) annotation (Line(points={{100,29},{100,19},{106,
          19},{106,12}}, color={0,0,255}));
  connect(LOAD_09.p, shunt1.p) annotation (Line(points={{99,-6},{98,-6},{98,19},
          {106,19},{106,12}}, color={0,0,255}));
  connect(pwLine9.n, Bus_11.p) annotation (Line(points={{7,48},{10,48},{10,55},
          {15,55}}, color={0,0,255}));
  connect(Bus_11.p, LOAD_11.p) annotation (Line(points={{15,55},{22,55},{22,63},
          {36,63}}, color={0,0,255}));
  connect(pwLine10.p, LOAD_11.p) annotation (Line(points={{21,44},{18,44},{18,
          55},{22,55},{22,63},{36,63}}, color={0,0,255}));
  connect(pwLine13.p, Bus_14.p) annotation (Line(points={{41,80},{60,80},{60,72},
          {86,72}}, color={0,0,255}));
  connect(pwLine8.p, Bus_14.p) annotation (Line(points={{100,47},{100,64},{92,
          64},{92,72},{86,72}}, color={0,0,255}));
  connect(shunt.p, Bus_14.p) annotation (Line(points={{78,94},{78,96},{96,96},{
          96,74},{94,74},{94,72},{86,72}}, color={0,0,255}));
  connect(LOAD_14.p, Bus_14.p) annotation (Line(points={{104,73},{100,73},{100,
          72},{86,72}}, color={0,0,255}));
  connect(Bus_13.p, pwLine13.n) annotation (Line(points={{-17,87},{-6,87},{-6,
          80},{23,80}}, color={0,0,255}));
 annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-120,-120},
     {120,100}})),
        Diagram(coordinateSystem(preserveAspectRatio=false,
   extent={{-120,-120},{120,100}}), graphics={
    Text(
   extent={{-36,20},{-2,20}},
   lineColor={28,108,200},
   textString="Bus_06"),
    Text(
   extent={{42,-24},{76,-24}},
   lineColor={28,108,200},
   textString="Bus_07"),
    Text(
   extent={{70,-66},{104,-66}},
   lineColor={28,108,200},
   textString="Bus_08"),
    Text(
   extent={{-36,72},{-2,72}},
   lineColor={28,108,200},
   textString="Bus_13")}),
   experiment(StopTime=5));
end IEEE14_Base_Case;
