within TwoAreas.Generating_Units;
model Gen4_No_AVR
  extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENSAL gENSAL(
    Tpd0=8,
    Tppd0=0.03,
    Tppq0=0.05,
    H=6.175,
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
    annotation (Placement(transformation(extent={{-28,-26},{38,30}})));
equation
  connect(gENSAL.p, pwPin)
    annotation (Line(points={{38,2},{42,2},{42,0},{110,0}},color={0,0,255}));
  connect(gENSAL.EFD0, gENSAL.EFD) annotation (Line(points={{41.3,-12},{60,-12},
          {60,-48},{-60,-48},{-60,-12},{-34.6,-12}}, color={0,0,127}));
  connect(gENSAL.PMECH0, gENSAL.PMECH) annotation (Line(points={{41.3,16},{60,
          16},{60,60},{-60,60},{-60,16},{-34.6,16}}, color={0,0,127}));
  annotation (
    Diagram(coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}},
        initialScale=0.1)),
    Icon(coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}},
        initialScale=0.1)),
    Documentation);
end Gen4_No_AVR;
