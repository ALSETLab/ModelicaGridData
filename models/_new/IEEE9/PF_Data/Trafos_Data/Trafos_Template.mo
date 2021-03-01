within IEEE9.PF_Data.Trafos_Data;
partial record Trafos_Template

parameter Real t1_trafo_1 "twoWindingTransformer" annotation(Dialog(enable = false));
parameter Real t2_trafo_1 "twoWindingTransformer" annotation(Dialog(enable = false));

parameter Real t1_trafo_2 "twoWindingTransformer2" annotation(Dialog(enable = false));
parameter Real t2_trafo_2 "twoWindingTransformer2" annotation(Dialog(enable = false));

parameter Real t1_trafo_3 "twoWindingTransformer3" annotation(Dialog(enable = false));
parameter Real t2_trafo_3 "twoWindingTransformer3" annotation(Dialog(enable = false));

end Trafos_Template;
