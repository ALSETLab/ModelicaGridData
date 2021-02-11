within IEEE14.Generating_Units;
model Gen_Bus_1
  extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENROU gENROU(
    V_b=69000,
    P_0=P_0,
    Q_0=Q_0,
    v_0=v_0,
    angle_0=angle_0,
    M_b=100000000,
    Tpd0=4,
    Tppd0=0.032,
    Tppq0=0.06,
    H=2.05,
    D=0,
    Xd=2.11,
    Xq=2.02,
    Xpd=0.295,
    Xppd=0.23,
    Xppq=0.23,
    Xl=0.16,
    S10=0.083,
    S12=0.419,
    Xpq=0.505,
    Tpq0=0.55) annotation (Placement(transformation(extent={{-54,8},{20,86}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 iEEET1_1(
    T_R=0,
    K_A=50,
    T_A=0.02,
    V_RMAX=1,
    V_RMIN=-1,
    K_E=-0.057,
    T_E=0.541,
    K_F=0.086,
    T_F=1.02,
    E_1=3.082,
    S_EE_1=0.038,
    E_2=4.109,
    S_EE_2=0.3)
    annotation (Placement(transformation(extent={{20,-74},{-54,-8}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{80,-100},{60,-80}})));
  OpenIPSL.Electrical.Controls.PSSE.TG.TGOV1 tGOV1_1(
    R=0.1,
    D_t=0.02,
    T_1=0.49,
    T_2=2.57,
    T_3=9,
    V_MAX=1,
    V_MIN=0.227)
    annotation (Placement(transformation(extent={{34,110},{-66,152}})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2A pSS2A(
    T_w1=2,
    T_w2=2,
    T_6=0,
    T_w3=2,
    T_w4=0,
    T_7=2,
    K_S2=0.2,
    K_S3=1,
    T_8=0.5,
    T_9=0.1,
    K_S1=10,
    T_1=0.15,
    T_2=0.03,
    T_3=0.15,
    T_4=0.03,
    V_STMAX=0.1,
    V_STMIN=-0.1,
    M=5,
    N=1) annotation (Placement(transformation(extent={{-182,28},{-88,56}})));
equation
  connect(iEEET1_1.EFD, gENROU.EFD) annotation (Line(points={{-57.7,-41},{-64,-41},
          {-64,-38},{-74,-38},{-74,27.5},{-61.4,27.5}},
                                                  color={0,0,127}));
  connect(gENROU.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{23.7,35.3},{40,
          35.3},{40,-41},{23.7,-41}},         color={0,0,127}));
  connect(gENROU.EFD0, iEEET1_1.EFD0) annotation (Line(points={{23.7,27.5},{34,27.5},
          {34,-54.2},{23.7,-54.2}},     color={0,0,127}));
  connect(iEEET1_1.VUEL, const.y) annotation (Line(points={{-2.2,-77.3},{8,-77.3},
          {8,-90},{59,-90}},
                          color={0,0,127}));
  connect(iEEET1_1.VOEL, const.y) annotation (Line(points={{-17,-77.3},{-4,-77.3},
          {-4,-90},{59,-90}}, color={0,0,127}));
  connect(gENROU.XADIFD, iEEET1_1.XADIFD) annotation (Line(points={{23.7,11.9},{
          30,11.9},{30,-82},{-46.6,-82},{-46.6,-77.3}},       color={0,0,127}));
  connect(gENROU.SPEED, tGOV1_1.SPEED) annotation (Line(points={{23.7,74.3},{60,
          74.3},{60,143.6},{24,143.6}},          color={0,0,127}));
  connect(gENROU.PMECH0, tGOV1_1.PMECH0) annotation (Line(points={{23.7,66.5},{48,
          66.5},{48,118.4},{24,118.4}},          color={0,0,127}));
  connect(tGOV1_1.PMECH, gENROU.PMECH) annotation (Line(points={{-71,131},{-86,131},
          {-86,66.5},{-61.4,66.5}},               color={0,0,127}));
  connect(pSS2A.VOTHSG, iEEET1_1.VOTHSG) annotation (Line(points={{-83.3,42},{-80,
          42},{-80,0},{46,0},{46,-27.8},{23.7,-27.8}},          color={0,0,127}));
  connect(pSS2A.V_S1, gENROU.SPEED) annotation (Line(points={{-186.7,47.6},{-186,
          47.6},{-186,90},{38,90},{38,74.3},{23.7,74.3}},    color={0,0,127}));
  connect(pSS2A.V_S2, gENROU.PELEC) annotation (Line(points={{-186.7,36.4},{-186,
          36.4},{-186,4},{46,4},{46,58.7},{23.7,58.7}},    color={0,0,127}));
  connect(gENROU.p, pwPin) annotation (Line(points={{20,47},{70,47},{70,0},{110,
          0}}, color={0,0,255}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=true,
          extent={{-200,-120},{120,160}})));
end Gen_Bus_1;
