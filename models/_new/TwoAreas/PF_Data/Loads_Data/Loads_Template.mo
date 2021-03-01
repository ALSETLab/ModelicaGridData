within TwoAreas.PF_Data.Loads_Data;
partial record Loads_Template

parameter OpenIPSL.Types.ActivePower PL1 "Load7" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QL1 "Load7" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PL2 "Load9" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QL2 "Load9" annotation(Dialog(enable = false));

end Loads_Template;
