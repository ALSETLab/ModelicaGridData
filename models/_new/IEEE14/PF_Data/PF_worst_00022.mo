within IEEE14.PF_Data;
record PF_worst_00022
extends IEEE14.PF_Data.Power_Flow_Template;

replaceable record Bus = IEEE14.PF_Data.Bus_Data.PF_Bus_worst_00022 "Bus power flow results"
constrainedby IEEE14.PF_Data.Bus_Data.Bus_Template;
Bus bus;

replaceable record Loads = IEEE14.PF_Data.Loads_Data.PF_Loads_worst_00022 "Loads power flow results"
constrainedby IEEE14.PF_Data.Loads_Data.Loads_Template;
Loads loads;

replaceable record Machines = IEEE14.PF_Data.Machines_Data.PF_Machines_worst_00022 "Machine power flow results"
constrainedby IEEE14.PF_Data.Machines_Data.Machines_Template;
Machines machines;

replaceable record Trafos = IEEE14.PF_Data.Trafos_Data.PF_Trafos_worst_00022 "Trafos power flow results"
constrainedby IEEE14.PF_Data.Trafos_Data.Trafos_Template;
Trafos trafos;

end PF_worst_00022;