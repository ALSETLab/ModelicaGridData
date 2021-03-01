within AVRI.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePower PG1 "gen_B01" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG1 "gen_B01" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG2 "gen_B08" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG2 "gen_B08" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG3 "gen_B12" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG3 "gen_B12" annotation(Dialog(enable = false));

end Machines_Template;
