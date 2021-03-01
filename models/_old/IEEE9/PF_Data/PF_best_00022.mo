within IEEE9.PF_Data;
record PF_best_00022
extends IEEE9.PF_Data.Power_Flow_Template;

replaceable record Bus = IEEE9.PF_Data.Bus_Data.PF_Bus_best_00022
constrainedby IEEE9.PF_Data.Bus_Data.Bus_Template                 "Bus power flow results";
Bus bus;

replaceable record Loads = IEEE9.PF_Data.Loads_Data.PF_Loads_best_00022
constrainedby IEEE9.PF_Data.Loads_Data.Loads_Template                   "Loads power flow results";
Loads loads;

replaceable record Machines =
      IEEE9.PF_Data.Machines_Data.PF_Machines_best_00022
constrainedby IEEE9.PF_Data.Machines_Data.Machines_Template                      "Machine power flow results";
Machines machines;

replaceable record Trafos = IEEE9.PF_Data.Trafos_Data.PF_Trafos_best_00022
constrainedby IEEE9.PF_Data.Trafos_Data.Trafos_Template                    "Trafos power flow results";
Trafos trafos;

end PF_best_00022;
