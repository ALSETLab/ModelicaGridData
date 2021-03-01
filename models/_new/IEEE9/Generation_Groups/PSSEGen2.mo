within IEEE9.Generation_Groups;
model PSSEGen2
  extends OpenIPSL.Interfaces.Generator;
  parameter Real height_2 annotation (Dialog(group="AVR Disturbance"));
  parameter Real tstart_2 annotation (Dialog(group="AVR Disturbance"));
  parameter Boolean refdisturb_2 annotation (Dialog(group="AVR Disturbance"));
  //Real P_MW;
  //Real Q_MVA;
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
    annotation (Placement(transformation(extent={{-60,-18},{-20,18}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-98,-10},{-78,10}})));
  OpenIPSL.Electrical.Machines.PSSE.GENROU gENROU(
    V_b=V_b,
    v_0=v_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    M_b=275000000,
    Tpd0=6,
    Tppd0=0.05,
    Tppq0=0.05,
    H=3.33,
    D=0.67,
    Xd=1.72,
    Xq=1.66,
    Xpd=0.23,
    Xppd=0.21,
    Xppq=0.21,
    Xl=0.1,
    S10=1.01,
    S12=1.02,
    Xpq=0.37,
    Tpq0=0.5350)
    annotation (Placement(transformation(extent={{4,-28},{80,30}})));
equation
  //P_MW = gen.P*S_b;
  //Q_MVA = gen.Q*S_b;
  connect(const.y, iEEET1_1.VOTHSG) annotation (Line(points={{-77,0},{-74,0},{-74,
          7.2},{-62,7.2}},
                         color={0,0,127}));
  connect(const.y, iEEET1_1.VUEL) annotation (Line(points={{-77,0},{-74,0},{-74,
          -26},{-48,-26},{-48,-19.8}},
                                     color={0,0,127}));
  connect(const.y, iEEET1_1.VOEL) annotation (Line(points={{-77,0},{-74,0},{-74,
          -38},{-40,-38},{-40,-19.8}},
                                     color={0,0,127}));
  connect(gENROU.PMECH0, gENROU.PMECH) annotation (Line(points={{83.8,15.5},{94,
          15.5},{94,48},{-14,48},{-14,15.5},{-3.6,15.5}}, color={0,0,127}));
  connect(gENROU.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{83.8,-7.7},{96,
          -7.7},{96,-58},{-68,-58},{-68,0},{-62,0}}, color={0,0,127}));
  connect(gENROU.EFD0, iEEET1_1.EFD0) annotation (Line(points={{83.8,-13.5},{92,
          -13.5},{92,-52},{-64,-52},{-64,-7.2},{-62,-7.2}},
                                                          color={0,0,127}));
  connect(gENROU.p, pwPin)
    annotation (Line(points={{80,1},{94,1},{94,0},{110,0}}, color={0,0,255}));
  connect(iEEET1_1.EFD, gENROU.EFD) annotation (Line(points={{-18,0},{-16,0},{-16,
          -13.5},{-3.6,-13.5}}, color={0,0,127}));
  connect(gENROU.XADIFD, iEEET1_1.XADIFD) annotation (Line(points={{83.8,-25.1},
          {90,-25.1},{90,-46},{-24,-46},{-24,-19.8}}, color={0,0,127}));
  annotation (
    Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{
            100,100}})),
    Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,
            100}})),
    Documentation);
end PSSEGen2;
