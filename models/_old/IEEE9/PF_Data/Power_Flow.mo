within IEEE9.PF_Data;
record Power_Flow
extends Modelica.Icons.Record;

replaceable record PowerFlow = IEEE9.PF_Data.Power_Flow_Template 
constrainedby IEEE9.PF_Data.Power_Flow_Template
annotation(choicesAllMatching);

PowerFlow powerflow;

end Power_Flow;