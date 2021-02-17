within IEEE9.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePowerMega PG1 "pSSEGen1_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG1 "pSSEGen1_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG2 "pSSEGen2_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG2 "pSSEGen2_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePowerMega PG3 "pSSEGen3_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePowerMega QG3 "pSSEGen3_1" annotation(Dialog(enable = false));

end Machines_Template;