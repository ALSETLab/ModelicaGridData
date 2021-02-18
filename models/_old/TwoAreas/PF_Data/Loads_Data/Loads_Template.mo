within TwoAreas.PF_Data.Loads_Data;
partial record Loads_Template

parameter OpenIPSL.Types.ActivePowerMega PL1 "Load7" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QL1 "Load7" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PL2 "Load9" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QL2 "Load9" annotation(Dialog(enable = false));

end Loads_Template;