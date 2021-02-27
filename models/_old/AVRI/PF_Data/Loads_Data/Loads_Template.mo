within AVRI.PF_Data.Loads_Data;
partial record Loads_Template

parameter OpenIPSL.Types.ActivePowerMega PL1 "load_ExtInput" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QL1 "load_ExtInput" annotation(Dialog(enable = false));

end Loads_Template;
