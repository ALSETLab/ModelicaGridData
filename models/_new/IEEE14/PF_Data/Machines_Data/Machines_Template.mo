within IEEE14.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePower PG1 "gen_Bus_1_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG1 "gen_Bus_1_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG2 "gen_Bus_2_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG2 "gen_Bus_2_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG3 "gen_Bus_3_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG3 "gen_Bus_3_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG4 "gen_Bus_6_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG4 "gen_Bus_6_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG5 "gen_Bus_8_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG5 "gen_Bus_8_1" annotation(Dialog(enable = false));

end Machines_Template;