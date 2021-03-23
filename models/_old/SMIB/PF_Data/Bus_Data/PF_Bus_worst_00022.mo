within SMIB.PF_Data.Bus_Data;
record PF_Bus_worst_00022
extends SMIB.PF_Data.Bus_Data.Bus_Template(

// Bus: 'B01' (PV bus)
V1 = 1.0000000,
A1 = 4.1807522,

// Bus: 'B02' (slack bus)
V2 = 1.0000000,
A2 = 0.0000000,

// Bus: 'B03' (PQ bus)
V3 = 0.9961607,
A3 = -0.2192791,

// Bus: 'B04' (PQ bus)
V4 = 0.9923361,
A4 = -0.4402477

);
end PF_Bus_worst_00022;