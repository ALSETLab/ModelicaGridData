within IEEE9.PF_Data;
record PF_worst_00021
extends IEEE9.PF_Data.Power_Flow_Template;

replaceable record Bus = IEEE9.PF_Data.Bus_Data.PF_Bus_worst_00021 "Bus power flow results"
constrainedby IEEE9.PF_Data.Bus_Data.Bus_Template;
Bus bus;

replaceable record Loads = IEEE9.PF_Data.Loads_Data.PF_Loads_worst_00021 "Loads power flow results"
constrainedby IEEE9.PF_Data.Loads_Data.Loads_Template;
Loads loads;

replaceable record Machines = IEEE9.PF_Data.Machines_Data.PF_Machines_worst_00021 "Machine power flow results"
constrainedby IEEE9.PF_Data.Machines_Data.Machines_Template;
Machines machines;

replaceable record Trafos = IEEE9.PF_Data.Trafos_Data.PF_Trafos_worst_00021 "Trafos power flow results"
constrainedby IEEE9.PF_Data.Trafos_Data.Trafos_Template;
Trafos trafos;

end PF_worst_00021;