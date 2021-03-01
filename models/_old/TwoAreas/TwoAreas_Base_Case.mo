within TwoAreas;
model TwoAreas_Base_Case
parameter Real r=0.0001;
parameter Real x=0.001;
parameter Real b=0.00175*0.5;

OpenIPSL.Electrical.Buses.Bus B01
    annotation (Placement(transformation(extent={{-190,20},{-170,40}})));
OpenIPSL.Electrical.Buses.Bus B02
    annotation (Placement(transformation(extent={{-190,-10},{-170,10}})));
OpenIPSL.Electrical.Buses.Bus B03
    annotation (Placement(transformation(extent={{170,20},{190,40}})));
OpenIPSL.Electrical.Buses.Bus B04
    annotation (Placement(transformation(extent={{170,-20},{190,0}})));
OpenIPSL.Electrical.Buses.Bus B05
    annotation (Placement(transformation(extent={{-150,20},{-130,40}})));
OpenIPSL.Electrical.Buses.Bus B06
    annotation (Placement(transformation(extent={{-110,20},{-90,40}})));
OpenIPSL.Electrical.Buses.Bus B07
    annotation (Placement(transformation(extent={{-70,20},{-50,40}})));
OpenIPSL.Electrical.Buses.Bus B08
    annotation (Placement(transformation(extent={{-10,20},{10,40}})));
OpenIPSL.Electrical.Buses.Bus B09
    annotation (Placement(transformation(extent={{50,20},{70,40}})));
OpenIPSL.Electrical.Buses.Bus B10
    annotation (Placement(transformation(extent={{90,20},{110,40}})));
OpenIPSL.Electrical.Buses.Bus B11
    annotation (Placement(transformation(extent={{130,20},{150,40}})));
  OpenIPSL.Electrical.Branches.PwLine Line06_07(
    R=0.001,
    X=0.01,
    G=0,
    B=0.008750)
    annotation (Placement(transformation(extent={{-90,20},{-70,40}})));
  OpenIPSL.Electrical.Branches.PwLine Line05_06(
    R=0.0025,
    X=0.025,
    G=0,
    B=0.021875)
    annotation (Placement(transformation(extent={{-130,20},{-110,40}})));
  OpenIPSL.Electrical.Branches.PwLine Line07_08_1(
    R=0.011,
    X=0.11,
    G=0,
    B=0.096250)
    annotation (Placement(transformation(extent={{-40,30},{-20,50}})));
  OpenIPSL.Electrical.Branches.PwLine Line07_08_2(
    R=0.011,
    X=0.11,
    G=0,
    B=0.096250)
    annotation (Placement(transformation(extent={{-40,10},{-20,30}})));
  OpenIPSL.Electrical.Branches.PwLine Line08_09_2(
    R=0.011,
    X=0.11,
    G=0,
    B=0.096250) annotation (Placement(transformation(extent={{20,10},{40,30}})));
  OpenIPSL.Electrical.Branches.PwLine Line08_09_1(
    R=0.011,
    X=0.11,
    G=0,
    B=0.096250) annotation (Placement(transformation(extent={{20,30},{40,50}})));
  OpenIPSL.Electrical.Branches.PwLine Line09_10(
    R=0.001,
    X=0.01,
    G=0,
    B=0.008750) annotation (Placement(transformation(extent={{70,20},{90,40}})));
  OpenIPSL.Electrical.Branches.PwLine Line10_11(
    R=0.0025,
    X=0.025,
    G=0,
    B=0.021875)
            annotation (Placement(transformation(extent={{110,20},{130,40}})));
  OpenIPSL.Electrical.Events.PwFault pwFault(
    X=0.1,
    R=0.01,
    t1=3,
    t2=3.1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={2,-16})));
  OpenIPSL.Electrical.Loads.PSSE.Load Load7(
    PQBRAK=0.7,
    V_0=pf.powerflow.bus.V7,
    angle_0=pf.powerflow.bus.A7,
    P_0=pf.powerflow.loads.PL1,
    Q_0=pf.powerflow.loads.QL1)
    annotation (Placement(transformation(extent={{-78,-26},{-50,0}})));
  OpenIPSL.Electrical.Loads.PSSE.Load Load9(
    PQBRAK=0.7,
    V_0=pf.powerflow.bus.V9,
    angle_0=pf.powerflow.bus.A9,
    P_0=pf.powerflow.loads.PL2,
    Q_0=pf.powerflow.loads.QL2)
    annotation (Placement(transformation(extent={{80,-26},{50,0}})));
  OpenIPSL.Electrical.Branches.PwLine Line01_05(
    G=0,
    R=0,
    X=0.01667,
    B=0) annotation (Placement(transformation(extent={{-170,20},{-150,40}})));
  OpenIPSL.Electrical.Branches.PwLine Line02_06(
    G=0,
    R=0,
    X=0.01667,
    B=0) annotation (Placement(transformation(extent={{-170,-10},{-150,10}})));
  OpenIPSL.Electrical.Branches.PwLine Line03_11(
    G=0,
    R=0,
    X=0.01667,
    B=0) annotation (Placement(transformation(extent={{150,20},{170,40}})));
  OpenIPSL.Electrical.Branches.PwLine Line04_10(
    G=0,
    R=0,
    X=0.01667,
    B=0) annotation (Placement(transformation(extent={{130,-20},{150,0}})));
  inner OpenIPSL.Electrical.SystemBase SysData(fn=60)
    annotation (Placement(transformation(extent={{-208,70},{-158,92}})));
  Generating_Units.Gen1_No_AVR gen1_No_AVR(
    V_0=pf.powerflow.bus.V1,
    angle_0=pf.powerflow.bus.A1,
    P_0=pf.powerflow.machines.PG1,
    Q_0=pf.powerflow.machines.QG1,
    displayPF=true)
    annotation (Placement(transformation(extent={{-218,20},{-198,40}})));
  Generating_Units.Gen2_No_AVR gen2_No_AVR(
    V_0=pf.powerflow.bus.V2,
    angle_0=pf.powerflow.bus.A2,
    P_0=pf.powerflow.machines.PG2,
    Q_0=pf.powerflow.machines.QG2,
    displayPF=true)
    annotation (Placement(transformation(extent={{-218,-10},{-198,10}})));
  Generating_Units.Gen3_No_AVR gen3_No_AVR(
    V_0=pf.powerflow.bus.V3,
    angle_0=pf.powerflow.bus.A3,
    P_0=pf.powerflow.machines.PG3,
    Q_0=pf.powerflow.machines.QG3,
    displayPF=true)                        annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={206,30})));
  Generating_Units.Gen4_No_AVR gen4_No_AVR(
    V_0=pf.powerflow.bus.V4,
    angle_0=pf.powerflow.bus.A4,
    P_0=pf.powerflow.machines.PG4,
    Q_0=pf.powerflow.machines.QG4,
    displayPF=true)                        annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={206,-10})));
  PF_Data.Power_Flow pf(redeclare record PowerFlow = PF_Data.PF_00000)
    annotation (Placement(transformation(extent={{-142,68},{-122,88}})));
equation
  connect(Line06_07.n, B07.p)
    annotation (Line(points={{-71,30},{-71,30},{-60,30}}, color={0,0,255}));
  connect(Line06_07.p, B06.p)
    annotation (Line(points={{-89,30},{-89,30},{-100,30}}, color={0,0,255}));
  connect(Line05_06.n, B06.p)
    annotation (Line(points={{-111,30},{-111,30},{-100,30}}, color={0,0,255}));
  connect(Line05_06.p, B05.p)
    annotation (Line(points={{-129,30},{-129,30},{-140,30}}, color={0,0,255}));
  connect(Line08_09_2.n, B09.p) annotation (Line(points={{39,20},{54,20},{54,30},
          {60,30}}, color={0,0,255}));
  connect(Line08_09_1.n, B09.p) annotation (Line(points={{39,40},{54,40},{54,30},
          {60,30}}, color={0,0,255}));
  connect(Line08_09_2.p, B08.p)
    annotation (Line(points={{21,20},{6,20},{6,30},{0,30}}, color={0,0,255}));
  connect(Line08_09_1.p, B08.p)
    annotation (Line(points={{21,40},{6,40},{6,30},{0,30}}, color={0,0,255}));
  connect(Line07_08_2.n, B08.p) annotation (Line(points={{-21,20},{-6,20},{-6,
          22},{-6,30},{0,30}}, color={0,0,255}));
  connect(Line07_08_1.n, B08.p) annotation (Line(points={{-21,40},{-6,40},{-6,
          30},{0,30}}, color={0,0,255}));
  connect(Line07_08_1.p, B07.p) annotation (Line(points={{-39,40},{-54,40},{-54,
          30},{-60,30}}, color={0,0,255}));
  connect(Line07_08_2.p, B07.p) annotation (Line(points={{-39,20},{-54,20},{-54,
          30},{-60,30}}, color={0,0,255}));
  connect(B09.p, Line09_10.p)
    annotation (Line(points={{60,30},{71,30}}, color={0,0,255}));
  connect(Line09_10.n, B10.p)
    annotation (Line(points={{89,30},{89,30},{100,30}}, color={0,0,255}));
  connect(B10.p, Line10_11.p)
    annotation (Line(points={{100,30},{111,30}}, color={0,0,255}));
  connect(Line10_11.n, B11.p)
    annotation (Line(points={{129,30},{129,30},{140,30}}, color={0,0,255}));
  connect(Load7.p, B07.p) annotation (Line(points={{-64,0},{-64,0},{-64,30},{-60,
          30}}, color={0,0,255}));
  connect(Load9.p, Line09_10.p)
    annotation (Line(points={{65,0},{66,0},{66,30},{71,30}}, color={0,0,255}));
  connect(pwFault.p, B08.p)
    annotation (Line(points={{2,-4.33333},{2,30},{0,30}}, color={0,0,255}));
  connect(B01.p, Line01_05.p)
    annotation (Line(points={{-180,30},{-169,30}}, color={0,0,255}));
  connect(B05.p, Line01_05.n)
    annotation (Line(points={{-140,30},{-151,30}}, color={0,0,255}));
  connect(B02.p, Line02_06.p)
    annotation (Line(points={{-180,0},{-169,0}}, color={0,0,255}));
  connect(Line02_06.n, B06.p) annotation (Line(points={{-151,0},{-104,0},{-104,
          30},{-100,30}}, color={0,0,255}));
  connect(B11.p, Line03_11.p)
    annotation (Line(points={{140,30},{151,30}}, color={0,0,255}));
  connect(Line03_11.n, B03.p)
    annotation (Line(points={{169,30},{169,30},{180,30}}, color={0,0,255}));
  connect(B04.p, Line04_10.n)
    annotation (Line(points={{180,-10},{149,-10}}, color={0,0,255}));
  connect(Line04_10.p, Line10_11.p) annotation (Diagram(coordinateSystem(extent=
           {{-220,-100},{220,100}})), Icon(coordinateSystem(extent={{-220,-100},
            {220,100}})));

  connect(B10.p, Line04_10.p) annotation (Line(points={{100,30},{106,30},{106,
          -10},{131,-10}}, color={0,0,255}));
  connect(gen1_No_AVR.pwPin, B01.p)
    annotation (Line(points={{-197,30},{-180,30}}, color={0,0,255}));
  connect(gen2_No_AVR.pwPin, B02.p)
    annotation (Line(points={{-197,0},{-180,0}}, color={0,0,255}));
  connect(gen3_No_AVR.pwPin, B03.p)
    annotation (Line(points={{195,30},{180,30}}, color={0,0,255}));
  connect(gen4_No_AVR.pwPin, B04.p)
    annotation (Line(points={{195,-10},{180,-10}}, color={0,0,255}));
end TwoAreas_Base_Case;
