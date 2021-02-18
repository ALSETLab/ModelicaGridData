within TwoAreas.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePowerMega PG1 "gen1_No_AVR" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG1 "gen1_No_AVR" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG2 "gen2_No_AVR" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG2 "gen2_No_AVR" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG3 "gen3_No_AVR" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG3 "gen3_No_AVR" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG4 "gen4_No_AVR" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG4 "gen4_No_AVR" annotation(Dialog(enable = false));

end Machines_Template;