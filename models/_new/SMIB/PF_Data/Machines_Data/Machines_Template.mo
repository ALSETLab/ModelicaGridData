within SMIB.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePower PG1 "gen01_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG1 "gen01_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG2 "gen02_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG2 "gen02_1" annotation(Dialog(enable = false));

end Machines_Template;
