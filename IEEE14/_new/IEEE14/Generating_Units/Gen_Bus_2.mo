within IEEE14.Generating_Units;
model Gen_Bus_2
  parameter OpenIPSL.Types.ActivePower P_0(displayUnit="MW")=1e6
  "Initial active power"
  annotation (Dialog(group="Power flow data"));
  parameter OpenIPSL.Types.ReactivePower Q_0(displayUnit="Mvar")=0
  "Initial reactive power"
  annotation (Dialog(group="Power flow data"));
  parameter OpenIPSL.Types.PerUnit v_0=1
  "Initial voltage magnitude (pu)"
  annotation (Dialog(group="Power flow data"));
  parameter OpenIPSL.Types.Angle angle_0=0
  "Initial voltage angle"
  annotation (Dialog(group="Power flow data"));
  OpenIPSL.Electrical.Machines.PSSE.GENROU gENROU(
    V_b=69000,
    P_0=P_0,
    Q_0=Q_0,
    v_0=v_0,
    angle_0=angle_0,
    M_b=100000000,
    Tpd0=6.5,
    Tppd0=0.06,
    Tppq0=0.05,
    H=6.5,
    D=0,
    Xd=1.8,
    Xq=1.75,
    Xpd=0.6,
    Xppd=0.13,
    Xppq=0.13,
    Xl=0.15,
    S10=0.09,
    S12=0.38,
    R_a=0,
    Xpq=0.8,
    Tpq0=0.2)
    annotation (Placement(transformation(extent={{0,-20},{60,40}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 iEEET1_1(
    T_R=0.06,
    K_A=20,
    T_A=0.01,
    V_RMAX=5,
    V_RMIN=-6,
    K_E=1,
    T_E=0.67,
    K_F=0.1,
    T_F=1,
    E_1=3,
    S_EE_1=0.09,
    E_2=4,
    S_EE_2=0.368)                                      annotation (Placement(
        transformation(
        extent={{-30,-27},{30,27}},
        rotation=0,
        origin={-54,-9})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-94,-114},{-74,-94}})));
  OpenIPSL.Electrical.Controls.PSSE.TG.TGOV1 tGOV1_1(
    R=0.05,
    D_t=0.0000,
    T_1=0.05,
    T_2=1,
    T_3=2.1,
    V_MAX=1.05,
    V_MIN=0.3)
    annotation (Placement(transformation(extent={{-82,40},{-34,78}})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2A pSS2A(
    T_w1=2.0000,
    T_w2=2.0000,
    T_6=0.1,
    T_w3=2,
    T_w4=4,
    T_7=2,
    K_S2=0.333,
    K_S3=1,
    T_8=0.5,
    T_9=0.1,
    K_S1=20,
    T_1=0.052,
    T_2=0.03,
    T_3=0.281,
    T_4=0.03,
    V_STMAX=0.1,
    V_STMIN=-0.1,
    M=5,
    N=1)
    annotation (Placement(transformation(extent={{-246,-18},{-132,36}})));
  OpenIPSL.Interfaces.PwPin pwPin annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={110,10})));
equation
  connect(iEEET1_1.EFD, gENROU.EFD) annotation (Line(points={{-21,-9},{-14,-9},{
          -14,-5},{-6,-5}},  color={0,0,127}));
  connect(gENROU.XADIFD, iEEET1_1.XADIFD) annotation (Line(points={{63,-17},{74,
          -17},{74,-60},{-30,-60},{-30,-38.7}},     color={0,0,127}));
  connect(const.y, iEEET1_1.VOEL) annotation (Line(points={{-73,-104},{-54,-104},
          {-54,-38.7}}, color={0,0,127}));
  connect(iEEET1_1.VUEL, iEEET1_1.VOEL) annotation (Line(points={{-66,-38.7},{-66,
          -62},{-54,-62},{-54,-38.7}},   color={0,0,127}));
  connect(gENROU.EFD0, iEEET1_1.EFD0) annotation (Line(points={{63,-5},{82,-5},{
          82,-66},{-110,-66},{-110,-19.8},{-87,-19.8}}, color={0,0,127}));
  connect(gENROU.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{63,1},{88,1},{
          88,-74},{-120,-74},{-120,-9},{-87,-9}}, color={0,0,127}));
  connect(tGOV1_1.PMECH, gENROU.PMECH) annotation (Line(points={{-31.6,59},{-22,
          59},{-22,25},{-6,25}},
                             color={0,0,127}));
  connect(gENROU.SPEED, tGOV1_1.SPEED) annotation (Line(points={{63,31},{80,31},
          {80,88},{-90,88},{-90,70.4},{-77.2,70.4}},
                                               color={0,0,127}));
  connect(gENROU.PMECH0, tGOV1_1.PMECH0) annotation (Line(points={{63,25},{90,25},
          {90,92},{-100,92},{-100,47.6},{-77.2,47.6}},
                                                 color={0,0,127}));
  connect(pSS2A.VOTHSG, iEEET1_1.VOTHSG) annotation (Line(points={{-126.3,9},{-108.1,
          9},{-108.1,1.8},{-87,1.8}}, color={0,0,127}));
  connect(pSS2A.V_S1, tGOV1_1.SPEED) annotation (Line(points={{-251.7,19.8},{-252,
          19.8},{-252,98},{70,98},{70,68},{80,68},{80,88},{-90,88},{-90,70.4},{-77.2,
          70.4}},
                color={0,0,127}));
  connect(gENROU.PELEC, pSS2A.V_S2) annotation (Line(points={{63,19},{96,19},{96,
          -82},{-250,-82},{-250,-1.8},{-251.7,-1.8}}, color={0,0,127}));
  connect(pwPin, pwPin)
    annotation (Line(points={{110,10},{110,10}}, color={0,0,255}));
  connect(gENROU.p, pwPin)
    annotation (Line(points={{60,10},{110,10}}, color={0,0,255}));
annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,
            -120},{120,160}}),
                        graphics={ Ellipse(
          extent={{-120,100},{80,-100}},
          lineColor={0,0,0},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid),Line(
          points={{0,-20},{30,-40},{60,0}},
          color={0,0,0},
          thickness=0.5),Text(
          extent={{-60,20},{20,-20}},
          lineColor={0,0,0},
          textString="%name"),           Line(
          points={{-40,20},{-70,40},{-100,0}},
          color={0,0,0},
          thickness=0.5)}),
                          Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-200,-120},{120,160}})));
end Gen_Bus_2;
