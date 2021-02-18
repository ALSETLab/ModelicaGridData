within IEEE9.Generation_Groups;
model PSSEGen1
  extends OpenIPSL.Interfaces.Generator;
  parameter Real M_b "Machine base power (MVA)"
  annotation (Dialog(group="Power flow data"));
  parameter Real height_1 annotation (Dialog(group="AVR Disturbance"));
  parameter Real tstart_1 annotation (Dialog(group="AVR Disturbance"));
  parameter Boolean refdisturb_1 annotation (Dialog(group="AVR Disturbance"));
  //Real P_MW;
  //Real Q_MVA;
  OpenIPSL.Electrical.Machines.PSSE.GENSAL gENSAL(
    V_b=V_b,
    V_0=V_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    M_b=M_b,
    Tpd0=8.96,
    Tppd0=0.05,
    Tppq0=0.05,
    H=9.55,
    D=1.6,
    Xd=0.3615,
    Xq=0.24,
    Xpd=0.1508,
    Xppd=0.1,
    Xppq=0.1,
    Xl=0.06,
    S10=1.01,
    S12=1.02) annotation (Placement(transformation(extent={{12,-20},{62,20}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 iEEET1_1(
    T_R=0,
    K_A=20,
    T_A=0.2,
    V_RMAX=3,
    V_RMIN=-3,
    K_E=1,
    T_E=0.314,
    K_F=0.063,
    T_F=0.35,
    E_1=2.8,
    S_EE_1=0.3034,
    E_2=3.73,
    S_EE_2=1.2884)
    annotation (Placement(transformation(extent={{-44,-18},{-4,18}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-92,-10},{-72,10}})));
equation
  //P_MW = gen.P*S_b;
  // Q_MVA = gen.Q*S_b;
  connect(gENSAL.p, pwPin)
    annotation (Line(points={{62,0},{110,0}}, color={0,0,255}));
  connect(const.y, iEEET1_1.VOTHSG) annotation (Line(points={{-71,0},{-64,0},{-64,
          11},{-44,11}}, color={0,0,127}));
  connect(const.y, iEEET1_1.VUEL) annotation (Line(points={{-71,0},{-64,0},{-64,
          -26},{-37,-26},{-37,-18}}, color={0,0,127}));
  connect(const.y, iEEET1_1.VOEL) annotation (Line(points={{-71,0},{-64,0},{-64,
          -38},{-31,-38},{-31,-18}}, color={0,0,127}));
  connect(gENSAL.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{64.5,-6},{78,-6},
          {78,-46},{-56,-46},{-56,2},{-44,2}}, color={0,0,127}));
  connect(gENSAL.EFD0, iEEET1_1.EFD0) annotation (Line(points={{64.5,-10},{86,-10},
          {86,-50},{-52,-50},{-52,-11},{-44,-11}}, color={0,0,127}));
  connect(gENSAL.PMECH0, gENSAL.PMECH) annotation (Line(points={{64.5,10},{80,10},
          {80,26},{-2,26},{-2,10},{7,10}}, color={0,0,127}));
  connect(iEEET1_1.EFD, gENSAL.EFD)
    annotation (Line(points={{-3,2},{0,2},{0,-10},{7,-10}}, color={0,0,127}));
  annotation (
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{
            100,100}})),
    Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,
            100}})),
    Documentation);
end PSSEGen1;
