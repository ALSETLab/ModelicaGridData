within TwoAreas.PF_Data;
record Power_Flow
extends Modelica.Icons.Record;

replaceable record PowerFlow = TwoAreas.PF_Data.Power_Flow_Template
constrainedby TwoAreas.PF_Data.Power_Flow_Template
annotation(choicesAllMatching);

PowerFlow powerflow;

end Power_Flow;
