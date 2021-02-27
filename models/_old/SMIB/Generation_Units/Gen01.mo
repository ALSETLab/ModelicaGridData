within SMIB.Generation_Units;
model Gen01
  extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENROE gENROE(
    V_0=V_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    M_b=100,
    Tpd0=5,
    Tppd0=0.07,
    Tppq0=0.09,
    H=4.28,
    D=0,
    Xd=1.84,
    Xq=1.75,
    Xpd=0.41,
    Xppd=0.2,
    Xppq=0.2,
    Xl=0.12,
    S10=0.11,
    S12=0.39,
    R_a=0,
    Xpq=0.6,
    Tpq0=0.9) annotation (Placement(transformation(extent={{-26,-32},{34,34}})));
equation
  connect(gENROE.PMECH0, gENROE.PMECH) annotation (Line(points={{37,17.5},{58,
          17.5},{58,52},{-58,52},{-58,17.5},{-32,17.5}}, color={0,0,127}));
  connect(gENROE.EFD0, gENROE.EFD) annotation (Line(points={{37,-15.5},{58,
          -15.5},{58,-50},{-58,-50},{-58,-15.5},{-32,-15.5}}, color={0,0,127}));
  connect(gENROE.p, pwPin)
    annotation (Line(points={{34,1},{72,1},{72,0},{110,0}}, color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Gen01;
