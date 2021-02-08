within IEEE14.PF_Data;
record PF_load_00010
extends IEEE14.PF_Data.Power_Flow_Template;

replaceable record Bus = IEEE14.PF_Data.Bus_Data.PF_Bus_load_00010 "Bus power flow results"
constrainedby IEEE14.PF_Data.Bus_Data.Bus_Template;
Bus bus;

replaceable record Loads = IEEE14.PF_Data.Loads_Data.PF_Loads_load_00010 "Loads power flow results"
constrainedby IEEE14.PF_Data.Loads_Data.Loads_Template;
Loads loads;

replaceable record Machines = IEEE14.PF_Data.Machines_Data.PF_Machines_load_00010 "Machine power flow results"
constrainedby IEEE14.PF_Data.Machines_Data.Machines_Template;
Machines machines;

replaceable record Trafos = IEEE14.PF_Data.Trafos_Data.PF_Trafos_load_00010 "Trafos power flow results"
constrainedby IEEE14.PF_Data.Trafos_Data.Trafos_Template;
Trafos trafos;

end PF_load_00010;