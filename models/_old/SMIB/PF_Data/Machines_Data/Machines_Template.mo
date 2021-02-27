within SMIB.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePowerMega PG1 "gen01_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG1 "gen01_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG2 "gen02_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG2 "gen02_1" annotation(Dialog(enable = false));

end Machines_Template;
