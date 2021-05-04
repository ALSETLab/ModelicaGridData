within SMIB.PF_Data;
record PF_00000
extends SMIB.PF_Data.Power_Flow_Template;

replaceable record Bus = SMIB.PF_Data.Bus_Data.PF_Bus_00000 "Bus power flow results"
constrainedby SMIB.PF_Data.Bus_Data.Bus_Template;
Bus bus;

replaceable record Loads = SMIB.PF_Data.Loads_Data.PF_Loads_00000 "Loads power flow results"
constrainedby SMIB.PF_Data.Loads_Data.Loads_Template;
Loads loads;

replaceable record Machines = SMIB.PF_Data.Machines_Data.PF_Machines_00000 "Machine power flow results"
constrainedby SMIB.PF_Data.Machines_Data.Machines_Template;
Machines machines;

replaceable record Trafos = SMIB.PF_Data.Trafos_Data.PF_Trafos_00000 "Trafos power flow results"
constrainedby SMIB.PF_Data.Trafos_Data.Trafos_Template;
Trafos trafos;

end PF_00000;