within AVRI;
model AVRI_Base_Case

OpenIPSL.Electrical.Buses.Bus B100 annotation (Placement(transformation(
      extent={{-8,-8},{8,8}},
      rotation=90,
      origin={-80,-70})));
OpenIPSL.Electrical.Buses.Bus B200 annotation (Placement(transformation(
      extent={{-8,-8},{8,8}},
      rotation=90,
      origin={-80,-50})));
OpenIPSL.Electrical.Buses.Bus B300 annotation (Placement(transformation(
      extent={{-8,-8},{8,8}},
      rotation=90,
      origin={-80,-30})));
OpenIPSL.Electrical.Buses.Bus B400 annotation (Placement(transformation(
      extent={{-8,-8},{8,8}},
      rotation=0,
      origin={4,-10})));
OpenIPSL.Electrical.Buses.Bus B500 annotation (Placement(transformation(
      extent={{-8,-8},{8,8}},
      rotation=90,
      origin={-80,10})));
OpenIPSL.Electrical.Buses.Bus B600 annotation (Placement(transformation(
      extent={{-8,-8},{8,8}},
      rotation=90,
      origin={-80,30})));
OpenIPSL.Electrical.Buses.Bus B700 annotation (Placement(transformation(
      extent={{-8,-8},{8,8}},
      rotation=180,
      origin={-76,70})));
OpenIPSL.Electrical.Buses.Bus B800 annotation (Placement(transformation(
      extent={{-8,-8},{8,8}},
      rotation=0,
      origin={-96,70})));
OpenIPSL.Electrical.Buses.Bus B900
  annotation (Placement(transformation(extent={{16,-18},{32,-2}})));
OpenIPSL.Electrical.Buses.Bus B1000
  annotation (Placement(transformation(extent={{78,-18},{94,-2}})));
OpenIPSL.Electrical.Buses.Bus B1100
  annotation (Placement(transformation(extent={{96,-18},{112,-2}})));
OpenIPSL.Electrical.Buses.Bus B1200
  annotation (Placement(transformation(extent={{116,-18},{132,-2}})));
OpenIPSL.Electrical.Buses.Bus B1300
  annotation (Placement(transformation(extent={{36,-18},{52,-2}})));
OpenIPSL.Electrical.Buses.Bus B1400
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

  Generating_Units.Gen_B800 gen_B800_1
    annotation (Placement(transformation(extent={{-130,60},{-110,80}})));
  Generating_Units.Gen_B100 gen_B100_1 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-80,-94})));
  Generating_Units.Gen_B1200 gen_B1200_1 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={152,-10})));
equation
  connect(pwLine1to4.n,B100. p) annotation (Line(
      points={{-80.5,-63.65},{-80,-63.65},{-80,-70}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to4.p,B200. p) annotation (Line(
      points={{-80.5,-57.35},{-80,-57.35},{-80,-50}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to1.p,B300. p) annotation (Line(
      points={{-80,-38.3},{-80,-30}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B500.p,pwLine1to11. p) annotation (Line(
      points={{-80,10},{-80,18.35},{-80.5,18.35}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B600.p,pwLine1to11. n) annotation (Line(
      points={{-80,30},{-80,24.65},{-80.5,24.65}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B600.p,pwLine1to12. p) annotation (Line(
      points={{-80,30},{-80,43.35},{-79.5,43.35}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to13.n,B700. p) annotation (Line(
      points={{-82.3,70},{-76,70}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to13.p,B800. p) annotation (Line(
      points={{-87.7,70},{-96,70}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B400.p,pwLine1to3. p) annotation (Line(
      points={{4,-10},{10.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to3.n,B900. p) annotation (Line(
      points={{15.7,-10},{24,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B1000.p,pwLine1to9. p) annotation (Line(
      points={{86,-10},{90.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to9.n,B1100. p) annotation (Line(
      points={{95.7,-10},{104,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B1100.p,pwLine1to10. p) annotation (Line(
      points={{104,-10},{110.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to10.n,B1200. p) annotation (Line(
      points={{115.7,-10},{124,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to15.n,B1000. p) annotation (Line(
      points={{-40.3,70},{80,70},{80,-10},{86,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to15.p,B700. p) annotation (Line(
      points={{-45.7,70},{-76,70}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to6.n,B1300. p) annotation (Line(
      points={{37.7,-10},{44,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B1300.p,pwLine1to7. p) annotation (Line(
      points={{44,-10},{50.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(B1400.p,pwLine1to8. p) annotation (Line(
      points={{64,-10},{70.3,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to8.n,B1000. p) annotation (Line(
      points={{75.7,-10},{86,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to7.n,B1400. p) annotation (Line(
      points={{55.7,-10},{64,-10}},
      color={0,0,255},
      smooth=Smooth.None));
  connect(pwLine1to5.n,B1000. p) annotation (Line(points={{55.7,10},{80,10},{80,
          -10},{86,-10}},
                      color={0,0,255}));
  connect(pwLine1to6.p,B900. p)
    annotation (Line(points={{32.3,-10},{24,-10}},       color={0,0,255}));
  connect(pwLine1to5.p,B900. p) annotation (Line(points={{50.3,10},{28,10},{28,
          -10},{24,-10}},
                      color={0,0,255}));
  connect(pwLine1to12.n,B700. p) annotation (Line(points={{-79.5,49.65},{-79.5,
          70},{-76,70}}, color={0,0,255}));
  connect(pwLine1to2.n,B400. p)
    annotation (Line(points={{-44.3,-10},{4,-10}},       color={0,0,255}));
  connect(pwLine1to1.n,B200. p) annotation (Line(points={{-80,-43.7},{-80,-50}},
                      color={0,0,255}));
  connect(pwLine1to14.n,B500. p) annotation (Line(points={{-48.7,-1.00002},{-80,
          -1.00002},{-80,10}},color={0,0,255}));
  connect(pwLine1to14.p,B400. p) annotation (Line(points={{-43.3,-1.00002},{0,
          -1.00002},{0,-10},{4,-10}},
                                  color={0,0,255}));
  connect(pwLine1to2.p,B300. p)
    annotation (Line(points={{-49.7,-10},{-80,-10},{-80,-30}},
                                                           color={0,0,255}));


  connect(gen_B800_1.pwPin, B800.p)
    annotation (Line(points={{-109,70},{-96,70}}, color={0,0,255}));
  connect(gen_B1200_1.pwPin, B1200.p)
    annotation (Line(points={{141,-10},{124,-10}}, color={0,0,255}));
  connect(gen_B100_1.pwPin, B100.p)
    annotation (Line(points={{-80,-83},{-80,-70}}, color={0,0,255}));
  annotation (Diagram(coordinateSystem(extent={{-140,-120},{180,100}})), Icon(
        coordinateSystem(extent={{-140,-120},{180,100}})));
end AVRI_Base_Case;
