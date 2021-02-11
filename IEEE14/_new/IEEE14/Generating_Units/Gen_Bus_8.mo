within IEEE14.Generating_Units;
model Gen_Bus_8
  extends OpenIPSL.Interfaces.Generator;
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
    H=5.0000,
    D=0,
    Xd=1.8,
    Xq=1.75,
    Xpd=0.6,
    Xppd=0.12,
    Xppq=0.12,
    Xl=0.15,
    S10=0.09,
    S12=0.38,
    R_a=0,
    Xpq=0.8,
    Tpq0=0.2) annotation (Placement(transformation(extent={{0,-28},{60,32}})));
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
    S_EE_2=0.368)
    annotation (Placement(transformation(extent={{-84,-42},{-28,8}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-92,-92},{-72,-72}})));
  OpenIPSL.Interfaces.PwPin pwPin
    annotation (Placement(transformation(extent={{100,-8},{120,12}})));
equation
  connect(iEEET1_1.EFD, gENROU.EFD) annotation (Line(points={{-25.2,-17},{-19.3,
          -17},{-19.3,-13},{-6,-13}},      color={0,0,127}));
  connect(gENROU.PMECH0, gENROU.PMECH) annotation (Line(points={{63,17},{80,17},
          {80,48},{-20,48},{-20,17},{-6,17}}, color={0,0,127}));
  connect(gENROU.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{63,-7},{80,-7},
          {80,-60},{-94,-60},{-94,-17},{-86.8,-17}},         color={0,0,127}));
  connect(gENROU.EFD0, iEEET1_1.EFD0) annotation (Line(points={{63,-13},{76,-13},
          {76,-56},{-90,-56},{-90,-27},{-86.8,-27}},         color={0,0,127}));
  connect(gENROU.XADIFD, iEEET1_1.XADIFD) annotation (Line(points={{63,-25},{72,
          -25},{72,-52},{-33.6,-52},{-33.6,-44.5}},    color={0,0,127}));
  connect(const.y, iEEET1_1.VOEL) annotation (Line(points={{-71,-82},{-56,-82},{
          -56,-44.5}},  color={0,0,127}));
  connect(iEEET1_1.VUEL, iEEET1_1.VOEL) annotation (Line(points={{-67.2,-44.5},{
          -74,-44.5},{-74,-52},{-56,-52},{-56,-44.5}},
                                                   color={0,0,127}));
  connect(iEEET1_1.VOTHSG, iEEET1_1.VOEL) annotation (Line(points={{-86.8,-7},{-92,
          -7},{-92,-2},{-98,-2},{-98,-64},{-56,-64},{-56,-44.5}},
        color={0,0,127}));
  connect(gENROU.p, pwPin)
    annotation (Line(points={{60,2},{110,2}}, color={0,0,255}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=true,
          extent={{-200,-120},{120,160}})));
end Gen_Bus_8;
