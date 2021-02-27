within SMIB.PF_Data.Bus_Data;
partial record Bus_Template

parameter Modelica.SIunits.PerUnit V1 "(pu) B01" annotation(Dialog(enable = false));
parameter Modelica.SIunits.Conversions.NonSIunits.Angle_deg A1 "B01" annotation(Dialog(enable = false));

parameter Modelica.SIunits.PerUnit V2 "(pu) B02" annotation(Dialog(enable = false));
parameter Modelica.SIunits.Conversions.NonSIunits.Angle_deg A2 "B02" annotation(Dialog(enable = false));

parameter Modelica.SIunits.PerUnit V3 "(pu) B03" annotation(Dialog(enable = false));
parameter Modelica.SIunits.Conversions.NonSIunits.Angle_deg A3 "B03" annotation(Dialog(enable = false));

parameter Modelica.SIunits.PerUnit V4 "(pu) B04" annotation(Dialog(enable = false));
parameter Modelica.SIunits.Conversions.NonSIunits.Angle_deg A4 "B04" annotation(Dialog(enable = false));

end Bus_Template;
