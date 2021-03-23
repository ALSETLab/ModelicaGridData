within SMIB.PF_Data.Bus_Data;
record PF_Bus_worst_00021
extends SMIB.PF_Data.Bus_Data.Bus_Template(

// Bus: 'B01' (PV bus)
V1 = 1.0000000,
A1 = 4.0498669,

// Bus: 'B02' (slack bus)
V2 = 1.0000000,
A2 = 0.0000000,

// Bus: 'B03' (PQ bus)
V3 = 0.9959897,
A3 = -0.2851453,

// Bus: 'B04' (PQ bus)
V4 = 0.9920042,
A4 = -0.5725835

);
end PF_Bus_worst_00021;