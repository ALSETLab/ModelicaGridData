within AVRI.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePowerMega PG1 "gen_B100_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG1 "gen_B100_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG2 "gen_B1200_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG2 "gen_B1200_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG3 "gen_B800_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG3 "gen_B800_1" annotation(Dialog(enable = false));

end Machines_Template;