within IEEE9.PF_Data.Loads_Data;
partial record Loads_Template

parameter OpenIPSL.Types.ActivePower PL1 "load_B5" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QL1 "load_B5" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PL2 "load_B6" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QL2 "load_B6" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PL3 "load_B8" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QL3 "load_B8" annotation(Dialog(enable = false));

end Loads_Template;
