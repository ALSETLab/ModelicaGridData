within TwoAreas.PF_Data;
record PF_00000
extends TwoAreas.PF_Data.Power_Flow_Template;

replaceable record Bus = TwoAreas.PF_Data.Bus_Data.PF_Bus_00000
constrainedby TwoAreas.PF_Data.Bus_Data.Bus_Template            "Bus power flow results";
Bus bus;

replaceable record Loads = TwoAreas.PF_Data.Loads_Data.PF_Loads_00000
constrainedby TwoAreas.PF_Data.Loads_Data.Loads_Template              "Loads power flow results";
Loads loads;

replaceable record Machines = TwoAreas.PF_Data.Machines_Data.PF_Machines_00000
constrainedby TwoAreas.PF_Data.Machines_Data.Machines_Template                 "Machine power flow results";
Machines machines;

replaceable record Trafos = TwoAreas.PF_Data.Trafos_Data.PF_Trafos_00000
constrainedby TwoAreas.PF_Data.Trafos_Data.Trafos_Template               "Trafos power flow results";
Trafos trafos;

end PF_00000;
