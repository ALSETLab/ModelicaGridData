within AVRI.PF_Data;
record PF_00000
extends AVRI.PF_Data.Power_Flow_Template;

replaceable record Bus = AVRI.PF_Data.Bus_Data.PF_Bus_00000 "Bus power flow results"
constrainedby AVRI.PF_Data.Bus_Data.Bus_Template;
Bus bus;

replaceable record Loads = AVRI.PF_Data.Loads_Data.PF_Loads_00000 "Loads power flow results"
constrainedby AVRI.PF_Data.Loads_Data.Loads_Template;
Loads loads;

replaceable record Machines = AVRI.PF_Data.Machines_Data.PF_Machines_00000 "Machine power flow results"
constrainedby AVRI.PF_Data.Machines_Data.Machines_Template;
Machines machines;

replaceable record Trafos = AVRI.PF_Data.Trafos_Data.PF_Trafos_00000 "Trafos power flow results"
constrainedby AVRI.PF_Data.Trafos_Data.Trafos_Template;
Trafos trafos;

end PF_00000;