within IEEE14.Generating_Units;
model Gen_Bus_3
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
    Tpq0=0.2) annotation (Placement(transformation(extent={{0,-32},{62,32}})));
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
    annotation (Placement(transformation(extent={{-74,-36},{-34,0}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-98,-92},{-78,-72}})));
  OpenIPSL.Interfaces.PwPin pwPin
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));
equation
  connect(iEEET1_1.EFD, gENROU.EFD)
    annotation (Line(points={{-32,-18},{-20,-18},{-20,-16},{-6.2,-16}},
                                                    color={0,0,127}));
  connect(gENROU.XADIFD, iEEET1_1.XADIFD) annotation (Line(points={{65.1,-28.8},
          {74,-28.8},{74,-50},{-38,-50},{-38,-37.8}}, color={0,0,127}));
  connect(gENROU.PMECH0, gENROU.PMECH) annotation (Line(points={{65.1,16},{78,16},
          {78,44},{-24,44},{-24,16},{-6.2,16}}, color={0,0,127}));
  connect(const.y, iEEET1_1.VUEL)
    annotation (Line(points={{-77,-82},{-62,-82},{-62,-37.8}},
                                                             color={0,0,127}));
  connect(iEEET1_1.VOEL, iEEET1_1.VUEL) annotation (Line(points={{-54,-37.8},{-54,
          -68},{-62,-68},{-62,-37.8}},
                                     color={0,0,127}));
  connect(iEEET1_1.VOTHSG, iEEET1_1.VUEL) annotation (Line(points={{-76,-10.8},{
          -90,-10.8},{-90,-60},{-62,-60},{-62,-37.8}},
                                              color={0,0,127}));
  connect(gENROU.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{65.1,-9.6},{82,
          -9.6},{82,-56},{-80,-56},{-80,-18},{-76,-18}},color={0,0,127}));
  connect(gENROU.EFD0, iEEET1_1.EFD0) annotation (Line(points={{65.1,-16},{78,-16},
          {78,-54},{-76,-54},{-76,-30},{-76,-30},{-76,-25.2}},
                                                             color={0,0,127}));
  connect(gENROU.p, pwPin)
    annotation (Line(points={{62,0},{110,0}}, color={0,0,255}));
  connect(pwPin, pwPin) annotation (Line(points={{110,0},{110,10},{110,10},
          {110,0}}, color={0,0,255}));
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
end Gen_Bus_3;
