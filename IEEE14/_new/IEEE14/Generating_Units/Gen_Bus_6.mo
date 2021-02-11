within IEEE14.Generating_Units;
model Gen_Bus_6
  extends OpenIPSL.Interfaces.Generator;
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
    annotation (Placement(transformation(extent={{-80,-18},{-20,36}})));
  OpenIPSL.Interfaces.PwPin pwPin
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-88,-74},{-68,-54}})));
  OpenIPSL.Electrical.Machines.PSSE.GENROU gENROU(
    V_b=138000,
    P_0=P_0,
    Q_0=Q_0,
    v_0=v_0,
    angle_0=angle_0,
    M_b=100000000,
    Tpd0=6.5,
    Tppd0=0.06,
    Tppq0=0.05,
    H=5,
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
    Tpq0=0.2) annotation (Placement(transformation(extent={{14,-20},{68,38}})));
equation
  connect(const.y, iEEET1_1.VOEL) annotation (Line(points={{-67,-64},{-64,-64},{
          -64,-62},{-50,-62},{-50,-20.7}},   color={0,0,127}));
  connect(iEEET1_1.VOTHSG, iEEET1_1.VOEL) annotation (Line(points={{-83,19.8},{-92,
          19.8},{-92,-44},{-50,-44},{-50,-20.7}},   color={0,0,127}));
  connect(iEEET1_1.VUEL, iEEET1_1.VOEL) annotation (Line(points={{-62,-20.7},{-68,
          -20.7},{-68,-44},{-50,-44},{-50,-20.7}}, color={0,0,127}));
  connect(iEEET1_1.EFD, gENROU.EFD) annotation (Line(points={{-17,9},{-10,9},{-10,
          -5.5},{8.6,-5.5}},      color={0,0,127}));
  connect(gENROU.p, pwPin)
    annotation (Line(points={{68,9},{88,9},{88,0},{110,0}}, color={0,0,255}));
  connect(gENROU.XADIFD, iEEET1_1.XADIFD) annotation (Line(points={{70.7,-17.1},
          {80,-17.1},{80,-40},{-26,-40},{-26,-20.7}},     color={0,0,127}));
  connect(gENROU.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{70.7,0.3},{84,
          0.3},{84,-30},{-88,-30},{-88,9},{-83,9}},   color={0,0,127}));
  connect(gENROU.EFD0, iEEET1_1.EFD0) annotation (Line(points={{70.7,-5.5},{78,-5.5},
          {78,-26},{-86,-26},{-86,-1.8},{-83,-1.8}}, color={0,0,127}));
  connect(gENROU.PMECH0, gENROU.PMECH) annotation (Line(points={{70.7,23.5},{82,
          23.5},{82,48},{-8,48},{-8,23.5},{8.6,23.5}}, color={0,0,127}));
  annotation (Diagram(coordinateSystem(preserveAspectRatio=true,
          extent={{-200,-120},{120,160}})));
end Gen_Bus_6;
