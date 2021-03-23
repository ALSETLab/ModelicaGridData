within SMIB.PF_Data.Bus_Data;
record PF_Bus_load_00019
extends SMIB.PF_Data.Bus_Data.Bus_Template(

// Bus: 'B01' (PV bus)
V1 = 1.0000000,
A1 = 4.3098447,

// Bus: 'B02' (slack bus)
V2 = 1.0000000,
A2 = 0.0000000,

// Bus: 'B03' (PQ bus)
V3 = 0.9963263,
A3 = -0.1543012,

// Bus: 'B04' (PQ bus)
V4 = 0.9926600,
A4 = -0.3097405

);
end PF_Bus_load_00019;