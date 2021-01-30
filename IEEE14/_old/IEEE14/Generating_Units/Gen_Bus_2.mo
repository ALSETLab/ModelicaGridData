within IEEE14.Generating_Units;
model Gen_Bus_2
extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENROU gENROU(
    V_0=V_0,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    M_b=100,
    Tpd0=6.5,
    Tppd0=0.06,
    Tppq0=0.05,
    H=6.5,
    D=0,
    Xd=1.8,
    Xq=1.75,
    Xpd=0.6,
    Xppd=0.13,
    Xppq=0.13,
    Xl=0.15,
    S10=0.09,
    S12=0.38,
    R_a=0,
    Xpq=0.8,
    Tpq0=0.2) annotation (Placement(transformation(extent={{-84,-50},{36,48}})));
  OpenIPSL.Electrical.Controls.PSSE.TG.TGOV1 tGOV1_1(
    R=0.05,
    D_t=0.0000,
    T_1=0.05,
    T_2=1,
    T_3=2.1,
    V_MAX=1.05,
    V_MIN=0.3) annotation (Placement(transformation(
        extent={{-45,-18},{45,18}},
        rotation=180,
        origin={-9,82})));
  OpenIPSL.Electrical.Controls.PSSE.PSS.PSS2A pSS2A(
    T_w1=2,
    T_w2=2,
    T_6=0.1,
    T_w3=2,
    T_w4=4,
    T_7=2,
    K_S2=0.333,
    K_S3=1,
    T_8=0.5,
    T_9=0.1,
    K_S1=20,
    T_1=0.052,
    T_2=0.03,
    T_3=0.281,
    T_4=0.03,
    V_STMAX=0.1,
    V_STMIN=-0.1,
    M=5,
    N=1) annotation (Placement(transformation(extent={{-332,-38},{-154,36}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.IEEET1 iEEET1_1(
    T_R=0.06,
    K_A=20,
    T_A=0.01,
    V_RMAX=5,
    V_RMIN=-6,
    K_E=1,
    T_E=0.67,
    K_F=0.1,
    T_F=1,
    E_1=3,
    S_EE_1=0.09,
    E_2=4,
    S_EE_2=0.368) annotation (Placement(transformation(
        extent={{-54,49},{54,-49}},
        rotation=180,
        origin={-32,-121})));
  Modelica.Blocks.Sources.Constant const(k=0) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={36,-200})));
equation
  connect(iEEET1_1.EFD, gENROU.EFD) annotation (Line(points={{-88.7,-115.556},{
          -128,-115.556},{-128,-25.5},{-96,-25.5}}, color={0,0,127}));
  connect(gENROU.PELEC, pSS2A.V_S2) annotation (Line(points={{42,13.7},{80,13.7},
          {80,-60},{-366,-60},{-366,-19.5},{-332,-19.5}}, color={0,0,127}));
  connect(gENROU.SPEED, pSS2A.V_S1) annotation (Line(points={{42,33.3},{60,33.3},
          {60,34},{78,34},{78,58},{-366,58},{-366,17.5},{-332,17.5}}, color={0,
          0,127}));
  connect(gENROU.PMECH0, tGOV1_1.PMECH0) annotation (Line(points={{42,23.5},{66,
          23.5},{66,91},{30.375,91}}, color={0,0,127}));
  connect(gENROU.SPEED, tGOV1_1.SPEED) annotation (Line(points={{42,33.3},{78,
          33.3},{78,73},{30.375,73}}, color={0,0,127}));
  connect(tGOV1_1.PMECH, gENROU.PMECH) annotation (Line(points={{-59.625,82},{
          -130,82},{-130,23.5},{-96,23.5}}, color={0,0,127}));
  connect(pSS2A.VOTHSG, iEEET1_1.VOTHSG) annotation (Line(points={{-151.189,-1},
          {-112,-1},{-112,-68},{50,-68},{50,-91.0556},{22,-91.0556}}, color={0,
          0,127}));
  connect(gENROU.ETERM, iEEET1_1.ECOMP) annotation (Line(points={{42,-15.7},{70,
          -15.7},{70,-115.556},{22,-115.556}}, color={0,0,127}));
  connect(gENROU.EFD0, iEEET1_1.EFD0) annotation (Line(points={{42,-25.5},{64,
          -25.5},{64,-150.944},{22,-150.944}}, color={0,0,127}));
  connect(const.y, iEEET1_1.VUEL) annotation (Line(points={{25,-200},{4,-200},{
          4,-170},{3.1,-170}}, color={0,0,127}));
  connect(const.y, iEEET1_1.VOEL) annotation (Line(points={{25,-200},{-14,-200},
          {-14,-170},{-13.1,-170}}, color={0,0,127}));
  connect(gENROU.p, pwPin) annotation (Line(points={{36,-1},{78,-1},{78,0},{110,
          0}}, color={0,0,255}));
annotation (Diagram(coordinateSystem(extent={{-240,-100},{100,100}})));
end Gen_Bus_2;
