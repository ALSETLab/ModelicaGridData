within AVRI;
model AVRI_Base_Case

OpenIPSL.Electrical.Buses.Bus B01(V_0=pf.powerflow.bus.V1, angle_0=pf.powerflow.bus.A1)
    annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-80,-70})));
OpenIPSL.Electrical.Buses.Bus B02(V_0=pf.powerflow.bus.V2, angle_0=pf.powerflow.bus.A2)
    annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-80,-50})));
OpenIPSL.Electrical.Buses.Bus B03(V_0=pf.powerflow.bus.V3, angle_0=pf.powerflow.bus.A3)
    annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-80,-30})));
OpenIPSL.Electrical.Buses.Bus B04(V_0=pf.powerflow.bus.V4, angle_0=pf.powerflow.bus.A4)
    annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={4,-10})));
OpenIPSL.Electrical.Buses.Bus B05(V_0=pf.powerflow.bus.V5, angle_0=pf.powerflow.bus.A5)
    annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-80,10})));
OpenIPSL.Electrical.Buses.Bus B06(V_0=pf.powerflow.bus.V6, angle_0=pf.powerflow.bus.A6)
    annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-80,30})));
OpenIPSL.Electrical.Buses.Bus B07(V_0=pf.powerflow.bus.V7, angle_0=pf.powerflow.bus.A7)
    annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=180,
        origin={-76,70})));
OpenIPSL.Electrical.Buses.Bus B08(V_0=pf.powerflow.bus.V8, angle_0=pf.powerflow.bus.A8)
    annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=0,
        origin={-96,70})));
OpenIPSL.Electrical.Buses.Bus B09(V_0=pf.powerflow.bus.V9, angle_0=pf.powerflow.bus.A9)
    annotation (Placement(transformation(extent={{16,-18},{32,-2}})));
OpenIPSL.Electrical.Buses.Bus B10(V_0=pf.powerflow.bus.V10, angle_0=pf.powerflow.bus.A10)
    annotation (Placement(transformation(extent={{78,-18},{94,-2}})));
OpenIPSL.Electrical.Buses.Bus B11(V_0=pf.powerflow.bus.V11, angle_0=pf.powerflow.bus.A11)
    annotation (Placement(transformation(extent={{96,-18},{112,-2}})));
OpenIPSL.Electrical.Buses.Bus B12(V_0=pf.powerflow.bus.V12, angle_0=pf.powerflow.bus.A12)
    annotation (Placement(transformation(extent={{116,-18},{132,-2}})));
OpenIPSL.Electrical.Buses.Bus B13(V_0=pf.powerflow.bus.V13, angle_0=pf.powerflow.bus.A13)
    annotation (Placement(transformation(extent={{36,-18},{52,-2}})));
OpenIPSL.Electrical.Buses.Bus B14(V_0=pf.powerflow.bus.V14, angle_0=pf.powerflow.bus.A14)
    annotation (Placement(transformation(extent={{56,-18},{72,-2}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to4(
  R=0,
  G=0,
  B=0,
  X=0.1) annotation (Placement(transformation(
      extent={{-3.5,-2.50002},{3.5,2.50002}},
      rotation=-90,
      origin={-80.5,-60.5})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to1(
  R=0,
  G=0,
  B=0,
  X=0.1) annotation (Placement(transformation(
      extent={{-3,-2},{3,2}},
      rotation=-90,
      origin={-80,-41})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to2(
  R=0,
  G=0,
  B=0,
  X=0.2) annotation (Placement(transformation(extent={{-50,-12},{-44,-8}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to3(
  R=0,
  G=0,
  B=0,
  X=0.1) annotation (Placement(transformation(extent={{10,-12},{16,-8}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to5(
  R=0,
  G=0,
  B=0,
  X=1.2) annotation (Placement(transformation(extent={{50,8},{56,12}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to6(
  R=0,
  G=0,
  B=0,
  X=0.1) annotation (Placement(transformation(
      extent={{-3,-2},{3,2}},
      rotation=0,
      origin={35,-10})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to7(
  R=0,
  G=0,
  B=0,
  X=0.2) annotation (Placement(transformation(extent={{50,-12},{56,-8}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to8(
  R=0,
  G=0,
  B=0,
  X=0.2) annotation (Placement(transformation(extent={{70,-12},{76,-8}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to9(
  R=0,
  G=0,
  B=0,
  X=0.1) annotation (Placement(transformation(extent={{90,-12},{96,-8}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to10(
  R=0,
  G=0,
  B=0,
  X=0.1) annotation (Placement(transformation(extent={{110,-12},{116,-8}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to11(
  R=0,
  G=0,
  B=0,
  X=0.4) annotation (Placement(transformation(
      extent={{-3.5,-2.50001},{3.5,2.50003}},
      rotation=90,
      origin={-80.5,21.5})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to12(
  R=0,
  G=0,
  B=0,
  X=0.1) annotation (Placement(transformation(
      extent={{-3.50001,-2.50002},{3.50001,2.50002}},
      rotation=90,
      origin={-79.5,46.5})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to13(
  R=0,
  G=0,
  B=0,
  X=0.2) annotation (Placement(transformation(extent={{-88,68},{-82,72}})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to14(
  R=0,
  G=0,
  B=0,
  X=0.2) annotation (Placement(transformation(
      extent={{-2.99999,-1.99996},{2.99998,2}},
      rotation=180,
      origin={-46,-1})));
OpenIPSL.Electrical.Branches.PwLine pwLine1to15(
  R=0,
  G=0,
  B=0,
  X=1.3) annotation (Placement(transformation(extent={{-46,68},{-40,72}})));
inner OpenIPSL.Electrical.SystemBase SysData
  annotation (Placement(transformation(extent={{-176,90},{-116,110}})));

  Generating_Units.Gen_B800 gen_B800_1(
    V_0=pf.powerflow.bus.V8,
    angle_0=pf.powerflow.bus.A8,
    P_0=pf.powerflow.machines.PG3,
    Q_0=pf.powerflow.machines.QG3)
    annotation (Placement(transformation(extent={{-130,60},{-110,80}})));
  Generating_Units.Gen_B100 gen_B100_1(
    V_0=pf.powerflow.bus.V1,
    angle_0=pf.powerflow.bus.A1,
    P_0=pf.powerflow.machines.PG1,
    Q_0=pf.powerflow.machines.QG1)     annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-80,-94})));
  Generating_Units.Gen_B1200 gen_B1200_1(
    V_0=pf.powerflow.bus.V12,
    angle_0=pf.powerflow.bus.A12,
    P_0=pf.powerflow.machines.PG2,
    Q_0=pf.powerflow.machines.QG2)       annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={152,-10})));
  OpenIPSL.Electrical.Loads.PSSE.Load          load_ExtInput(
    V_0=pf.powerflow.bus.V11,
    angle_0=pf.powerflow.bus.A11,
    P_0=pf.powerflow.loads.PL1,
    Q_0=pf.powerflow.loads.QL1)
    annotation (Placement(transformation(extent={{94,-64},{114,-44}})));
  PF_Data.Power_Flow pf(redeclare record PowerFlow = PF_Data.PF_00000)
    annotation (Placement(transformation(extent={{-100,92},{-80,112}})));
equation
  connect(pwLine1to4.n, B01.p) annotation (Line(
      points={{-80.5,-63.65},{-80,-63.65},{-80,-70}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to4.p, B02.p) annotation (Line(
      points={{-80.5,-57.35},{-80,-57.35},{-80,-50}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to1.p, B03.p) annotation (Line(
      points={{-80,-38.3},{-80,-30}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B05.p, pwLine1to11.p) annotation (Line(
      points={{-80,10},{-80,18.35},{-80.5,18.35}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B06.p, pwLine1to11.n) annotation (Line(
      points={{-80,30},{-80,24.65},{-80.5,24.65}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B06.p, pwLine1to12.p) annotation (Line(
      points={{-80,30},{-80,43.35},{-79.5,43.35}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to13.n, B07.p) annotation (Line(
      points={{-82.3,70},{-76,70}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to13.p, B08.p) annotation (Line(
      points={{-87.7,70},{-96,70}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B04.p, pwLine1to3.p) annotation (Line(
      points={{4,-10},{10.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to3.n, B09.p) annotation (Line(
      points={{15.7,-10},{24,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B10.p, pwLine1to9.p) annotation (Line(
      points={{86,-10},{90.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to9.n, B11.p) annotation (Line(
      points={{95.7,-10},{104,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B11.p, pwLine1to10.p) annotation (Line(
      points={{104,-10},{110.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to10.n, B12.p) annotation (Line(
      points={{115.7,-10},{124,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to15.n, B10.p) annotation (Line(
      points={{-40.3,70},{80,70},{80,-10},{86,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to15.p, B07.p) annotation (Line(
      points={{-45.7,70},{-76,70}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to6.n, B13.p) annotation (Line(
      points={{37.7,-10},{44,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B13.p, pwLine1to7.p) annotation (Line(
      points={{44,-10},{50.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B14.p, pwLine1to8.p) annotation (Line(
      points={{64,-10},{70.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to8.n, B10.p) annotation (Line(
      points={{75.7,-10},{86,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to7.n, B14.p) annotation (Line(
      points={{55.7,-10},{64,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to5.n, B10.p) annotation (Line(points={{55.7,10},{80,10},{80,-10},
          {86,-10}}, color={0,0,255}));
  connect(pwLine1to6.p, B09.p)
    annotation (Line(points={{32.3,-10},{24,-10}}, color={0,0,255}));
  connect(pwLine1to5.p, B09.p) annotation (Line(points={{50.3,10},{28,10},{28,-10},
          {24,-10}}, color={0,0,255}));
  connect(pwLine1to12.n, B07.p) annotation (Line(points={{-79.5,49.65},{-79.5,
          70},{-76,70}}, color={0,0,255}));
  connect(pwLine1to2.n, B04.p)
    annotation (Line(points={{-44.3,-10},{4,-10}}, color={0,0,255}));
  connect(pwLine1to1.n, B02.p)
    annotation (Line(points={{-80,-43.7},{-80,-50}}, color={0,0,255}));
  connect(pwLine1to14.n, B05.p) annotation (Line(points={{-48.7,-1.00002},{-80,
          -1.00002},{-80,10}}, color={0,0,255}));
  connect(pwLine1to14.p, B04.p) annotation (Line(points={{-43.3,-1.00002},{0,-1.00002},
          {0,-10},{4,-10}}, color={0,0,255}));
  connect(pwLine1to2.p, B03.p) annotation (Line(points={{-49.7,-10},{-80,-10},{
          -80,-30}}, color={0,0,255}));


  connect(gen_B800_1.pwPin, B08.p)
    annotation (Line(points={{-109,70},{-96,70}}, color={0,0,255}));
  connect(gen_B1200_1.pwPin, B12.p)
    annotation (Line(points={{141,-10},{124,-10}}, color={0,0,255}));
  connect(gen_B100_1.pwPin, B01.p)
    annotation (Line(points={{-80,-83},{-80,-70}}, color={0,0,255}));
  connect(load_ExtInput.p, B11.p)
    annotation (Line(points={{104,-44},{104,-10}}, color={0,0,255}));
  annotation (Diagram(coordinateSystem(extent={{-180,-120},{180,120}})), Icon(
        coordinateSystem(extent={{-180,-120},{180,120}})));
end AVRI_Base_Case;
