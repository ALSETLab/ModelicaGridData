within IEEE9.PF_Data.Machines_Data;
partial record Machines_Template

parameter OpenIPSL.Types.ActivePower PG1 "pSSEGen1_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG1 "pSSEGen1_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG2 "pSSEGen2_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG2 "pSSEGen2_1" annotation(Dialog(enable = false));

parameter OpenIPSL.Types.ActivePower PG3 "pSSEGen3_1" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QG3 "pSSEGen3_1" annotation(Dialog(enable = false));

end Machines_Template;
