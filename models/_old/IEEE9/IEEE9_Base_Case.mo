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
        origin={-72,53})));
  OpenIPSL.Electrical.Branches.PwLine line_8_9(
    G=0,
    R=0.011900,
    X=0.100800,
    B=0.209000*0.5)
              annotation (Placement(transformation(
        extent={{-9,-6},{9,6}},
        rotation=180,
        origin={39,90})));
  OpenIPSL.Electrical.Buses.BusExt B2(
    V_0=pf.powerflow.bus.V2,
    V_b=18.0,
    angle_0=pf.powerflow.bus.A2,
    nn=1,
    np=1)
    annotation (Placement(transformation(extent={{-126,80},{-124,100}})));
  OpenIPSL.Electrical.Buses.BusExt B7(
    V_b=230,
    V_0=pf.powerflow.bus.V7,
    angle_0=pf.powerflow.bus.A7,
    np=2,
    nn=1)
    annotation (Placement(transformation(extent={{-76,80},{-74,100}})));
  OpenIPSL.Electrical.Buses.BusExt B8(
    V_0=pf.powerflow.bus.V8,
    V_b=230,
    angle_0=pf.powerflow.bus.A8,
    nn=2,
    np=1)            annotation (Placement(transformation(
        extent={{-1,-10},{1,10}},
        rotation=0,
        origin={9,90})));
  OpenIPSL.Electrical.Buses.BusExt B9(
    V_b=230,
    V_0=pf.powerflow.bus.V9,
    angle_0=pf.powerflow.bus.V9,
    nn=3,
    np=1)
    annotation (Placement(transformation(extent={{88,80},{90,100}})));
  OpenIPSL.Electrical.Buses.BusExt B3(
    V_0=pf.powerflow.bus.V3,
    V_b=13.8,
    angle_0=pf.powerflow.bus.A3,
    np=1,
    nn=1)
    annotation (Placement(transformation(extent={{128,80},{130,100}})));
  OpenIPSL.Electrical.Buses.BusExt B6(
    V_0=pf.powerflow.bus.V6,
    V_b=230.0,
    angle_0=pf.powerflow.bus.A6,
    np=2,
    nn=1)            annotation (Placement(transformation(
        extent={{-1,-10},{1,10}},
        rotation=-90,
        origin={78,11})));
  OpenIPSL.Electrical.Buses.BusExt B5(
    V_0=pf.powerflow.bus.V5,
    V_b=230.0,
    angle_0=pf.powerflow.bus.A5,
    np=1,
    nn=2)            annotation (Placement(transformation(
        extent={{-1,-12},{1,12}},
        rotation=90,
        origin={-70,9})));
  OpenIPSL.Electrical.Buses.BusExt B4(
    V_0=pf.powerflow.bus.V4,
    V_b=230.0,
    angle_0=pf.powerflow.bus.A4,
    nn=2,
    np=1)            annotation (Placement(transformation(
        extent={{-1,-12},{1,12}},
        rotation=-90,
        origin={0,-47})));
  OpenIPSL.Electrical.Buses.BusExt B1(
    angle_0=pf.powerflow.bus.A1,
    V_0=pf.powerflow.bus.V1,
    V_b=16.5,
    np=1,
    nn=1)     annotation (Placement(transformation(
        extent={{-1,-12},{1,12}},
        rotation=-90,
        origin={0,-89})));
  Generation_Groups.PSSEGen1 pSSEGen1_1(
    V_b=18,
    V_0=pf.powerflow.bus.V2,
    M_b=320,
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
    M_b=300,
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
    M_b=275,
    height_2=0,
    tstart_2=0,
    refdisturb_2=false)   annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={0,-114})));
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
        origin={0,-66})));
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
    annotation (Placement(transformation(extent={{-14,62},{-2,72}})));
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
  connect(pSSEGen1_1.pwPin, B2.n[1])
    annotation (Line(points={{-139,90},{-126,90}}, color={0,0,255}));
  connect(line_5_7.n, B7.p[1]) annotation (Line(points={{-72,61.1},{-72,76},{
          -62,76},{-62,87},{-74,87}}, color={0,0,255}));
  connect(pwLine2Openings.p, B7.p[2]) annotation (Line(points={{-49.1,90},{-62,
          90},{-62,93},{-74,93}}, color={0,0,255}));
  connect(pwLine2Openings.n, B8.n[1]) annotation (Line(points={{-32.9,90},{-14,
          90},{-14,87},{8,87}}, color={0,0,255}));
  connect(line_8_9.n, B8.p[1])
    annotation (Line(points={{30.9,90},{10,90}}, color={0,0,255}));
  connect(line_8_9.p, B9.n[1]) annotation (Line(points={{47.1,90},{68,90},{68,
          86},{88,86}}, color={0,0,255}));
  connect(line_9_6.n, B9.n[2]) annotation (Line(points={{78,65.1},{78,90},{88,
          90}},                 color={0,0,255}));
  connect(pwFault2.p, B9.n[3])
    annotation (Line(points={{57,69.1667},{57,94},{88,94}}, color={0,0,255}));
  connect(pSSEGen3_1.pwPin, B3.p[1])
    annotation (Line(points={{139,90},{130,90}}, color={0,0,255}));
  connect(line_5_7.p, B5.p[1])
    annotation (Line(points={{-72,44.9},{-72,10},{-70,10}},
                                                   color={0,0,255}));
  connect(line_4_5.p, B5.n[1]) annotation (Line(points={{-72,-12.9},{-72,-6},{
          -66.4,-6},{-66.4,8}}, color={0,0,255}));
  connect(line_6_4.n, B4.n[1]) annotation (Line(points={{74,-29.1},{74,-38},{
          -3.6,-38},{-3.6,-46}}, color={0,0,255}));
  connect(line_4_5.n, B4.n[2]) annotation (Line(points={{-72,-29.1},{-72,-38},{
          3.6,-38},{3.6,-46}}, color={0,0,255}));
  connect(pSSEGen2_1.pwPin, B1.p[1])
    annotation (Line(points={{0,-103},{0,-90}}, color={0,0,255}));
  connect(B6.p[1], line_6_4.p) annotation (Line(points={{75,10},{75,-2},{74,-2},
          {74,-12.9}}, color={0,0,255}));
  connect(line_9_6.p, B6.n[1])
    annotation (Line(points={{78,48.9},{78,12}}, color={0,0,255}));
  connect(twoWindingTransformer3.n, B7.n[1]) annotation (Line(points={{-93,90},{
          -76,90}},                   color={0,0,255}));
  connect(twoWindingTransformer3.p, B2.p[1]) annotation (Line(points={{-107,90},
          {-124,90}},                     color={0,0,255}));
  connect(B1.n[1], twoWindingTransformer2.p) annotation (Line(points={{0,-88},{0,
          -78},{-4.44089e-16,-78},{-4.44089e-16,-73}}, color={0,0,255}));
  connect(twoWindingTransformer2.n, B4.p[1]) annotation (Line(points={{4.44089e-16,
          -59},{4.44089e-16,-56},{0,-56},{0,-48}}, color={0,0,255}));
  connect(twoWindingTransformer.n, B9.p[1]) annotation (Line(points={{101,90},{
          90,90}},              color={0,0,255}));
  connect(twoWindingTransformer.p, B3.n[1])
    annotation (Line(points={{115,90},{128,90}}, color={0,0,255}));
  connect(load_B5.p, B5.n[2]) annotation (Line(points={{-96,0},{-96,6},{-73.6,6},
          {-73.6,8}}, color={0,0,255}));
  connect(load_B8.p, B8.n[2])
    annotation (Line(points={{-8,72},{-8,93},{8,93}}, color={0,0,255}));
  connect(load_B6.p, B6.p[2]) annotation (Line(points={{104,-10},{104,0},{81,0},
          {81,10}}, color={0,0,255}));
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
