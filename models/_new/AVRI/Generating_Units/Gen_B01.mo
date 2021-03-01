within AVRI.Generating_Units;
model Gen_B01
extends OpenIPSL.Interfaces.Generator;

  OpenIPSL.Electrical.Machines.PSAT.Order2 order2(
    v_0=v_0,
    angle_0=angle_0,
    Sn=900000000,
    ra=0,
    M=14,
    D=2,
    x1d=0.3,
    P_0=P_0,
    Q_0=Q_0,
    Vn=1000000)
             annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={2,0})));
equation
  connect(order2.p, pwPin)
    annotation (Line(points={{12,0},{110,0}}, color={0,0,255}));
  connect(order2.vf0, order2.vf) annotation (Line(points={{-6,11},{-6,20},{-20,
          20},{-20,5},{-10,5}}, color={0,0,127}));
  connect(order2.pm0, order2.pm) annotation (Line(points={{-6,-11},{-6,-20},{
          -20,-20},{-20,-5},{-10,-5}}, color={0,0,127}));
end Gen_B01;
