within TwoAreas.PF_Data.Bus_Data;
record PF_Bus_00000
extends TwoAreas.PF_Data.Bus_Data.Bus_Template(

// Bus: 'B01' (PV bus)
V1 = 1.0300000,
A1 = 27.0708628,

// Bus: 'B02' (PV bus)
V2 = 1.0100000,
A2 = 17.3064727,

// Bus: 'B03' (slack bus)
V3 = 1.0300000,
A3 = 0.0000000,

// Bus: 'B04' (PV bus)
V4 = 1.0100000,
A4 = -10.1921491,

// Bus: 'B05' (PQ bus)
V5 = 1.0064498,
A5 = 20.6076510,

// Bus: 'B06' (PQ bus)
V6 = 0.9781229,
A6 = 10.5229297,

// Bus: 'B07' (PQ bus)
V7 = 0.9610070,
A7 = 2.1136357,

// Bus: 'B08' (PQ bus)
V8 = 0.9485995,
A8 = -11.7565782,

// Bus: 'B09' (PQ bus)
V9 = 0.9713535,
A9 = -25.3542155,

// Bus: 'B10' (PQ bus)
V10 = 0.9834512,
A10 = -16.9387678,

// Bus: 'B11' (PQ bus)
V11 = 1.0082484,
A11 = -6.6284019

);
end PF_Bus_00000;