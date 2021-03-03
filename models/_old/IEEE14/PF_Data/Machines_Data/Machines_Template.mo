within IEEE14.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePowerMega PG1 "gen_Bus_1_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG1 "gen_Bus_1_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG2 "gen_Bus_2_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG2 "gen_Bus_2_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG3 "gen_Bus_3_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG3 "gen_Bus_3_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG4 "gen_Bus_6_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG4 "gen_Bus_6_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG5 "gen_Bus_8_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG5 "gen_Bus_8_1" annotation(Dialog(enable = false));

end Machines_Template;