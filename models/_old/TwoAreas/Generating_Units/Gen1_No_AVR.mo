within TwoAreas.Generating_Units;
model Gen1_No_AVR
  extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENSAL gENSAL(
    Tpd0=8,
    Tppd0=0.03,
    Tppq0=0.05,
    H=6.5,
    Xd=1.8,
    Xq=1.7,
    Xpd=0.3,
    Xppd=0.25,
    Xppq=0.25,
    Xl=0.2,
    R_a=0.0025,
    D=0.02,
    S12=0.802,
    S10=0.18600,
    M_b=900,
    V_0=V_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0)
    annotation (Placement(transformation(extent={{-32,-28},{24,28}})));
equation
  connect(gENSAL.PMECH0, gENSAL.PMECH) annotation (Line(points={{26.8,14},{42,
          14},{42,42},{-60,42},{-60,14},{-37.6,14}}, color={0,0,127}));
  connect(gENSAL.EFD0, gENSAL.EFD) annotation (Line(points={{26.8,-14},{42,-14},
          {42,-50},{-60,-50},{-60,-14},{-37.6,-14}}, color={0,0,127}));
  connect(gENSAL.p, pwPin)
    annotation (Line(points={{24,0},{110,0}}, color={0,0,255}));
  annotation (
    Diagram(coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}},
        initialScale=0.1)),
    Icon(coordinateSystem(
        preserveAspectRatio=true,
        extent={{-100,-100},{100,100}},
        initialScale=0.1)),
    Documentation);
end Gen1_No_AVR;
