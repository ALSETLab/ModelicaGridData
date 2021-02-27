within AVRI.Generating_Units;
model Gen_B12_PSSE
  extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENROU gENROU(
    V_0=V_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    M_b=900,
    Tpd0=8,
    Tppd0=0.03,
    Tppq0=0.05,
    H=8,
    D=2,
    Xd=1.8,
    Xq=1.7,
    Xpd=0.3,
    Xppd=0.25,
    Xppq=0.25,
    Xl=0.2,
    S10=0.3,
    S12=0.5,
    R_a=0,
    Xpq=1,
    Tpq0=0.4) annotation (Placement(transformation(extent={{-26,-36},{30,36}})));
equation
  connect(gENROU.p, pwPin)
    annotation (Line(points={{30,0},{110,0}}, color={0,0,255}));
  connect(gENROU.PMECH0, gENROU.PMECH) annotation (Line(points={{32.8,18},{48,
          18},{48,52},{-50,52},{-50,18},{-31.6,18}}, color={0,0,127}));
  connect(gENROU.EFD0, gENROU.EFD) annotation (Line(points={{32.8,-18},{48,-18},
          {48,-54},{-48,-54},{-48,-18},{-31.6,-18}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Gen_B12_PSSE;
