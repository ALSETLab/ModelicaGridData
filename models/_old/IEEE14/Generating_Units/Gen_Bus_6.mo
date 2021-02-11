within IEEE14.Generating_Units;
model Gen_Bus_6
 extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENROU gENROU(
    V_0=V_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    M_b=100,
    Tpd0=6.5,
    Tppd0=0.06,
    Tppq0=0.05,
    H=5,
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
    Tpq0=0.2) annotation (Placement(transformation(extent={{-38,-36},{62,36}})));
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
    S_EE_1=0.0900,
    E_2=4,
    S_EE_2=0.368)
    annotation (Placement(transformation(extent={{-150,-52},{-84,8}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-220,-14},{-200,6}})));
equation
  connect(iEEET1_1.EFD, gENROU.EFD) annotation (Line(points={{-82.35,-18.6667},
          {-60,-18.6667},{-60,-18},{-48,-18}}, color={0,0,127}));
  connect(gENROU.PMECH0, gENROU.PMECH) annotation (Line(points={{67,18},{86,18},
          {86,44},{-76,44},{-76,18},{-48,18}}, color={0,0,127}));
  connect(gENROU.EFD0, iEEET1_1.EFD0) annotation (Line(points={{67,-18},{82,-18},
          {82,-74},{-168,-74},{-168,-40.3333},{-150,-40.3333}}, color={0,0,127}));
  connect(gENROU.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{67,-10.8},{94,
          -10.8},{94,-90},{-180,-90},{-180,-18.6667},{-150,-18.6667}}, color={0,
          0,127}));
  connect(const.y, iEEET1_1.VOTHSG) annotation (Line(points={{-199,-4},{-174,-4},
          {-174,-3.66667},{-150,-3.66667}}, color={0,0,127}));
  connect(iEEET1_1.VUEL, iEEET1_1.VOTHSG) annotation (Line(points={{-138.45,-52},
          {-138.45,-68},{-184,-68},{-184,-4},{-174,-4},{-174,-3.66667},{-150,
          -3.66667}}, color={0,0,127}));
  connect(iEEET1_1.VOEL, iEEET1_1.VOTHSG) annotation (Line(points={{-128.55,-52},
          {-130,-52},{-130,-68},{-184,-68},{-184,-4},{-174,-4},{-174,-3.66667},
          {-150,-3.66667}}, color={0,0,127}));
  connect(gENROU.p, pwPin)
    annotation (Line(points={{62,0},{86,0},{86,0},{110,0}}, color={0,0,255}));
annotation (Diagram(coordinateSystem(extent={{-240,-100},{100,100}})));
end Gen_Bus_6;
