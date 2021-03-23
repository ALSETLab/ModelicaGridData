within SMIB.PF_Data.Bus_Data;
record PF_Bus_worst_00012
extends SMIB.PF_Data.Bus_Data.Bus_Template(

// Bus: 'B01' (PV bus)
V1 = 1.0000000,
A1 = 4.5584518,

// Bus: 'B02' (slack bus)
V2 = 1.0000000,
A2 = 0.0000000,

// Bus: 'B03' (PQ bus)
V3 = 0.9966367,
A3 = -0.0291290,

// Bus: 'B04' (PQ bus)
V4 = 0.9932738,
A4 = -0.0584544

);
end PF_Bus_worst_00012;