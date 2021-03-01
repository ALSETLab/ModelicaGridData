within AVRI.PF_Data.Loads_Data;
partial record Loads_Template

parameter OpenIPSL.Types.ActivePower PL1 "load_ExtInput" annotation(Dialog(enable = false));
parameter OpenIPSL.Types.ReactivePower QL1 "load_ExtInput" annotation(Dialog(enable = false));

end Loads_Template;
