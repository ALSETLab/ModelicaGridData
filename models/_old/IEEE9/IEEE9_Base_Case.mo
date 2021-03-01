within IEEE9;
model IEEE9_Base_Case
  import Modelica.Constants.pi;
  OpenIPSL.Electrical.Branches.PwLine line_6_4(
    R=0.017000,
    X=0.092000,
    G=0,
    B=0.158000*0.5)
             annotation (Placement(transformation(
        extent={{-9,-6},{9,6}},
        rotation=270,
        origin={74,-21})));
  OpenIPSL.Electrical.Branches.PwLine line_4_5(
    G=0,
    R=0.010000,
    X=0.085000,
    B=0.176000*0.5)
             annotation (Placement(transformation(
        extent={{-9,-6},{9,6}},
        rotation=270,
        origin={-72,-21})));
  OpenIPSL.Electrical.Branches.PwLine line_9_6(
    G=0,
    R=0.039000,
    X=0.170000,
    B=0.358000*0.5)
             annotation (Placement(transformation(
        extent={{-9,-6},{9,6}},
        rotation=90,
        origin={78,57})));
  OpenIPSL.Electrical.Branches.PwLine line_5_7(
    G=0,
    R=0.032000,
    X=0.161000,
    B=0.306000*0.5)
             annotation (Placement(transformation(
        extent={{-9,-6},{9,6}},
        rotation=90,
        origin={-74,45})));
  OpenIPSL.Electrical.Branches.PwLine line_8_9(
    G=0,
    R=0.011900,
    X=0.100800,
    B=0.209000*0.5)
              annotation (Placement(transformation(
        extent={{-9,-6},{9,6}},
        rotation=180,
        origin={39,90})));
  OpenIPSL.Electrical.Buses.Bus    B2(
    V_0=pf.powerflow.bus.V2,
    V_b=18.0,
    angle_0=pf.powerflow.bus.A2)
    annotation (Placement(transformation(extent={{-130,82},{-114,98}})));
  OpenIPSL.Electrical.Buses.Bus    B7(
    V_b=230,
    V_0=pf.powerflow.bus.V7,
    angle_0=pf.powerflow.bus.A7)
    annotation (Placement(transformation(extent={{-80,82},{-64,98}})));
  OpenIPSL.Electrical.Buses.Bus    B9(
    V_b=230,
    V_0=pf.powerflow.bus.V9,
    angle_0=pf.powerflow.bus.V9)
    annotation (Placement(transformation(extent={{78,82},{94,98}})));
  OpenIPSL.Electrical.Buses.Bus    B3(
    V_0=pf.powerflow.bus.V3,
    V_b=13.8,
    angle_0=pf.powerflow.bus.A3)
    annotation (Placement(transformation(extent={{120,82},{136,98}})));
  OpenIPSL.Electrical.Buses.Bus    B6(
    V_0=pf.powerflow.bus.V6,
    V_b=230.0,
    angle_0=pf.powerflow.bus.A6)
    annotation (Placement(transformation(
        extent={{-9,-9},{9,9}},
        rotation=90,
        origin={75,19})));
  OpenIPSL.Electrical.Buses.Bus    B5(
    V_0=pf.powerflow.bus.V5,
    V_b=230.0,
    angle_0=pf.powerflow.bus.A5)
                     annotation (Placement(transformation(
        extent={{-9,-9},{9,9}},
        rotation=90,
        origin={-73,19})));
  OpenIPSL.Electrical.Buses.Bus    B4(
    V_0=pf.powerflow.bus.V4,
    V_b=230.0,
    angle_0=pf.powerflow.bus.A4)
  annotation (Placement(transformation(
    extent={{-9,-9},{9,9}},
    rotation=90,
    origin={1,-47})));
  OpenIPSL.Electrical.Buses.Bus    B1(
    angle_0=pf.powerflow.bus.A1,
    V_0=pf.powerflow.bus.V1,
    V_b=16.5)
    annotation (Placement(transformation(
      extent={{-9,-9},{9,9}},
      rotation=90,
      origin={1,-89})));
  OpenIPSL.Electrical.Buses.Bus    B8(
    V_b=230,
    V_0=pf.powerflow.bus.V8,
    angle_0=pf.powerflow.bus.A8)
    annotation (Placement(transformation(extent={{-8,82},{8,98}})));
  Generation_Groups.PSSEGen1 pSSEGen1_1(
    V_b=18,
    V_0=pf.powerflow.bus.V2,
    displayPF=true,
    height_1=0,
    tstart_1=0,
    refdisturb_1=false,
    angle_0=pf.powerflow.bus.A2,
    P_0=pf.powerflow.machines.PG2,
    Q_0=pf.powerflow.machines.QG2)
    annotation (Placement(transformation(extent={{-160,80},{-140,100}})));
  Generation_Groups.PSSEGen3 pSSEGen3_1(
    V_b=13.8,
    V_0=pf.powerflow.bus.V3,
    displayPF=true,
    height_2=0,
    tstart_2=0,
    refdisturb_2=false,
    P_0=pf.powerflow.machines.PG3,
    Q_0=pf.powerflow.machines.QG3,
    angle_0=pf.powerflow.bus.A3)
    annotation (Placement(transformation(extent={{160,80},{140,100}})));
  Generation_Groups.PSSEGen2 pSSEGen2_1(
    V_0=pf.powerflow.bus.V1,
    angle_0=pf.powerflow.bus.A1,
    V_b=16.5,
    P_0=pf.powerflow.machines.PG1,
    Q_0=pf.powerflow.machines.QG1,
    displayPF=true,
    height_2=0,
    tstart_2=0,
    refdisturb_2=false)   annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={2,-116})));
  inner OpenIPSL.Electrical.SystemBase SysData(S_b=100, fn=60)
    annotation (Placement(transformation(extent={{80,-120},{180,-80}})));
  OpenIPSL.Electrical.Events.PwFault pwFault2(
    X=0.01,
    t1=Modelica.Constants.inf,
    t2=Modelica.Constants.inf,
    R=0.01) annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=270,
        origin={57,61})));
  OpenIPSL.Electrical.Branches.PwLine pwLine2Openings(
    R=0.0085000,
    X=0.072000,
    G=0.000000,
    B=0.149000*0.5,
    t1=Modelica.Constants.inf,
    t2=Modelica.Constants.inf,
    opening=1)
    annotation (Placement(transformation(extent={{-50,84},{-32,96}})));
  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer
    twoWindingTransformer3(
    CZ=1,
    R=0,
    X=0.062500,
    G=0,
    B=0,
    CW=1,
    t1=pf.powerflow.trafos.t1_trafo_2,
    VNOM1=18.0,
    VB1=18.0,
    t2=pf.powerflow.trafos.t2_trafo_2,
    VNOM2=380,
    VB2=380,
    ANG1=0,
    S_n=SysData.S_b)
             annotation (Placement(transformation(extent={{-106,86},{-94,94}})));
  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer
    twoWindingTransformer2(
    CZ=1,
    R=0,
    X=0.057600,
    G=0,
    B=0,
    CW=1,
    t1=pf.powerflow.trafos.t1_trafo_1,
    VNOM1=16.5,
    VB1=16.5,
    t2=pf.powerflow.trafos.t2_trafo_1,
    VNOM2=230,
    VB2=230,
    ANG1=0,
    S_n=100) annotation (Placement(transformation(
        extent={{-6,-4},{6,4}},
        rotation=90,
        origin={0,-68})));
  OpenIPSL.Electrical.Branches.PSSE.TwoWindingTransformer twoWindingTransformer(
    CZ=1,
    R=0,
    X=0.058600,
    G=0,
    B=0,
    CW=1,
    t1=pf.powerflow.trafos.t1_trafo_3,
    VNOM1=13.8,
    VB1=13.8,
    t2=pf.powerflow.trafos.t2_trafo_3,
    VNOM2=230,
    VB2=230,
    S_n=100) annotation (Placement(transformation(
        extent={{-6,-4},{6,4}},
        rotation=180,
        origin={108,90})));
  OpenIPSL.Electrical.Loads.PSSE.Load load_B5(
    V_b=230.0,
    V_0=pf.powerflow.bus.V5,
    angle_0=pf.powerflow.bus.A5,
    P_0=pf.powerflow.loads.PL1,
    Q_0=pf.powerflow.loads.QL1)
    annotation (Placement(transformation(extent={{-102,-10},{-90,0}})));
  OpenIPSL.Electrical.Loads.PSSE.Load load_B8(
    V_b=230.0,
    V_0=pf.powerflow.bus.V8,
    angle_0=pf.powerflow.bus.A8,
    P_0=pf.powerflow.loads.PL3,
    Q_0=pf.powerflow.loads.QL3)
    annotation (Placement(transformation(extent={{-18,60},{-6,70}})));
  OpenIPSL.Electrical.Loads.PSSE.Load load_B6(
    V_b=230.0,
    V_0=pf.powerflow.bus.V6,
    angle_0=pf.powerflow.bus.A6,
    P_0=pf.powerflow.loads.PL2,
    Q_0=pf.powerflow.loads.QL2)
    annotation (Placement(transformation(extent={{98,-20},{110,-10}})));
  IEEE9.PF_Data.Power_Flow pf(redeclare record PowerFlow =
        IEEE9.PF_Data.PF_00000)
    annotation (Placement(transformation(extent={{-160,112},{-140,132}})));
equation
  connect(pSSEGen1_1.pwPin, B2.p)
    annotation (Line(points={{-139,90},{-122,90}}, color={0,0,255}));
  connect(twoWindingTransformer3.p, B2.p)
    annotation (Line(points={{-107,90},{-122,90}}, color={0,0,255}));
  connect(B7.p, pwLine2Openings.p)
    annotation (Line(points={{-72,90},{-49.1,90}}, color={0,0,255}));
  connect(twoWindingTransformer3.n, B7.p)
    annotation (Line(points={{-93,90},{-72,90}}, color={0,0,255}));
  connect(line_5_7.n, B7.p) annotation (Line(points={{-74,53.1},{-74,72},{-62,72},
          {-62,90},{-72,90}}, color={0,0,255}));
  connect(pwLine2Openings.n, B8.p)
    annotation (Line(points={{-32.9,90},{0,90}}, color={0,0,255}));
  connect(load_B8.p, B8.p)
    annotation (Line(points={{-12,70},{-12,90},{0,90}}, color={0,0,255}));
  connect(line_8_9.n, B8.p)
    annotation (Line(points={{30.9,90},{0,90}}, color={0,0,255}));
  connect(B9.p, twoWindingTransformer.n)
    annotation (Line(points={{86,90},{101,90}}, color={0,0,255}));
  connect(line_9_6.n, B9.p)
    annotation (Line(points={{78,65.1},{78,90},{86,90}}, color={0,0,255}));
  connect(line_8_9.p, B9.p)
    annotation (Line(points={{47.1,90},{86,90}}, color={0,0,255}));
  connect(pwFault2.p, B9.p)
    annotation (Line(points={{57,69.1667},{57,90},{86,90}}, color={0,0,255}));
  connect(twoWindingTransformer.p, B3.p)
    annotation (Line(points={{115,90},{128,90}}, color={0,0,255}));
  connect(pSSEGen3_1.pwPin, B3.p)
    annotation (Line(points={{139,90},{128,90}}, color={0,0,255}));
  connect(load_B5.p, B5.p) annotation (Line(points={{-96,0},{-96,8},{-73,8},{-73,
          19}}, color={0,0,255}));
  connect(line_4_5.p, B5.p) annotation (Line(points={{-72,-12.9},{-72,8},{-73,8},
          {-73,19}}, color={0,0,255}));
  connect(B5.p, line_5_7.p) annotation (Line(points={{-73,19},{-73,25.5},{-74,25.5},
          {-74,36.9}}, color={0,0,255}));
  connect(load_B6.p, B6.p) annotation (Line(points={{104,-10},{104,6},{75,6},{75,
          19}}, color={0,0,255}));
  connect(line_6_4.p, B6.p) annotation (Line(points={{74,-12.9},{74,6},{75,6},{75,
          19}}, color={0,0,255}));
  connect(line_9_6.p, B6.p) annotation (Line(points={{78,48.9},{80,48.9},{80,34},
          {75,34},{75,19}}, color={0,0,255}));
  connect(line_4_5.n, B4.p) annotation (Line(points={{-72,-29.1},{-72,-34},{1,-34},
          {1,-47}}, color={0,0,255}));
  connect(line_6_4.n, B4.p) annotation (Line(points={{74,-29.1},{74,-34},{1,-34},
          {1,-47}}, color={0,0,255}));
  connect(twoWindingTransformer2.n, B4.p)
    annotation (Line(points={{0,-61},{1,-61},{1,-47}}, color={0,0,255}));
  connect(pSSEGen2_1.pwPin, B1.p) annotation (Line(points={{2,-105},{2,-98},{2,
          -89},{1,-89}}, color={0,0,255}));
  connect(twoWindingTransformer2.p, B1.p)
    annotation (Line(points={{0,-75},{0,-89},{1,-89}}, color={0,0,255}));
    annotation (Placement(transformation(extent={{-160,112},{-140,132}})),
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-180,-140},{
            180,140}})),
    Icon(coordinateSystem(extent={{-180,-140},{180,140}})),
    Documentation(info="<html>
<table cellspacing=\"2\" cellpadding=\"0\" border=\"0\"<tr>
<td><p>Reference</p></td>
<td><p>PSAT Manual 2.1.8</p></td>
</tr>
<tr>
<td><p>Last update</p></td>
<td><p>15/07/2015</p></td>
</tr>
<tr>
<td><p>Author</p></td>
<td><p>MAA Murad, SmarTS Lab, KTH Royal Institute of Technology</p></td>
</tr>
<tr>
<td><p>Contact</p></td>
<td><p><a href=\"mailto:luigiv@kth.se\">luigiv@kth.se</a></p></td>
</tr>
</table>
</html>"),
    experiment(
      StopTime=10,
      __Dymola_fixedstepsize=0.001,
      __Dymola_Algorithm="Dassl"),
    __Dymola_experimentSetupOutput);
end IEEE9_Base_Case;
