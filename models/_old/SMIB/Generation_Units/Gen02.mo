within SMIB.Generation_Units;
model Gen02
  extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENCLS gENCLS(
    V_0=V_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    M_b=100,
    H=5,
    D=0,
    R_a=0,
    X_d=0.2) annotation (Placement(transformation(extent={{-22,-22},{20,24}})));
equation
  connect(gENCLS.p, pwPin)
    annotation (Line(points={{20,1},{62,1},{62,0},{110,0}}, color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Gen02;
