within IEEE9.PF_Data.Bus_Data;
record PF_Bus_00001
extends IEEE9.PF_Data.Bus_Data.Bus_Template(

// Bus: 'BUS1' (slack bus)
V1 = 1.0400000,
A1 = 0.0000000,

// Bus: 'BUS2' (PV bus)
V2 = 1.0300000,
A2 = 9.1821922,

// Bus: 'BUS3' (PV bus)
V3 = 1.0250000,
A3 = 4.6476601,

// Bus: 'BUS4' (PQ bus)
V4 = 1.0265927,
A4 = -2.2141860,

// Bus: 'BUS5' (PQ bus)
V5 = 0.9975267,
A5 = -3.9848670,

// Bus: 'BUS6' (PQ bus)
V6 = 1.0135547,
A6 = -3.6858836,

// Bus: 'BUS7' (PQ bus)
V7 = 1.0293472,
A7 = 3.6682565,

// Bus: 'BUS8' (PQ bus)
V8 = 1.0184389,
A8 = 0.7034088,

// Bus: 'BUS9' (PQ bus)
V9 = 1.0332915,
A9 = 1.9520773

);
end PF_Bus_00001;