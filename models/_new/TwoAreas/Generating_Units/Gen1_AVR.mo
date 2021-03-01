within TwoAreas.Generating_Units;
model Gen1_AVR
  extends OpenIPSL.Interfaces.Generator;
  OpenIPSL.Electrical.Machines.PSSE.GENROU g1(
    v_0=v_0,
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
    M_b=900000000,
    angle_0=angle_0,
    P_0=P_0,
    Q_0=Q_0,
    Xpq=0.55,
    Tpq0=0.4) annotation (Placement(transformation(extent={{-2,-18},{38,18}})));
  OpenIPSL.Electrical.Controls.PSSE.ES.SEXS sEXS(
    T_AT_B=1,
    T_B=1,
    K=200,
    T_E=0.01,
    E_MIN=0,
    E_MAX=4) annotation (Placement(transformation(extent={{-42,-18},{-8,0}})));
  Modelica.Blocks.Sources.Constant const(k=0)
    annotation (Placement(transformation(extent={{-68,-2},{-58,8}})));
equation
  connect(g1.PMECH, g1.PMECH0) annotation (Line(points={{-6,9},{-6,9},{-12,9},{-12,
          10},{-12,26},{44,26},{44,9},{40,9}},              color={0,0,127}));
  connect(g1.p, pwPin)
    annotation (Line(points={{38,0},{38,0},{110,0}},color={0,0,255}));
  connect(sEXS.EFD, g1.EFD) annotation (Line(points={{-6.3,-9},{-6.3,-9},{-6,-9}},
                color={0,0,127}));
  connect(sEXS.EFD0, g1.EFD0) annotation (Line(points={{-43.7,-12.6},{-46,-12.6},
          {-46,-26},{46,-26},{46,-9},{40,-9}},         color={0,0,127}));
  connect(sEXS.VOEL, const.y) annotation (Line(points={{-25,-18.9},{-25,-9.5},{
          -57.5,-9.5},{-57.5,3}},  color={0,0,127}));
  connect(sEXS.VOTHSG, const.y) annotation (Line(points={{-43.7,-5.4},{-43.7,
          -6.1875},{-57.5,-6.1875},{-57.5,3}},
                                      color={0,0,127}));
  connect(sEXS.VUEL, const.y) annotation (Line(points={{-31.8,-18.9},{-31.8,
          -12.1875},{-57.5,-12.1875},{-57.5,3}},
                                       color={0,0,127}));
  connect(g1.ETERM, sEXS.ECOMP) annotation (Line(points={{40,-5.4},{50,-5.4},{
          50,-30},{-50,-30},{-50,-9},{-43.7,-9}},
                                        color={0,0,127}));
  annotation (
    Diagram(coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}},
        initialScale=0.1)),
    Icon(coordinateSystem(
        preserveAspectRatio=false,
        extent={{-100,-100},{100,100}},
        initialScale=0.1)),
    Documentation(info="<html>
<table cellspacing=\"1\" cellpadding=\"1\" border=\"1\">
<tr>
<td><p>Reference</p></td>
<td>Klein-Rogers-Kundur power network</td>
</tr>
<tr>
<td><p>Last update</p></td>
<td>2015-12-01</td>
</tr>
<tr>
<td><p>Author</p></td>
<td><p>Maxime Baudette, Tin Rabuzin, SmarTS Lab, KTH Royal Institute of Technology</p></td>
</tr>
<tr>
<td><p>Contact</p></td>
<td><p><a href=\"mailto:luigiv@kth.se\">luigiv@kth.se</a></p></td>
</tr>
</table>
</html>"));
end Gen1_AVR;
