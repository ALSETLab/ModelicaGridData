within TwoAreas.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePower PG1 "gen1_No_AVR" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG1 "gen1_No_AVR" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG2 "gen2_No_AVR" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG2 "gen2_No_AVR" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG3 "gen3_No_AVR" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG3 "gen3_No_AVR" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG4 "gen4_No_AVR" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG4 "gen4_No_AVR" annotation(Dialog(enable = false));

end Machines_Template;
