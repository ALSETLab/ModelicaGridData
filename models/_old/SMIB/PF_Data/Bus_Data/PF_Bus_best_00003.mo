within SMIB.PF_Data.Bus_Data;
record PF_Bus_best_00003
extends SMIB.PF_Data.Bus_Data.Bus_Template(

// Bus: 'B01' (PV bus)
V1 = 1.0000000,
A1 = 4.6040375,

// Bus: 'B02' (slack bus)
V2 = 1.0000000,
A2 = 0.0000000,

// Bus: 'B03' (PQ bus)
V3 = 0.9966924,
A3 = -0.0061717,

// Bus: 'B04' (PQ bus)
V4 = 0.9933849,
A4 = -0.0123840

);
end PF_Bus_best_00003;