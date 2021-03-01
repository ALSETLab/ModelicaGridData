within AVRI.Generating_Units;
model Gen_B08
extends OpenIPSL.Interfaces.Generator;

  OpenIPSL.Electrical.Machines.PSAT.Order3 order3_1(
    v_0=v_0,
    Sn=900000000,
    ra=0,
    xd=1.8,
    x1d=0.3,
    M=21,
    angle_0=angle_0,
    D=2,
    P_0=P_0,
    Q_0=Q_0,
    T1d0=8,
    xq=1.7,
    Vn=1000000)
    annotation (Placement(transformation(extent={{28,-10},{48,10}})));
  OpenIPSL.Electrical.Controls.PSAT.AVR.AVRTypeI Exc1(
    Te=0.01,
    v0=1.05,
    K0=25,
    vrmax=5,
    vrmin=-5,
    T1=10,
    T2=6.67,
    Tr=0.001)
    annotation (Placement(transformation(extent={{6,0},{16,10}})));
  Modelica.Blocks.Math.Add add
    annotation (Placement(transformation(extent={{-44,-56},{-24,-36}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-90,-68},{-70,-48}})));
equation
  connect(order3_1.pm,order3_1. pm0) annotation (Line(points={{26,-5},{26,-11},
          {30,-11}},                                    color={0,0,127}));
  connect(Exc1.vf,order3_1. vf)
    annotation (Line(points={{17,5},{26,5}},                 color={0,0,127}));
  connect(Exc1.vf0,order3_1. vf0) annotation (Line(points={{11,-1},{11,-16},{
          -12,-16},{-12,18},{30,18},{30,11}},       color={0,0,127}));
  connect(Exc1.vref0,Exc1. vref) annotation (Line(points={{11,11},{11,14},{2,14},
          {2,8},{5,8}},                  color={0,0,127}));
  connect(add.y,Exc1. v) annotation (Line(points={{-23,-46},{-14,-46},{-14,2},{
          5,2}},      color={0,0,127}));
  connect(order3_1.v,add. u1) annotation (Line(points={{49,3},{52,3},{52,-26},{
          -80,-26},{-80,-40},{-46,-40}},
                                color={0,0,127}));
  connect(order3_1.p, pwPin)
    annotation (Line(points={{48,0},{110,0}}, color={0,0,255}));
  connect(const.y, add.u2) annotation (Line(points={{-69,-58},{-58,-58},{-58,
          -52},{-46,-52}}, color={0,0,127}));
end Gen_B08;
