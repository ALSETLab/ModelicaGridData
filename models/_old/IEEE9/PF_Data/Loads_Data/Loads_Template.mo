within IEEE9.PF_Data.Loads_Data;
partial record Loads_Template

parameter OpenIPSL.Types.ActivePowerMega PL1 "load_B5" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QL1 "load_B5" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PL2 "load_B6" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QL2 "load_B6" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PL3 "load_B8" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QL3 "load_B8" annotation(Dialog(enable = false));

end Loads_Template;
