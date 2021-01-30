within IEEE14.PF_Data.Machines_Data;
partial record Machines_Template

parameter Real PG1 "gen_Bus_1_1" annotation(Dialog(enable = false));
parameter Real QG1 "gen_Bus_1_1" annotation(Dialog(enable = false));

parameter Real PG2 "gen_Bus_2_1" annotation(Dialog(enable = false));
parameter Real QG2 "gen_Bus_2_1" annotation(Dialog(enable = false));

parameter Real PG3 "gen_Bus_3_1" annotation(Dialog(enable = false));
parameter Real QG3 "gen_Bus_3_1" annotation(Dialog(enable = false));

parameter Real PG4 "gen_Bus_6_1" annotation(Dialog(enable = false));
parameter Real QG4 "gen_Bus_6_1" annotation(Dialog(enable = false));

parameter Real PG5 "gen_Bus_8_1" annotation(Dialog(enable = false));
parameter Real QG5 "gen_Bus_8_1" annotation(Dialog(enable = false));

end Machines_Template;