within AVRI.Generating_Units;
model Gen_B12
extends OpenIPSL.Interfaces.Generator;

  OpenIPSL.Electrical.Machines.PSAT.Order3 order3_2(
    Sn=900,
    Vn=1,
    ra=0,
    xd=1.8,
    x1d=0.3,
    M=7,
    V_0=V_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    D=2,
    T1d0=8,
    xq=1.7)
    annotation (Placement(transformation(extent={{22,-22},{-22,22}},
        rotation=180,
        origin={50,0})));
  OpenIPSL.Electrical.Controls.PSAT.AVR.AVRTypeI Exc2(
    Te=0.01,
    v0=1.05,
    K0=25,
    vrmax=5,
    vrmin=-5,
    T1=10,
    T2=6.67,
    Tr=0.001) annotation (Placement(transformation(extent={{21,-19},{-21,19}},
        rotation=180,
        origin={-35,-11})));
equation
  connect(Exc2.vf, order3_2.vf)
    annotation (Line(points={{-9.8,-11},{23.6,-11}}, color={0,0,127}));
  connect(order3_2.p, pwPin) annotation (Line(points={{72,-1.77636e-15},{93,
          -1.77636e-15},{93,0},{110,0}}, color={0,0,255}));
  connect(Exc2.vref0, Exc2.vref) annotation (Line(points={{-35,-33.8},{-35,-50},
          {-78,-50},{-78,-22.4},{-60.2,-22.4}}, color={0,0,127}));
  connect(order3_2.pm0, order3_2.pm) annotation (Line(points={{32.4,24.2},{32.4,
          36},{0,36},{0,11},{23.6,11}}, color={0,0,127}));
  connect(order3_2.v, Exc2.v) annotation (Line(points={{74.2,-6.6},{88,-6.6},{
          88,-60},{-88,-60},{-88,0.4},{-60.2,0.4}}, color={0,0,127}));
  connect(order3_2.vf0, Exc2.vf0) annotation (Line(points={{32.4,-24.2},{32.4,
          -66},{-84,-66},{-84,22},{-35,22},{-35,11.8}}, color={0,0,127}));
end Gen_B12;
