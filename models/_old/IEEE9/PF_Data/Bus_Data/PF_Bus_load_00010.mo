within IEEE9.PF_Data.Bus_Data;
record PF_Bus_load_00010
extends IEEE9.PF_Data.Bus_Data.Bus_Template(

// Bus: 'BUS1' (slack bus)
V1 = 1.0400000,
A1 = 0.0000000,

// Bus: 'BUS2' (PV bus)
V2 = 1.0300000,
A2 = 10.8400742,

// Bus: 'BUS3' (PV bus)
V3 = 1.0250000,
A3 = 6.2547556,

// Bus: 'BUS4' (PQ bus)
V4 = 1.0295343,
A4 = -1.3974482,

// Bus: 'BUS5' (PQ bus)
V5 = 1.0045967,
A5 = -2.4460866,

// Bus: 'BUS6' (PQ bus)
V6 = 1.0188426,
A6 = -2.3161159,

// Bus: 'BUS7' (PQ bus)
V7 = 1.0317905,
A7 = 5.3392359,

// Bus: 'BUS8' (PQ bus)
V8 = 1.0216112,
A8 = 2.4523254,

// Bus: 'BUS9' (PQ bus)
V9 = 1.0352201,
A9 = 3.5641983

);
end PF_Bus_load_00010;