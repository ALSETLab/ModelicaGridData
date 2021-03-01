within SMIB;
model SMIB_Base_Case
  Generation_Units.Gen01 gen01_1(
    V_0=pf.powerflow.bus.V1,
    angle_0=pf.powerflow.bus.A1,
    P_0=pf.powerflow.machines.PG1,
    Q_0=pf.powerflow.machines.QG1,
    displayPF=true)
    annotation (Placement(transformation(extent={{-96,-10},{-76,10}})));
  Generation_Units.Gen02 gen02_1(
    V_0=pf.powerflow.bus.V2,
    angle_0=pf.powerflow.bus.A2,
    P_0=pf.powerflow.machines.PG2,
    Q_0=pf.powerflow.machines.QG2,
    displayPF=true)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=180,
        origin={88,0})));
  OpenIPSL.Electrical.Buses.Bus B01(V_0=pf.powerflow.bus.V1, angle_0=pf.powerflow.bus.A1)
    annotation (Placement(transformation(extent={{-70,-10},{-50,10}})));
  OpenIPSL.Electrical.Buses.Bus B02(V_0=pf.powerflow.bus.V2, angle_0=pf.powerflow.bus.A2)
    annotation (Placement(transformation(extent={{54,-10},{74,10}})));
  OpenIPSL.Electrical.Branches.PwLine line_03(
    R=0.0005,
    X=0.1000,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-6,-30},{14,-10}})));
  OpenIPSL.Electrical.Branches.PwLine line_01(
    R=0.001,
    X=0.2,
    G=0,
    B=0) annotation (Placement(transformation(extent={{-50,-10},{-30,10}})));
  OpenIPSL.Electrical.Buses.Bus B03(V_0=pf.powerflow.bus.V3, angle_0=pf.powerflow.bus.A3)
    annotation (Placement(transformation(extent={{-30,-10},{-10,10}})));
  OpenIPSL.Electrical.Buses.Bus B04(V_0=pf.powerflow.bus.V4, angle_0=pf.powerflow.bus.A4)
    annotation (Placement(transformation(extent={{10,-30},{30,-10}})));
  OpenIPSL.Electrical.Branches.PwLine line_02(
    R=0.0010,
    X=0.2000,
    G=0.0000,
    B=0)
    annotation (Placement(transformation(extent={{10,10},{30,30}})));
  OpenIPSL.Electrical.Branches.PwLine line_04(
    R=0.0005,
    X=0.1000,
    G=0,
    B=0)
    annotation (Placement(transformation(extent={{28,-30},{48,-10}})));
  OpenIPSL.Electrical.Loads.PSSE.Load load(
    V_0=pf.powerflow.bus.V3,
    angle_0=pf.powerflow.bus.A3,
    P_0=pf.powerflow.loads.PL1,
    Q_0=pf.powerflow.loads.QL1)            annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={-14,-36})));
  OpenIPSL.Electrical.Events.PwFault pwFault(
    R=0.01,
    X=0.1,
    t1=1,
    t2=1.1)                                  annotation (Placement(
        transformation(
        extent={{-6,-6},{6,6}},
        rotation=270,
        origin={34,-42})));
  inner OpenIPSL.Electrical.SystemBase SysData
    annotation (Placement(transformation(extent={{-84,44},{-46,56}})));
  PF_Data.Power_Flow pf(redeclare record PowerFlow = PF_Data.PF_00000)
    annotation (Placement(transformation(extent={{-34,40},{-14,60}})));
equation
  connect(gen01_1.pwPin, B01.p)
    annotation (Line(points={{-75,0},{-60,0}}, color={0,0,255}));
  connect(gen02_1.pwPin, B02.p)
    annotation (Line(points={{77,0},{64,0}}, color={0,0,255}));
  connect(B01.p, line_01.p)
    annotation (Line(points={{-60,0},{-49,0}}, color={0,0,255}));
  connect(line_01.n, B03.p)
    annotation (Line(points={{-31,0},{-20,0}}, color={0,0,255}));
  connect(line_02.n, B02.p)
    annotation (Line(points={{29,20},{52,20},{52,0},{64,0}}, color={0,0,255}));
  connect(line_04.p,B04. p)
    annotation (Line(points={{29,-20},{20,-20}}, color={0,0,255}));
  connect(line_03.n,B04. p)
    annotation (Line(points={{13,-20},{20,-20}}, color={0,0,255}));
  connect(line_02.p, B03.p) annotation (Line(points={{11,20},{-14,20},{-14,0},{
          -20,0}}, color={0,0,255}));
  connect(line_04.n, B02.p) annotation (Line(points={{47,-20},{52,-20},{52,0},{
          64,0}}, color={0,0,255}));
  connect(line_03.p, B03.p) annotation (Line(points={{-5,-20},{-14,-20},{-14,0},
          {-20,0}}, color={0,0,255}));
  connect(load.p, B03.p)
    annotation (Line(points={{-14,-28},{-14,0},{-20,0}}, color={0,0,255}));
  connect(pwFault.p,B04. p) annotation (Line(points={{34,-35},{34,-28},{24,-28},
          {24,-20},{20,-20}}, color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end SMIB_Base_Case;
