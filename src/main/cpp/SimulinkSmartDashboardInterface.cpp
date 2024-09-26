// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
// Janelyn <3
#include "include/SimulinkSmartDashboardInterface.hh"
 
SimulinkSmartDashboardInterface::SimulinkSmartDashboardInterface()
{
    nt::NetworkTableInstance NTinst = nt::NetworkTableInstance::GetDefault();
    auto NTtable_Tune = NTinst.GetTable("Simulink Tunable Params");
    auto NTtable_Inport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_Outport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_TPoint = NTinst.GetTable("Simulink Test Points");
 
    __AA_Integral_Gain__Entry = NTtable_Tune->GetEntry("AA_Integral_Gain");
    NTinst.AddListener(__AA_Integral_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AA_Integral_Gain = event.GetValueEventData()->value.GetDouble();});
    __AA_Integral_Gain__Entry.SetDouble(0.0005);
 
    __AA_Integral_IC__Entry = NTtable_Tune->GetEntry("AA_Integral_IC");
    NTinst.AddListener(__AA_Integral_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AA_Integral_IC = event.GetValueEventData()->value.GetDouble();});
    __AA_Integral_IC__Entry.SetDouble(0);
 
    __AA_Integral_LL__Entry = NTtable_Tune->GetEntry("AA_Integral_LL");
    NTinst.AddListener(__AA_Integral_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AA_Integral_LL = event.GetValueEventData()->value.GetDouble();});
    __AA_Integral_LL__Entry.SetDouble(-0.5);
 
    __AA_Integral_UL__Entry = NTtable_Tune->GetEntry("AA_Integral_UL");
    NTinst.AddListener(__AA_Integral_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AA_Integral_UL = event.GetValueEventData()->value.GetDouble();});
    __AA_Integral_UL__Entry.SetDouble(0.5);
 
    __AA_Prop_Gain__Entry = NTtable_Tune->GetEntry("AA_Prop_Gain");
    NTinst.AddListener(__AA_Prop_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AA_Prop_Gain = event.GetValueEventData()->value.GetDouble();});
    __AA_Prop_Gain__Entry.SetDouble(0.01);
 
    __AA_TC_LL__Entry = NTtable_Tune->GetEntry("AA_TC_LL");
    NTinst.AddListener(__AA_TC_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AA_TC_LL = event.GetValueEventData()->value.GetDouble();});
    __AA_TC_LL__Entry.SetDouble(-0.6);
 
    __AA_TC_UL__Entry = NTtable_Tune->GetEntry("AA_TC_UL");
    NTinst.AddListener(__AA_TC_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AA_TC_UL = event.GetValueEventData()->value.GetDouble();});
    __AA_TC_UL__Entry.SetDouble(0.6);
 
    __AT_Tag_4_Coordinate_X__Entry = NTtable_Tune->GetEntry("AT_Tag_4_Coordinate_X");
    NTinst.AddListener(__AT_Tag_4_Coordinate_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Tag_4_Coordinate_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Tag_4_Coordinate_X__Entry.SetDouble(16.5793);
 
    __AT_Tag_4_Coordinate_Y__Entry = NTtable_Tune->GetEntry("AT_Tag_4_Coordinate_Y");
    NTinst.AddListener(__AT_Tag_4_Coordinate_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Tag_4_Coordinate_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Tag_4_Coordinate_Y__Entry.SetDouble(5.5479);
 
    __AT_Tag_7_Coordinate_X__Entry = NTtable_Tune->GetEntry("AT_Tag_7_Coordinate_X");
    NTinst.AddListener(__AT_Tag_7_Coordinate_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Tag_7_Coordinate_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Tag_7_Coordinate_X__Entry.SetDouble(-0.0381);
 
    __AT_Tag_7_Coordinate_Y__Entry = NTtable_Tune->GetEntry("AT_Tag_7_Coordinate_Y");
    NTinst.AddListener(__AT_Tag_7_Coordinate_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Tag_7_Coordinate_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Tag_7_Coordinate_Y__Entry.SetDouble(5.5479);
 
    __AT_Target_Tag_11_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_11_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_11_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_11_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_11_Field_Angle__Entry.SetDouble(2.0944);
 
    __AT_Target_Tag_11_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_11_X");
    NTinst.AddListener(__AT_Target_Tag_11_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_11_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_11_X__Entry.SetDouble(12.5143);
 
    __AT_Target_Tag_11_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_11_Y");
    NTinst.AddListener(__AT_Target_Tag_11_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_11_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_11_Y__Entry.SetDouble(2.6574);
 
    __AT_Target_Tag_12_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_12_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_12_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_12_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_12_Field_Angle__Entry.SetDouble(-2.0944);
 
    __AT_Target_Tag_12_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_12_X");
    NTinst.AddListener(__AT_Target_Tag_12_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_12_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_12_X__Entry.SetDouble(12.5143);
 
    __AT_Target_Tag_12_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_12_Y");
    NTinst.AddListener(__AT_Target_Tag_12_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_12_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_12_Y__Entry.SetDouble(5.5542);
 
    __AT_Target_Tag_13_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_13_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_13_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_13_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_13_Field_Angle__Entry.SetDouble(0);
 
    __AT_Target_Tag_13_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_13_X");
    NTinst.AddListener(__AT_Target_Tag_13_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_13_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_13_X__Entry.SetDouble(10.001);
 
    __AT_Target_Tag_13_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_13_Y");
    NTinst.AddListener(__AT_Target_Tag_13_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_13_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_13_Y__Entry.SetDouble(4.1051);
 
    __AT_Target_Tag_14_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_14_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_14_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_14_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_14_Field_Angle__Entry.SetDouble(0);
 
    __AT_Target_Tag_14_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_14_X");
    NTinst.AddListener(__AT_Target_Tag_14_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_14_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_14_X__Entry.SetDouble(6.54);
 
    __AT_Target_Tag_14_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_14_Y");
    NTinst.AddListener(__AT_Target_Tag_14_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_14_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_14_Y__Entry.SetDouble(4.1051);
 
    __AT_Target_Tag_15_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_15_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_15_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_15_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_15_Field_Angle__Entry.SetDouble(2.0944);
 
    __AT_Target_Tag_15_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_15_X");
    NTinst.AddListener(__AT_Target_Tag_15_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_15_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_15_X__Entry.SetDouble(4.0317);
 
    __AT_Target_Tag_15_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_15_Y");
    NTinst.AddListener(__AT_Target_Tag_15_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_15_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_15_Y__Entry.SetDouble(5.5542);
 
    __AT_Target_Tag_16_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_16_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_16_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_16_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_16_Field_Angle__Entry.SetDouble(4.1888);
 
    __AT_Target_Tag_16_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_16_X");
    NTinst.AddListener(__AT_Target_Tag_16_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_16_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_16_X__Entry.SetDouble(4.0317);
 
    __AT_Target_Tag_16_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_16_Y");
    NTinst.AddListener(__AT_Target_Tag_16_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_16_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_16_Y__Entry.SetDouble(2.6574);
 
    __AT_Target_Tag_5_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_5_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_5_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_5_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_5_Field_Angle__Entry.SetDouble(1.5708);
 
    __AT_Target_Tag_5_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_5_X");
    NTinst.AddListener(__AT_Target_Tag_5_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_5_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_5_X__Entry.SetDouble(14.7008);
 
    __AT_Target_Tag_5_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_5_Y");
    NTinst.AddListener(__AT_Target_Tag_5_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_5_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_5_Y__Entry.SetDouble(7.2898);
 
    __AT_Target_Tag_6_Field_Angle__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_6_Field_Angle");
    NTinst.AddListener(__AT_Target_Tag_6_Field_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_6_Field_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_6_Field_Angle__Entry.SetDouble(4.7124);
 
    __AT_Target_Tag_6_X__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_6_X");
    NTinst.AddListener(__AT_Target_Tag_6_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_6_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_6_X__Entry.SetDouble(1.8415);
 
    __AT_Target_Tag_6_Y__Entry = NTtable_Tune->GetEntry("AT_Target_Tag_6_Y");
    NTinst.AddListener(__AT_Target_Tag_6_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Target_Tag_6_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Target_Tag_6_Y__Entry.SetDouble(7.2898);
 
    __AT_XY_Control_Gain__Entry = NTtable_Tune->GetEntry("AT_XY_Control_Gain");
    NTinst.AddListener(__AT_XY_Control_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_XY_Control_Gain = event.GetValueEventData()->value.GetDouble();});
    __AT_XY_Control_Gain__Entry.SetDouble(1.5);
 
    __Amp_Angle__Entry = NTtable_Tune->GetEntry("Amp_Angle");
    NTinst.AddListener(__Amp_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Amp_Angle = event.GetValueEventData()->value.GetDouble();});
    __Amp_Angle__Entry.SetDouble(-50);
 
    __Amp_Gap__Entry = NTtable_Tune->GetEntry("Amp_Gap");
    NTinst.AddListener(__Amp_Gap__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Amp_Gap = event.GetValueEventData()->value.GetDouble();});
    __Amp_Gap__Entry.SetDouble(700);
 
    __Amp_Height__Entry = NTtable_Tune->GetEntry("Amp_Height");
    NTinst.AddListener(__Amp_Height__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Amp_Height = event.GetValueEventData()->value.GetDouble();});
    __Amp_Height__Entry.SetDouble(1050);
 
    __Auto_Design_Path__Entry = NTtable_Tune->GetEntry("Auto_Design_Path");
    NTinst.AddListener(__Auto_Design_Path__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Design_Path = event.GetValueEventData()->value.GetDouble();});
    __Auto_Design_Path__Entry.SetDouble(1);
 
    __Auto_Intake_Velocity__Entry = NTtable_Tune->GetEntry("Auto_Intake_Velocity");
    NTinst.AddListener(__Auto_Intake_Velocity__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Intake_Velocity = event.GetValueEventData()->value.GetDouble();});
    __Auto_Intake_Velocity__Entry.SetDouble(0);
 
    __Auto_Start_Time__Entry = NTtable_Tune->GetEntry("Auto_Start_Time");
    NTinst.AddListener(__Auto_Start_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Start_Time = event.GetValueEventData()->value.GetDouble();});
    __Auto_Start_Time__Entry.SetDouble(1.5);
 
    __Auto_Start_Velocity__Entry = NTtable_Tune->GetEntry("Auto_Start_Velocity");
    NTinst.AddListener(__Auto_Start_Velocity__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Start_Velocity = event.GetValueEventData()->value.GetDouble();});
    __Auto_Start_Velocity__Entry.SetDouble(0.5);
 
    __BS_Deriv_FC__Entry = NTtable_Tune->GetEntry("BS_Deriv_FC");
    NTinst.AddListener(__BS_Deriv_FC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_Deriv_FC = event.GetValueEventData()->value.GetDouble();});
    __BS_Deriv_FC__Entry.SetDouble(0.2);
 
    __BS_Deriv_Gain__Entry = NTtable_Tune->GetEntry("BS_Deriv_Gain");
    NTinst.AddListener(__BS_Deriv_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_Deriv_Gain = event.GetValueEventData()->value.GetDouble();});
    __BS_Deriv_Gain__Entry.SetDouble(0);
 
    __BS_Deriv_LL__Entry = NTtable_Tune->GetEntry("BS_Deriv_LL");
    NTinst.AddListener(__BS_Deriv_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_Deriv_LL = event.GetValueEventData()->value.GetDouble();});
    __BS_Deriv_LL__Entry.SetDouble(-0.5);
 
    __BS_Deriv_UL__Entry = NTtable_Tune->GetEntry("BS_Deriv_UL");
    NTinst.AddListener(__BS_Deriv_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_Deriv_UL = event.GetValueEventData()->value.GetDouble();});
    __BS_Deriv_UL__Entry.SetDouble(0.5);
 
    __BS_Position_Dec_RL__Entry = NTtable_Tune->GetEntry("BS_Position_Dec_RL");
    NTinst.AddListener(__BS_Position_Dec_RL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_Position_Dec_RL = event.GetValueEventData()->value.GetDouble();});
    __BS_Position_Dec_RL__Entry.SetDouble(-30);
 
    __BS_Position_Inc_RL__Entry = NTtable_Tune->GetEntry("BS_Position_Inc_RL");
    NTinst.AddListener(__BS_Position_Inc_RL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_Position_Inc_RL = event.GetValueEventData()->value.GetDouble();});
    __BS_Position_Inc_RL__Entry.SetDouble(30);
 
    __BS_Prop_Gain__Entry = NTtable_Tune->GetEntry("BS_Prop_Gain");
    NTinst.AddListener(__BS_Prop_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_Prop_Gain = event.GetValueEventData()->value.GetDouble();});
    __BS_Prop_Gain__Entry.SetDouble(0.1);
 
    __BS_TC_LL__Entry = NTtable_Tune->GetEntry("BS_TC_LL");
    NTinst.AddListener(__BS_TC_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_TC_LL = event.GetValueEventData()->value.GetDouble();});
    __BS_TC_LL__Entry.SetDouble(-0.3);
 
    __BS_TC_UL__Entry = NTtable_Tune->GetEntry("BS_TC_UL");
    NTinst.AddListener(__BS_TC_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {BS_TC_UL = event.GetValueEventData()->value.GetDouble();});
    __BS_TC_UL__Entry.SetDouble(0.3);
 
    __Boost_Trigger_Decreasing_Limit__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Decreasing_Limit");
    NTinst.AddListener(__Boost_Trigger_Decreasing_Limit__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Decreasing_Limit = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Decreasing_Limit__Entry.SetDouble(-0.28);
 
    __Boost_Trigger_High_Speed__Entry = NTtable_Tune->GetEntry("Boost_Trigger_High_Speed");
    NTinst.AddListener(__Boost_Trigger_High_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_High_Speed = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_High_Speed__Entry.SetDouble(5);
 
    __Boost_Trigger_Increasing_Limit__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Increasing_Limit");
    NTinst.AddListener(__Boost_Trigger_Increasing_Limit__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Increasing_Limit = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Increasing_Limit__Entry.SetDouble(3.5);
 
    __Boost_Trigger_Low_Speed__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Low_Speed");
    NTinst.AddListener(__Boost_Trigger_Low_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Low_Speed = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Low_Speed__Entry.SetDouble(1.5);
 
    __Climber_DutyCycle_Neg__Entry = NTtable_Tune->GetEntry("Climber_DutyCycle_Neg");
    NTinst.AddListener(__Climber_DutyCycle_Neg__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Climber_DutyCycle_Neg = event.GetValueEventData()->value.GetDouble();});
    __Climber_DutyCycle_Neg__Entry.SetDouble(-1);
 
    __Climber_DutyCycle_Pos__Entry = NTtable_Tune->GetEntry("Climber_DutyCycle_Pos");
    NTinst.AddListener(__Climber_DutyCycle_Pos__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Climber_DutyCycle_Pos = event.GetValueEventData()->value.GetDouble();});
    __Climber_DutyCycle_Pos__Entry.SetDouble(0.5);
 
    __Dist_AA_Cal_Tol__Entry = NTtable_Tune->GetEntry("Dist_AA_Cal_Tol");
    NTinst.AddListener(__Dist_AA_Cal_Tol__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_AA_Cal_Tol = event.GetValueEventData()->value.GetDouble();});
    __Dist_AA_Cal_Tol__Entry.SetDouble(5);
 
    __Dist_BS_Cal_Tol__Entry = NTtable_Tune->GetEntry("Dist_BS_Cal_Tol");
    NTinst.AddListener(__Dist_BS_Cal_Tol__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_BS_Cal_Tol = event.GetValueEventData()->value.GetDouble();});
    __Dist_BS_Cal_Tol__Entry.SetDouble(1);
 
    __Dist_Per_Rev_Back_Lower__Entry = NTtable_Tune->GetEntry("Dist_Per_Rev_Back_Lower");
    NTinst.AddListener(__Dist_Per_Rev_Back_Lower__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_Per_Rev_Back_Lower = event.GetValueEventData()->value.GetDouble();});
    __Dist_Per_Rev_Back_Lower__Entry.SetDouble(2.2166);
 
    __Dist_Per_Rev_Back_Upper__Entry = NTtable_Tune->GetEntry("Dist_Per_Rev_Back_Upper");
    NTinst.AddListener(__Dist_Per_Rev_Back_Upper__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_Per_Rev_Back_Upper = event.GetValueEventData()->value.GetDouble();});
    __Dist_Per_Rev_Back_Upper__Entry.SetDouble(2.2166);
 
    __Dist_Per_Rev_Ball_Screw__Entry = NTtable_Tune->GetEntry("Dist_Per_Rev_Ball_Screw");
    NTinst.AddListener(__Dist_Per_Rev_Ball_Screw__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_Per_Rev_Ball_Screw = event.GetValueEventData()->value.GetDouble();});
    __Dist_Per_Rev_Ball_Screw__Entry.SetDouble(0.35278);
 
    __Dist_Per_Rev_Front__Entry = NTtable_Tune->GetEntry("Dist_Per_Rev_Front");
    NTinst.AddListener(__Dist_Per_Rev_Front__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_Per_Rev_Front = event.GetValueEventData()->value.GetDouble();});
    __Dist_Per_Rev_Front__Entry.SetDouble(2.2166);
 
    __Dist_Reset_Value_Back_Lower__Entry = NTtable_Tune->GetEntry("Dist_Reset_Value_Back_Lower");
    NTinst.AddListener(__Dist_Reset_Value_Back_Lower__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_Reset_Value_Back_Lower = event.GetValueEventData()->value.GetDouble();});
    __Dist_Reset_Value_Back_Lower__Entry.SetDouble(79.375);
 
    __Dist_Reset_Value_Back_Upper__Entry = NTtable_Tune->GetEntry("Dist_Reset_Value_Back_Upper");
    NTinst.AddListener(__Dist_Reset_Value_Back_Upper__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_Reset_Value_Back_Upper = event.GetValueEventData()->value.GetDouble();});
    __Dist_Reset_Value_Back_Upper__Entry.SetDouble(19.05);
 
    __Dist_Reset_Value_Ball_Screw__Entry = NTtable_Tune->GetEntry("Dist_Reset_Value_Ball_Screw");
    NTinst.AddListener(__Dist_Reset_Value_Ball_Screw__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_Reset_Value_Ball_Screw = event.GetValueEventData()->value.GetDouble();});
    __Dist_Reset_Value_Ball_Screw__Entry.SetDouble(279.4);
 
    __Dist_Reset_Value_Front__Entry = NTtable_Tune->GetEntry("Dist_Reset_Value_Front");
    NTinst.AddListener(__Dist_Reset_Value_Front__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Dist_Reset_Value_Front = event.GetValueEventData()->value.GetDouble();});
    __Dist_Reset_Value_Front__Entry.SetDouble(6.35);
 
    __Distance_FL_y__Entry = NTtable_Tune->GetEntry("Distance_FL_y");
    NTinst.AddListener(__Distance_FL_y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Distance_FL_y = event.GetValueEventData()->value.GetDouble();});
    __Distance_FL_y__Entry.SetDouble(0.26194);
 
    __Drive_Motor_Control_D__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D");
    NTinst.AddListener(__Drive_Motor_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D__Entry.SetDouble(0.0001);
 
    __Drive_Motor_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_FilterCoeff");
    NTinst.AddListener(__Drive_Motor_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Drive_Motor_Control_D_LL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_LL");
    NTinst.AddListener(__Drive_Motor_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_LL__Entry.SetDouble(-0.2);
 
    __Drive_Motor_Control_D_UL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_UL");
    NTinst.AddListener(__Drive_Motor_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_UL__Entry.SetDouble(0.2);
 
    __Drive_Motor_Control_FF__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_FF");
    NTinst.AddListener(__Drive_Motor_Control_FF__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_FF = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_FF__Entry.SetDouble(0.00018182);
 
    __Drive_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I");
    NTinst.AddListener(__Drive_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I__Entry.SetDouble(0);
 
    __Drive_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I_LL");
    NTinst.AddListener(__Drive_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I_LL__Entry.SetDouble(0);
 
    __Drive_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I_UL");
    NTinst.AddListener(__Drive_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I_UL__Entry.SetDouble(0);
 
    __Drive_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_P");
    NTinst.AddListener(__Drive_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_P__Entry.SetDouble(5e-06);
 
    __Drive_Motor_Control_Sign_Change_Deadband__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_Sign_Change_Deadband");
    NTinst.AddListener(__Drive_Motor_Control_Sign_Change_Deadband__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_Sign_Change_Deadband = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_Sign_Change_Deadband__Entry.SetDouble(7000);
 
    __FloorDistance__Entry = NTtable_Tune->GetEntry("FloorDistance");
    NTinst.AddListener(__FloorDistance__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {FloorDistance = event.GetValueEventData()->value.GetDouble();});
    __FloorDistance__Entry.SetDouble(850);
 
    __Front_AA_Max_Ext__Entry = NTtable_Tune->GetEntry("Front_AA_Max_Ext");
    NTinst.AddListener(__Front_AA_Max_Ext__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Front_AA_Max_Ext = event.GetValueEventData()->value.GetDouble();});
    __Front_AA_Max_Ext__Entry.SetDouble(443);
 
    __Front_AA_Min_Ext__Entry = NTtable_Tune->GetEntry("Front_AA_Min_Ext");
    NTinst.AddListener(__Front_AA_Min_Ext__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Front_AA_Min_Ext = event.GetValueEventData()->value.GetDouble();});
    __Front_AA_Min_Ext__Entry.SetDouble(6.35);
 
    __Gamepad_Stick_Neg_Threshold__Entry = NTtable_Tune->GetEntry("Gamepad_Stick_Neg_Threshold");
    NTinst.AddListener(__Gamepad_Stick_Neg_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gamepad_Stick_Neg_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Gamepad_Stick_Neg_Threshold__Entry.SetDouble(-0.5);
 
    __Gamepad_Stick_Pos_Threshold__Entry = NTtable_Tune->GetEntry("Gamepad_Stick_Pos_Threshold");
    NTinst.AddListener(__Gamepad_Stick_Pos_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gamepad_Stick_Pos_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Gamepad_Stick_Pos_Threshold__Entry.SetDouble(0.5);
 
    __Gyro_Calibration_Reset_Degree__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Reset_Degree");
    NTinst.AddListener(__Gyro_Calibration_Reset_Degree__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Reset_Degree = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Reset_Degree__Entry.SetDouble(0);
 
    __Gyro_Calibration_Reset_Flag__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Reset_Flag");
    NTinst.AddListener(__Gyro_Calibration_Reset_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Reset_Flag = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Reset_Flag__Entry.SetDouble(0);
 
    __KF_Enable__Entry = NTtable_Tune->GetEntry("KF_Enable");
    NTinst.AddListener(__KF_Enable__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {KF_Enable = event.GetValueEventData()->value.GetDouble();});
    __KF_Enable__Entry.SetDouble(1);
 
    __KF_Vision_Ambiguity_Thresh__Entry = NTtable_Tune->GetEntry("KF_Vision_Ambiguity_Thresh");
    NTinst.AddListener(__KF_Vision_Ambiguity_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {KF_Vision_Ambiguity_Thresh = event.GetValueEventData()->value.GetDouble();});
    __KF_Vision_Ambiguity_Thresh__Entry.SetDouble(0.1);
 
    __LoadShooter_Angle__Entry = NTtable_Tune->GetEntry("LoadShooter_Angle");
    NTinst.AddListener(__LoadShooter_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {LoadShooter_Angle = event.GetValueEventData()->value.GetDouble();});
    __LoadShooter_Angle__Entry.SetDouble(35);
 
    __LoadShooter_Gap__Entry = NTtable_Tune->GetEntry("LoadShooter_Gap");
    NTinst.AddListener(__LoadShooter_Gap__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {LoadShooter_Gap = event.GetValueEventData()->value.GetDouble();});
    __LoadShooter_Gap__Entry.SetDouble(280);
 
    __LoadShooter_Height__Entry = NTtable_Tune->GetEntry("LoadShooter_Height");
    NTinst.AddListener(__LoadShooter_Height__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {LoadShooter_Height = event.GetValueEventData()->value.GetDouble();});
    __LoadShooter_Height__Entry.SetDouble(600);
 
    __Note_Detect_Dist_Intake__Entry = NTtable_Tune->GetEntry("Note_Detect_Dist_Intake");
    NTinst.AddListener(__Note_Detect_Dist_Intake__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Note_Detect_Dist_Intake = event.GetValueEventData()->value.GetDouble();});
    __Note_Detect_Dist_Intake__Entry.SetDouble(200);
 
    __Note_Detect_Dist_Shooter__Entry = NTtable_Tune->GetEntry("Note_Detect_Dist_Shooter");
    NTinst.AddListener(__Note_Detect_Dist_Shooter__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Note_Detect_Dist_Shooter = event.GetValueEventData()->value.GetDouble();});
    __Note_Detect_Dist_Shooter__Entry.SetDouble(60);
 
    __Note_Time_Eject__Entry = NTtable_Tune->GetEntry("Note_Time_Eject");
    NTinst.AddListener(__Note_Time_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Note_Time_Eject = event.GetValueEventData()->value.GetDouble();});
    __Note_Time_Eject__Entry.SetDouble(1);
 
    __Note_Time_Speaker_Spin_Up__Entry = NTtable_Tune->GetEntry("Note_Time_Speaker_Spin_Up");
    NTinst.AddListener(__Note_Time_Speaker_Spin_Up__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Note_Time_Speaker_Spin_Up = event.GetValueEventData()->value.GetDouble();});
    __Note_Time_Speaker_Spin_Up__Entry.SetDouble(0.5);
 
    __Note_Time_Transfer__Entry = NTtable_Tune->GetEntry("Note_Time_Transfer");
    NTinst.AddListener(__Note_Time_Transfer__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Note_Time_Transfer = event.GetValueEventData()->value.GetDouble();});
    __Note_Time_Transfer__Entry.SetDouble(0);
 
    __Note_Time_Transfer_Spin_Up__Entry = NTtable_Tune->GetEntry("Note_Time_Transfer_Spin_Up");
    NTinst.AddListener(__Note_Time_Transfer_Spin_Up__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Note_Time_Transfer_Spin_Up = event.GetValueEventData()->value.GetDouble();});
    __Note_Time_Transfer_Spin_Up__Entry.SetDouble(0.5);
 
    __Odometry_IC_X__Entry = NTtable_Tune->GetEntry("Odometry_IC_X");
    NTinst.AddListener(__Odometry_IC_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_IC_X = event.GetValueEventData()->value.GetDouble();});
    __Odometry_IC_X__Entry.SetDouble(0);
 
    __Odometry_IC_Y__Entry = NTtable_Tune->GetEntry("Odometry_IC_Y");
    NTinst.AddListener(__Odometry_IC_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_IC_Y = event.GetValueEventData()->value.GetDouble();});
    __Odometry_IC_Y__Entry.SetDouble(0);
 
    __Odometry_Reset_IC__Entry = NTtable_Tune->GetEntry("Odometry_Reset_IC");
    NTinst.AddListener(__Odometry_Reset_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_Reset_IC = event.GetValueEventData()->value.GetDouble();});
    __Odometry_Reset_IC__Entry.SetDouble(0);
 
    __Odometry_X_Y_TEAR__Entry = NTtable_Tune->GetEntry("Odometry_X_Y_TEAR");
    NTinst.AddListener(__Odometry_X_Y_TEAR__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_X_Y_TEAR = event.GetValueEventData()->value.GetDouble();});
    __Odometry_X_Y_TEAR__Entry.SetDouble(0);
 
    __RL_Back_Amp_to_Stage__Entry = NTtable_Tune->GetEntry("RL_Back_Amp_to_Stage");
    NTinst.AddListener(__RL_Back_Amp_to_Stage__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Amp_to_Stage = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Amp_to_Stage__Entry.SetDouble(10);
 
    __RL_Back_Load_to_Amp__Entry = NTtable_Tune->GetEntry("RL_Back_Load_to_Amp");
    NTinst.AddListener(__RL_Back_Load_to_Amp__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Load_to_Amp = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Load_to_Amp__Entry.SetDouble(10);
 
    __RL_Back_Load_to_Stage__Entry = NTtable_Tune->GetEntry("RL_Back_Load_to_Stage");
    NTinst.AddListener(__RL_Back_Load_to_Stage__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Load_to_Stage = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Load_to_Stage__Entry.SetDouble(4);
 
    __RL_Back_Speaker_Final_to_Speaker_Partial__Entry = NTtable_Tune->GetEntry("RL_Back_Speaker_Final_to_Speaker_Partial");
    NTinst.AddListener(__RL_Back_Speaker_Final_to_Speaker_Partial__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Speaker_Final_to_Speaker_Partial = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Speaker_Final_to_Speaker_Partial__Entry.SetDouble(5);
 
    __RL_Back_Speaker_Partial_to_Speaker_Final__Entry = NTtable_Tune->GetEntry("RL_Back_Speaker_Partial_to_Speaker_Final");
    NTinst.AddListener(__RL_Back_Speaker_Partial_to_Speaker_Final__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Speaker_Partial_to_Speaker_Final = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Speaker_Partial_to_Speaker_Final__Entry.SetDouble(3);
 
    __RL_Back_Speaker_Partial_to_Stage__Entry = NTtable_Tune->GetEntry("RL_Back_Speaker_Partial_to_Stage");
    NTinst.AddListener(__RL_Back_Speaker_Partial_to_Stage__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Speaker_Partial_to_Stage = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Speaker_Partial_to_Stage__Entry.SetDouble(10);
 
    __RL_Back_Stage_to_Amp__Entry = NTtable_Tune->GetEntry("RL_Back_Stage_to_Amp");
    NTinst.AddListener(__RL_Back_Stage_to_Amp__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Stage_to_Amp = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Stage_to_Amp__Entry.SetDouble(6);
 
    __RL_Back_Stage_to_Load__Entry = NTtable_Tune->GetEntry("RL_Back_Stage_to_Load");
    NTinst.AddListener(__RL_Back_Stage_to_Load__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Stage_to_Load = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Stage_to_Load__Entry.SetDouble(7);
 
    __RL_Back_Stage_to_Speaker_Partial__Entry = NTtable_Tune->GetEntry("RL_Back_Stage_to_Speaker_Partial");
    NTinst.AddListener(__RL_Back_Stage_to_Speaker_Partial__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Stage_to_Speaker_Partial = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Stage_to_Speaker_Partial__Entry.SetDouble(6);
 
    __RL_Back_Stage_to_Trap__Entry = NTtable_Tune->GetEntry("RL_Back_Stage_to_Trap");
    NTinst.AddListener(__RL_Back_Stage_to_Trap__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Stage_to_Trap = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Stage_to_Trap__Entry.SetDouble(1);
 
    __RL_Back_Trap_to_Stage__Entry = NTtable_Tune->GetEntry("RL_Back_Trap_to_Stage");
    NTinst.AddListener(__RL_Back_Trap_to_Stage__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_Back_Trap_to_Stage = event.GetValueEventData()->value.GetDouble();});
    __RL_Back_Trap_to_Stage__Entry.SetDouble(1);
 
    __RL_FB_Ratio_Load_Amp__Entry = NTtable_Tune->GetEntry("RL_FB_Ratio_Load_Amp");
    NTinst.AddListener(__RL_FB_Ratio_Load_Amp__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_FB_Ratio_Load_Amp = event.GetValueEventData()->value.GetDouble();});
    __RL_FB_Ratio_Load_Amp__Entry.SetDouble(0.42);
 
    __RL_FB_Ratio_Speaker_Final__Entry = NTtable_Tune->GetEntry("RL_FB_Ratio_Speaker_Final");
    NTinst.AddListener(__RL_FB_Ratio_Speaker_Final__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_FB_Ratio_Speaker_Final = event.GetValueEventData()->value.GetDouble();});
    __RL_FB_Ratio_Speaker_Final__Entry.SetDouble(1.8);
 
    __RL_FB_Ratio_Speaker_Partial__Entry = NTtable_Tune->GetEntry("RL_FB_Ratio_Speaker_Partial");
    NTinst.AddListener(__RL_FB_Ratio_Speaker_Partial__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_FB_Ratio_Speaker_Partial = event.GetValueEventData()->value.GetDouble();});
    __RL_FB_Ratio_Speaker_Partial__Entry.SetDouble(1.33);
 
    __RL_FB_Ratio_Stage_Amp__Entry = NTtable_Tune->GetEntry("RL_FB_Ratio_Stage_Amp");
    NTinst.AddListener(__RL_FB_Ratio_Stage_Amp__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_FB_Ratio_Stage_Amp = event.GetValueEventData()->value.GetDouble();});
    __RL_FB_Ratio_Stage_Amp__Entry.SetDouble(1);
 
    __RL_FB_Ratio_Stage_Load__Entry = NTtable_Tune->GetEntry("RL_FB_Ratio_Stage_Load");
    NTinst.AddListener(__RL_FB_Ratio_Stage_Load__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_FB_Ratio_Stage_Load = event.GetValueEventData()->value.GetDouble();});
    __RL_FB_Ratio_Stage_Load__Entry.SetDouble(1.61);
 
    __RL_FB_Ratio_Stage_Trap__Entry = NTtable_Tune->GetEntry("RL_FB_Ratio_Stage_Trap");
    NTinst.AddListener(__RL_FB_Ratio_Stage_Trap__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {RL_FB_Ratio_Stage_Trap = event.GetValueEventData()->value.GetDouble();});
    __RL_FB_Ratio_Stage_Trap__Entry.SetDouble(1.15);
 
    __Servo_Store_Gain__Entry = NTtable_Tune->GetEntry("Servo_Store_Gain");
    NTinst.AddListener(__Servo_Store_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Servo_Store_Gain = event.GetValueEventData()->value.GetDouble();});
    __Servo_Store_Gain__Entry.SetDouble(0.0071429);
 
    __Servo_Store_Offset__Entry = NTtable_Tune->GetEntry("Servo_Store_Offset");
    NTinst.AddListener(__Servo_Store_Offset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Servo_Store_Offset = event.GetValueEventData()->value.GetDouble();});
    __Servo_Store_Offset__Entry.SetDouble(0.65);
 
    __Servo_Time_Deploy__Entry = NTtable_Tune->GetEntry("Servo_Time_Deploy");
    NTinst.AddListener(__Servo_Time_Deploy__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Servo_Time_Deploy = event.GetValueEventData()->value.GetDouble();});
    __Servo_Time_Deploy__Entry.SetDouble(0.4);
 
    __Servo_Time_Store__Entry = NTtable_Tune->GetEntry("Servo_Time_Store");
    NTinst.AddListener(__Servo_Time_Store__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Servo_Time_Store = event.GetValueEventData()->value.GetDouble();});
    __Servo_Time_Store__Entry.SetDouble(0.5);
 
    __Shooter_DC_Eject__Entry = NTtable_Tune->GetEntry("Shooter_DC_Eject");
    NTinst.AddListener(__Shooter_DC_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Shooter_DC_Eject = event.GetValueEventData()->value.GetDouble();});
    __Shooter_DC_Eject__Entry.SetDouble(0.2);
 
    __Shooter_Motor_Control_FF__Entry = NTtable_Tune->GetEntry("Shooter_Motor_Control_FF");
    NTinst.AddListener(__Shooter_Motor_Control_FF__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Shooter_Motor_Control_FF = event.GetValueEventData()->value.GetDouble();});
    __Shooter_Motor_Control_FF__Entry.SetDouble(0.00025);
 
    __Shooter_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Shooter_Motor_Control_I");
    NTinst.AddListener(__Shooter_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Shooter_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Shooter_Motor_Control_I__Entry.SetDouble(2e-05);
 
    __Shooter_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Shooter_Motor_Control_I_LL");
    NTinst.AddListener(__Shooter_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Shooter_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Shooter_Motor_Control_I_LL__Entry.SetDouble(-0.1);
 
    __Shooter_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Shooter_Motor_Control_I_UL");
    NTinst.AddListener(__Shooter_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Shooter_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Shooter_Motor_Control_I_UL__Entry.SetDouble(0.1);
 
    __Shooter_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Shooter_Motor_Control_P");
    NTinst.AddListener(__Shooter_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Shooter_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Shooter_Motor_Control_P__Entry.SetDouble(0.0001);
 
    __Shooter_Motor_DesSpd_Store__Entry = NTtable_Tune->GetEntry("Shooter_Motor_DesSpd_Store");
    NTinst.AddListener(__Shooter_Motor_DesSpd_Store__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Shooter_Motor_DesSpd_Store = event.GetValueEventData()->value.GetDouble();});
    __Shooter_Motor_DesSpd_Store__Entry.SetDouble(500);
 
    __Shooter_Motor_Speed_Transition__Entry = NTtable_Tune->GetEntry("Shooter_Motor_Speed_Transition");
    NTinst.AddListener(__Shooter_Motor_Speed_Transition__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Shooter_Motor_Speed_Transition = event.GetValueEventData()->value.GetDouble();});
    __Shooter_Motor_Speed_Transition__Entry.SetDouble(2000);
 
    __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry = NTtable_Tune->GetEntry("Spline_Last_Pose_Distance_to_Velocity_Gain");
    NTinst.AddListener(__Spline_Last_Pose_Distance_to_Velocity_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Last_Pose_Distance_to_Velocity_Gain = event.GetValueEventData()->value.GetDouble();});
    __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry.SetDouble(2);
 
    __Spline_Max_Centripital_Acceleration__Entry = NTtable_Tune->GetEntry("Spline_Max_Centripital_Acceleration");
    NTinst.AddListener(__Spline_Max_Centripital_Acceleration__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Max_Centripital_Acceleration = event.GetValueEventData()->value.GetDouble();});
    __Spline_Max_Centripital_Acceleration__Entry.SetDouble(10);
 
    __Spline_Pose_Num_Before_End_Reduce_Speed__Entry = NTtable_Tune->GetEntry("Spline_Pose_Num_Before_End_Reduce_Speed");
    NTinst.AddListener(__Spline_Pose_Num_Before_End_Reduce_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Pose_Num_Before_End_Reduce_Speed = event.GetValueEventData()->value.GetDouble();});
    __Spline_Pose_Num_Before_End_Reduce_Speed__Entry.SetDouble(1);
 
    __Spline_Stop_Radius__Entry = NTtable_Tune->GetEntry("Spline_Stop_Radius");
    NTinst.AddListener(__Spline_Stop_Radius__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Stop_Radius = event.GetValueEventData()->value.GetDouble();});
    __Spline_Stop_Radius__Entry.SetDouble(0.1);
 
    __Spline_Velocity_Multiplier_TEST__Entry = NTtable_Tune->GetEntry("Spline_Velocity_Multiplier_TEST");
    NTinst.AddListener(__Spline_Velocity_Multiplier_TEST__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Velocity_Multiplier_TEST = event.GetValueEventData()->value.GetDouble();});
    __Spline_Velocity_Multiplier_TEST__Entry.SetDouble(1);
 
    __Stage_Angle__Entry = NTtable_Tune->GetEntry("Stage_Angle");
    NTinst.AddListener(__Stage_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Stage_Angle = event.GetValueEventData()->value.GetDouble();});
    __Stage_Angle__Entry.SetDouble(16);
 
    __Stage_Gap__Entry = NTtable_Tune->GetEntry("Stage_Gap");
    NTinst.AddListener(__Stage_Gap__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Stage_Gap = event.GetValueEventData()->value.GetDouble();});
    __Stage_Gap__Entry.SetDouble(241.3);
 
    __Stage_Height__Entry = NTtable_Tune->GetEntry("Stage_Height");
    NTinst.AddListener(__Stage_Height__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Stage_Height = event.GetValueEventData()->value.GetDouble();});
    __Stage_Height__Entry.SetDouble(533.4);
 
    __Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_NonZero_Error_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(0.1);
 
    __Steering_Absolute_Cmd_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Rate_Limit_Dec");
    NTinst.AddListener(__Steering_Absolute_Cmd_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Rate_Limit_Dec__Entry.SetDouble(-1);
 
    __Steering_Absolute_Cmd_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Rate_Limit_Inc");
    NTinst.AddListener(__Steering_Absolute_Cmd_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Rate_Limit_Inc__Entry.SetDouble(1);
 
    __Steering_Heading_Control_D__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D");
    NTinst.AddListener(__Steering_Heading_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D__Entry.SetDouble(0);
 
    __Steering_Heading_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_FilterCoeff");
    NTinst.AddListener(__Steering_Heading_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Steering_Heading_Control_D_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_LL");
    NTinst.AddListener(__Steering_Heading_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_LL__Entry.SetDouble(0);
 
    __Steering_Heading_Control_D_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_UL");
    NTinst.AddListener(__Steering_Heading_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_UL__Entry.SetDouble(0);
 
    __Steering_Heading_Control_Deadzone__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Deadzone");
    NTinst.AddListener(__Steering_Heading_Control_Deadzone__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Deadzone = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Deadzone__Entry.SetDouble(0.1);
 
    __Steering_Heading_Control_I__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I");
    NTinst.AddListener(__Steering_Heading_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I__Entry.SetDouble(0);
 
    __Steering_Heading_Control_I_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I_LL");
    NTinst.AddListener(__Steering_Heading_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I_LL__Entry.SetDouble(-0.1);
 
    __Steering_Heading_Control_I_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I_UL");
    NTinst.AddListener(__Steering_Heading_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I_UL__Entry.SetDouble(0.1);
 
    __Steering_Heading_Control_P__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_P");
    NTinst.AddListener(__Steering_Heading_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_P__Entry.SetDouble(2.5);
 
    __Steering_Heading_Control_Total_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Total_LL");
    NTinst.AddListener(__Steering_Heading_Control_Total_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Total_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Total_LL__Entry.SetDouble(-2.5);
 
    __Steering_Heading_Control_Total_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Total_UL");
    NTinst.AddListener(__Steering_Heading_Control_Total_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Total_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Total_UL__Entry.SetDouble(2.5);
 
    __Steering_Motor_Control_D__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D");
    NTinst.AddListener(__Steering_Motor_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D__Entry.SetDouble(0.5);
 
    __Steering_Motor_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_FilterCoeff");
    NTinst.AddListener(__Steering_Motor_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Steering_Motor_Control_D_LL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_LL");
    NTinst.AddListener(__Steering_Motor_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_LL__Entry.SetDouble(-0.2);
 
    __Steering_Motor_Control_D_UL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_UL");
    NTinst.AddListener(__Steering_Motor_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_UL__Entry.SetDouble(0.2);
 
    __Steering_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I");
    NTinst.AddListener(__Steering_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I__Entry.SetDouble(0.005);
 
    __Steering_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I_LL");
    NTinst.AddListener(__Steering_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I_LL__Entry.SetDouble(-0.005);
 
    __Steering_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I_UL");
    NTinst.AddListener(__Steering_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I_UL__Entry.SetDouble(0.005);
 
    __Steering_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_P");
    NTinst.AddListener(__Steering_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_P__Entry.SetDouble(0.15);
 
    __Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Steering_Relative_Cmd_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_NonZero_Error_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_NonZero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(1);
 
    __Steering_Relative_Cmd_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Rate_Limit_Dec");
    NTinst.AddListener(__Steering_Relative_Cmd_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Rate_Limit_Dec__Entry.SetDouble(-10);
 
    __Steering_Relative_Cmd_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Rate_Limit_Inc");
    NTinst.AddListener(__Steering_Relative_Cmd_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Rate_Limit_Inc__Entry.SetDouble(10);
 
    __Steering_Relative_Gain__Entry = NTtable_Tune->GetEntry("Steering_Relative_Gain");
    NTinst.AddListener(__Steering_Relative_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Gain = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Gain__Entry.SetDouble(5);
 
    __Steering_Twist_Gain__Entry = NTtable_Tune->GetEntry("Steering_Twist_Gain");
    NTinst.AddListener(__Steering_Twist_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Twist_Gain = event.GetValueEventData()->value.GetDouble();});
    __Steering_Twist_Gain__Entry.SetDouble(-0.5);
 
    __TEST_Servo_Down_Flag__Entry = NTtable_Tune->GetEntry("TEST_Servo_Down_Flag");
    NTinst.AddListener(__TEST_Servo_Down_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Servo_Down_Flag = event.GetValueEventData()->value.GetDouble();});
    __TEST_Servo_Down_Flag__Entry.SetDouble(0);
 
    __TEST_Servo_Down_Value__Entry = NTtable_Tune->GetEntry("TEST_Servo_Down_Value");
    NTinst.AddListener(__TEST_Servo_Down_Value__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Servo_Down_Value = event.GetValueEventData()->value.GetDouble();});
    __TEST_Servo_Down_Value__Entry.SetDouble(0.85);
 
    __TEST_Servo_Override_Flag__Entry = NTtable_Tune->GetEntry("TEST_Servo_Override_Flag");
    NTinst.AddListener(__TEST_Servo_Override_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Servo_Override_Flag = event.GetValueEventData()->value.GetDouble();});
    __TEST_Servo_Override_Flag__Entry.SetDouble(0);
 
    __TEST_Servo_Override_Value__Entry = NTtable_Tune->GetEntry("TEST_Servo_Override_Value");
    NTinst.AddListener(__TEST_Servo_Override_Value__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Servo_Override_Value = event.GetValueEventData()->value.GetDouble();});
    __TEST_Servo_Override_Value__Entry.SetDouble(0);
 
    __TEST_Speaker_Angle__Entry = NTtable_Tune->GetEntry("TEST_Speaker_Angle");
    NTinst.AddListener(__TEST_Speaker_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Speaker_Angle = event.GetValueEventData()->value.GetDouble();});
    __TEST_Speaker_Angle__Entry.SetDouble(0);
 
    __TEST_Speaker_Distance__Entry = NTtable_Tune->GetEntry("TEST_Speaker_Distance");
    NTinst.AddListener(__TEST_Speaker_Distance__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Speaker_Distance = event.GetValueEventData()->value.GetDouble();});
    __TEST_Speaker_Distance__Entry.SetDouble(0);
 
    __TEST_Speaker_Gap__Entry = NTtable_Tune->GetEntry("TEST_Speaker_Gap");
    NTinst.AddListener(__TEST_Speaker_Gap__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Speaker_Gap = event.GetValueEventData()->value.GetDouble();});
    __TEST_Speaker_Gap__Entry.SetDouble(0);
 
    __TEST_Speaker_Height__Entry = NTtable_Tune->GetEntry("TEST_Speaker_Height");
    NTinst.AddListener(__TEST_Speaker_Height__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Speaker_Height = event.GetValueEventData()->value.GetDouble();});
    __TEST_Speaker_Height__Entry.SetDouble(0);
 
    __TEST_Swerve_Mode_Override_Flag__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Override_Flag");
    NTinst.AddListener(__TEST_Swerve_Mode_Override_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Override_Flag = event.GetValueEventData()->value.GetDouble();});
    __TEST_Swerve_Mode_Override_Flag__Entry.SetDouble(0);
 
    __Test_DC_Gain_BackLower__Entry = NTtable_Tune->GetEntry("Test_DC_Gain_BackLower");
    NTinst.AddListener(__Test_DC_Gain_BackLower__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Test_DC_Gain_BackLower = event.GetValueEventData()->value.GetDouble();});
    __Test_DC_Gain_BackLower__Entry.SetDouble(0.3);
 
    __Test_DC_Gain_BackUpper__Entry = NTtable_Tune->GetEntry("Test_DC_Gain_BackUpper");
    NTinst.AddListener(__Test_DC_Gain_BackUpper__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Test_DC_Gain_BackUpper = event.GetValueEventData()->value.GetDouble();});
    __Test_DC_Gain_BackUpper__Entry.SetDouble(0.3);
 
    __Test_DC_Gain_BallScrew__Entry = NTtable_Tune->GetEntry("Test_DC_Gain_BallScrew");
    NTinst.AddListener(__Test_DC_Gain_BallScrew__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Test_DC_Gain_BallScrew = event.GetValueEventData()->value.GetDouble();});
    __Test_DC_Gain_BallScrew__Entry.SetDouble(0.2);
 
    __Test_DC_Gain_Front__Entry = NTtable_Tune->GetEntry("Test_DC_Gain_Front");
    NTinst.AddListener(__Test_DC_Gain_Front__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Test_DC_Gain_Front = event.GetValueEventData()->value.GetDouble();});
    __Test_DC_Gain_Front__Entry.SetDouble(0.3);
 
    __Test_DC_Gain_Intake__Entry = NTtable_Tune->GetEntry("Test_DC_Gain_Intake");
    NTinst.AddListener(__Test_DC_Gain_Intake__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Test_DC_Gain_Intake = event.GetValueEventData()->value.GetDouble();});
    __Test_DC_Gain_Intake__Entry.SetDouble(-1);
 
    __Test_DC_Gain_Shooter__Entry = NTtable_Tune->GetEntry("Test_DC_Gain_Shooter");
    NTinst.AddListener(__Test_DC_Gain_Shooter__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Test_DC_Gain_Shooter = event.GetValueEventData()->value.GetDouble();});
    __Test_DC_Gain_Shooter__Entry.SetDouble(1);
 
    __Tol_Angle__Entry = NTtable_Tune->GetEntry("Tol_Angle");
    NTinst.AddListener(__Tol_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Tol_Angle = event.GetValueEventData()->value.GetDouble();});
    __Tol_Angle__Entry.SetDouble(5);
 
    __Tol_Gap__Entry = NTtable_Tune->GetEntry("Tol_Gap");
    NTinst.AddListener(__Tol_Gap__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Tol_Gap = event.GetValueEventData()->value.GetDouble();});
    __Tol_Gap__Entry.SetDouble(12.7);
 
    __Tol_Height__Entry = NTtable_Tune->GetEntry("Tol_Height");
    NTinst.AddListener(__Tol_Height__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Tol_Height = event.GetValueEventData()->value.GetDouble();});
    __Tol_Height__Entry.SetDouble(12.7);
 
    __Translation_Speed_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Translation_Speed_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Translation_Speed_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Translation_Speed_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Translation_Speed_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_NonZero_Error_Thresh");
    NTinst.AddListener(__Translation_Speed_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_NonZero_Error_Thresh__Entry.SetDouble(0.15);
 
    __Translation_Speed_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Translation_Speed_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Translation_Speed_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_NonZero_Final_Scale_Factor__Entry.SetDouble(0.05);
 
    __Translation_Speed_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Translation_Speed_Rate_Limit_Dec");
    NTinst.AddListener(__Translation_Speed_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Rate_Limit_Dec__Entry.SetDouble(-4);
 
    __Translation_Speed_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Translation_Speed_Rate_Limit_Inc");
    NTinst.AddListener(__Translation_Speed_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Rate_Limit_Inc__Entry.SetDouble(4);
 
    __Translation_Twist_Gain__Entry = NTtable_Tune->GetEntry("Translation_Twist_Gain");
    NTinst.AddListener(__Translation_Twist_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Twist_Gain = event.GetValueEventData()->value.GetDouble();});
    __Translation_Twist_Gain__Entry.SetDouble(0.5);
 
    __Trap_Angle__Entry = NTtable_Tune->GetEntry("Trap_Angle");
    NTinst.AddListener(__Trap_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Trap_Angle = event.GetValueEventData()->value.GetDouble();});
    __Trap_Angle__Entry.SetDouble(30);
 
    __Trap_Gap__Entry = NTtable_Tune->GetEntry("Trap_Gap");
    NTinst.AddListener(__Trap_Gap__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Trap_Gap = event.GetValueEventData()->value.GetDouble();});
    __Trap_Gap__Entry.SetDouble(460);
 
    __Trap_Height__Entry = NTtable_Tune->GetEntry("Trap_Height");
    NTinst.AddListener(__Trap_Height__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Trap_Height = event.GetValueEventData()->value.GetDouble();});
    __Trap_Height__Entry.SetDouble(845);
 
    __Twist_Deadzone_neg__Entry = NTtable_Tune->GetEntry("Twist_Deadzone_neg");
    NTinst.AddListener(__Twist_Deadzone_neg__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Twist_Deadzone_neg = event.GetValueEventData()->value.GetDouble();});
    __Twist_Deadzone_neg__Entry.SetDouble(-0.01);
 
    __Twist_Deadzone_pos__Entry = NTtable_Tune->GetEntry("Twist_Deadzone_pos");
    NTinst.AddListener(__Twist_Deadzone_pos__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Twist_Deadzone_pos = event.GetValueEventData()->value.GetDouble();});
    __Twist_Deadzone_pos__Entry.SetDouble(0.01);
 
// Inports
    __AT_Tag_11_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_11_Found");
    __AT_Tag_12_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_12_Found");
    __AT_Tag_13_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_13_Found");
    __AT_Tag_14_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_14_Found");
    __AT_Tag_15_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_15_Found");
    __AT_Tag_16_Found__Entry = NTtable_Inport->GetEntry("AT_Tag_16_Found");
    __BackLeft_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("BackLeft_Drive_Motor_Rev");
    __BackLeft_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("BackLeft_Drive_Motor_Speed");
    __BackLeft_Steer_Rev__Entry = NTtable_Inport->GetEntry("BackLeft_Steer_Rev");
    __BackLeft_Turn_Offset__Entry = NTtable_Inport->GetEntry("BackLeft_Turn_Offset");
    __BackRight_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("BackRight_Drive_Motor_Rev");
    __BackRight_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("BackRight_Drive_Motor_Speed");
    __BackRight_Steer_Rev__Entry = NTtable_Inport->GetEntry("BackRight_Steer_Rev");
    __BackRight_Turn_Offset__Entry = NTtable_Inport->GetEntry("BackRight_Turn_Offset");
    __Encoder_Revs_Back_Lower__Entry = NTtable_Inport->GetEntry("Encoder_Revs_Back_Lower");
    __Encoder_Revs_Back_Upper__Entry = NTtable_Inport->GetEntry("Encoder_Revs_Back_Upper");
    __Encoder_Revs_Ball_Screw__Entry = NTtable_Inport->GetEntry("Encoder_Revs_Ball_Screw");
    __Encoder_Revs_Front__Entry = NTtable_Inport->GetEntry("Encoder_Revs_Front");
    __FrontLeft_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("FrontLeft_Drive_Motor_Rev");
    __FrontLeft_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("FrontLeft_Drive_Motor_Speed");
    __FrontLeft_Steer_Rev__Entry = NTtable_Inport->GetEntry("FrontLeft_Steer_Rev");
    __FrontLeft_Turn_Offset__Entry = NTtable_Inport->GetEntry("FrontLeft_Turn_Offset");
    __FrontRight_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("FrontRight_Drive_Motor_Rev");
    __FrontRight_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("FrontRight_Drive_Motor_Speed");
    __FrontRight_Steer_Rev__Entry = NTtable_Inport->GetEntry("FrontRight_Steer_Rev");
    __FrontRight_Turn_Offset__Entry = NTtable_Inport->GetEntry("FrontRight_Turn_Offset");
    __GameState__Entry = NTtable_Inport->GetEntry("GameState");
    __Gamepad_B1_A__Entry = NTtable_Inport->GetEntry("Gamepad_B1_A");
    __Gamepad_B2_B__Entry = NTtable_Inport->GetEntry("Gamepad_B2_B");
    __Gamepad_B3_X__Entry = NTtable_Inport->GetEntry("Gamepad_B3_X");
    __Gamepad_B4_Y__Entry = NTtable_Inport->GetEntry("Gamepad_B4_Y");
    __Gamepad_Back__Entry = NTtable_Inport->GetEntry("Gamepad_Back");
    __Gamepad_LB__Entry = NTtable_Inport->GetEntry("Gamepad_LB");
    __Gamepad_LT__Entry = NTtable_Inport->GetEntry("Gamepad_LT");
    __Gamepad_RB__Entry = NTtable_Inport->GetEntry("Gamepad_RB");
    __Gamepad_RT__Entry = NTtable_Inport->GetEntry("Gamepad_RT");
    __Gamepad_Start__Entry = NTtable_Inport->GetEntry("Gamepad_Start");
    __Gamepad_Stick_Left_X__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Left_X");
    __Gamepad_Stick_Left_Y__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Left_Y");
    __Gamepad_Stick_Right_X__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Right_X");
    __Gamepad_Stick_Right_Y__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Right_Y");
    __Gyro_Angle__Entry = NTtable_Inport->GetEntry("Gyro_Angle");
    __Intake_TOF_Dist__Entry = NTtable_Inport->GetEntry("Intake_TOF_Dist");
    __IsBlueAlliance__Entry = NTtable_Inport->GetEntry("IsBlueAlliance");
    __Is_Absolute_Steering__Entry = NTtable_Inport->GetEntry("Is_Absolute_Steering");
    __Is_Absolute_Translation__Entry = NTtable_Inport->GetEntry("Is_Absolute_Translation");
    __Joystick_Left_B1__Entry = NTtable_Inport->GetEntry("Joystick_Left_B1");
    __Joystick_Left_B10__Entry = NTtable_Inport->GetEntry("Joystick_Left_B10");
    __Joystick_Left_B11__Entry = NTtable_Inport->GetEntry("Joystick_Left_B11");
    __Joystick_Left_B12__Entry = NTtable_Inport->GetEntry("Joystick_Left_B12");
    __Joystick_Left_B13__Entry = NTtable_Inport->GetEntry("Joystick_Left_B13");
    __Joystick_Left_B14__Entry = NTtable_Inport->GetEntry("Joystick_Left_B14");
    __Joystick_Left_B15__Entry = NTtable_Inport->GetEntry("Joystick_Left_B15");
    __Joystick_Left_B16__Entry = NTtable_Inport->GetEntry("Joystick_Left_B16");
    __Joystick_Left_B2__Entry = NTtable_Inport->GetEntry("Joystick_Left_B2");
    __Joystick_Left_B3__Entry = NTtable_Inport->GetEntry("Joystick_Left_B3");
    __Joystick_Left_B4__Entry = NTtable_Inport->GetEntry("Joystick_Left_B4");
    __Joystick_Left_B5__Entry = NTtable_Inport->GetEntry("Joystick_Left_B5");
    __Joystick_Left_B6__Entry = NTtable_Inport->GetEntry("Joystick_Left_B6");
    __Joystick_Left_B7__Entry = NTtable_Inport->GetEntry("Joystick_Left_B7");
    __Joystick_Left_B8__Entry = NTtable_Inport->GetEntry("Joystick_Left_B8");
    __Joystick_Left_B9__Entry = NTtable_Inport->GetEntry("Joystick_Left_B9");
    __Joystick_Left_POV__Entry = NTtable_Inport->GetEntry("Joystick_Left_POV");
    __Joystick_Left_X__Entry = NTtable_Inport->GetEntry("Joystick_Left_X");
    __Joystick_Left_Y__Entry = NTtable_Inport->GetEntry("Joystick_Left_Y");
    __Joystick_Left_Z__Entry = NTtable_Inport->GetEntry("Joystick_Left_Z");
    __Joystick_Right_B1__Entry = NTtable_Inport->GetEntry("Joystick_Right_B1");
    __Joystick_Right_B10__Entry = NTtable_Inport->GetEntry("Joystick_Right_B10");
    __Joystick_Right_B11__Entry = NTtable_Inport->GetEntry("Joystick_Right_B11");
    __Joystick_Right_B12__Entry = NTtable_Inport->GetEntry("Joystick_Right_B12");
    __Joystick_Right_B13__Entry = NTtable_Inport->GetEntry("Joystick_Right_B13");
    __Joystick_Right_B14__Entry = NTtable_Inport->GetEntry("Joystick_Right_B14");
    __Joystick_Right_B15__Entry = NTtable_Inport->GetEntry("Joystick_Right_B15");
    __Joystick_Right_B16__Entry = NTtable_Inport->GetEntry("Joystick_Right_B16");
    __Joystick_Right_B2__Entry = NTtable_Inport->GetEntry("Joystick_Right_B2");
    __Joystick_Right_B3__Entry = NTtable_Inport->GetEntry("Joystick_Right_B3");
    __Joystick_Right_B4__Entry = NTtable_Inport->GetEntry("Joystick_Right_B4");
    __Joystick_Right_B5__Entry = NTtable_Inport->GetEntry("Joystick_Right_B5");
    __Joystick_Right_B6__Entry = NTtable_Inport->GetEntry("Joystick_Right_B6");
    __Joystick_Right_B7__Entry = NTtable_Inport->GetEntry("Joystick_Right_B7");
    __Joystick_Right_B8__Entry = NTtable_Inport->GetEntry("Joystick_Right_B8");
    __Joystick_Right_B9__Entry = NTtable_Inport->GetEntry("Joystick_Right_B9");
    __Joystick_Right_POV__Entry = NTtable_Inport->GetEntry("Joystick_Right_POV");
    __Joystick_Right_X__Entry = NTtable_Inport->GetEntry("Joystick_Right_X");
    __Joystick_Right_Y__Entry = NTtable_Inport->GetEntry("Joystick_Right_Y");
    __Joystick_Right_Z__Entry = NTtable_Inport->GetEntry("Joystick_Right_Z");
    __Line_Sensor_TOF_Range__Entry = NTtable_Inport->GetEntry("Line_Sensor_TOF_Range");
    __Photon_Est_Pose_Ambiguity__Entry = NTtable_Inport->GetEntry("Photon_Est_Pose_Ambiguity");
    __Photon_Est_Pose_X__Entry = NTtable_Inport->GetEntry("Photon_Est_Pose_X");
    __Photon_Est_Pose_Y__Entry = NTtable_Inport->GetEntry("Photon_Est_Pose_Y");
    __Shooter_Left_Motor_RPM__Entry = NTtable_Inport->GetEntry("Shooter_Left_Motor_RPM");
    __Shooter_Right_Motor_RPM__Entry = NTtable_Inport->GetEntry("Shooter_Right_Motor_RPM");
    __Shooter_TOF_Dist__Entry = NTtable_Inport->GetEntry("Shooter_TOF_Dist");
 
// Outports
    __BackLeft_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("BackLeft_Drive_DutyCycle");
    __BackLeft_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("BackLeft_Steer_DutyCycle");
    __BackRight_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("BackRight_Drive_DutyCycle");
    __BackRight_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("BackRight_Steer_DutyCycle");
    __Back_Lower_Arm_DutyCycle__Entry = NTtable_Outport->GetEntry("Back_Lower_Arm_DutyCycle");
    __Back_Upper_Arm_DutyCycle__Entry = NTtable_Outport->GetEntry("Back_Upper_Arm_DutyCycle");
    __Ball_Screw_Arm_DutyCycle__Entry = NTtable_Outport->GetEntry("Ball_Screw_Arm_DutyCycle");
    __Climber_DutyCycle__Entry = NTtable_Outport->GetEntry("Climber_DutyCycle");
    __Disable_Wheels__Entry = NTtable_Outport->GetEntry("Disable_Wheels");
    __Enable_Wheels__Entry = NTtable_Outport->GetEntry("Enable_Wheels");
    __FrontLeft_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontLeft_Drive_DutyCycle");
    __FrontLeft_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontLeft_Steer_DutyCycle");
    __FrontRight_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontRight_Drive_DutyCycle");
    __FrontRight_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontRight_Steer_DutyCycle");
    __Front_Arm_DutyCycle__Entry = NTtable_Outport->GetEntry("Front_Arm_DutyCycle");
    __Intake_Motor_DutyCycle__Entry = NTtable_Outport->GetEntry("Intake_Motor_DutyCycle");
    __Reset_Ballscrew_Zero__Entry = NTtable_Outport->GetEntry("Reset_Ballscrew_Zero");
    __Reset_Wheel_Offsets__Entry = NTtable_Outport->GetEntry("Reset_Wheel_Offsets");
    __Save_Ballscrew_Position__Entry = NTtable_Outport->GetEntry("Save_Ballscrew_Position");
    __Shooter_Brake_Enable__Entry = NTtable_Outport->GetEntry("Shooter_Brake_Enable");
    __Shooter_Left_Motor_DutyCycle__Entry = NTtable_Outport->GetEntry("Shooter_Left_Motor_DutyCycle");
    __Shooter_Right_Motor_DutyCycle__Entry = NTtable_Outport->GetEntry("Shooter_Right_Motor_DutyCycle");
    __Shooter_Servo_Position__Entry = NTtable_Outport->GetEntry("Shooter_Servo_Position");
    __Swerve_Motors_Disabled__Entry = NTtable_Outport->GetEntry("Swerve_Motors_Disabled");
 
// Test Points
    __AT_Error_X__Entry = NTtable_TPoint->GetEntry("AT_Error_X");
    __AT_Error_Y__Entry = NTtable_TPoint->GetEntry("AT_Error_Y");
    __AT_Target_Angle__Entry = NTtable_TPoint->GetEntry("AT_Target_Angle");
    __Active_GameState__Entry = NTtable_TPoint->GetEntry("Active_GameState");
    __Align_Amp__Entry = NTtable_TPoint->GetEntry("Align_Amp");
    __Align_Speaker__Entry = NTtable_TPoint->GetEntry("Align_Speaker");
    __ArmStateRequest__Entry = NTtable_TPoint->GetEntry("ArmStateRequest");
    __AutoState__Entry = NTtable_TPoint->GetEntry("AutoState");
    __BL_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("BL_Desired_Module_Angle");
    __BL_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("BL_Desired_Wheel_Speed");
    __BL_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("BL_Desired_Wheel_Speed_in");
    __BL_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("BL_Steer_Module_Angle");
    __BR_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("BR_Desired_Module_Angle");
    __BR_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("BR_Desired_Wheel_Speed");
    __BR_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("BR_Desired_Wheel_Speed_in");
    __BR_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("BR_Steer_Module_Angle");
    __Back_Lower_Arm_Length__Entry = NTtable_TPoint->GetEntry("Back_Lower_Arm_Length");
    __Back_Upper_Arm_Length__Entry = NTtable_TPoint->GetEntry("Back_Upper_Arm_Length");
    __Ball_Screw_Arm_Length__Entry = NTtable_TPoint->GetEntry("Ball_Screw_Arm_Length");
    __Climber_Cmd_Direction__Entry = NTtable_TPoint->GetEntry("Climber_Cmd_Direction");
    __CurrentPriorityIndex__Entry = NTtable_TPoint->GetEntry("CurrentPriorityIndex");
    __Desired_Angle__Entry = NTtable_TPoint->GetEntry("Desired_Angle");
    __Desired_BS_Length__Entry = NTtable_TPoint->GetEntry("Desired_BS_Length");
    __Desired_Back_AA_Length__Entry = NTtable_TPoint->GetEntry("Desired_Back_AA_Length");
    __Desired_Back_Lower_Dist__Entry = NTtable_TPoint->GetEntry("Desired_Back_Lower_Dist");
    __Desired_Back_Upper_Dist__Entry = NTtable_TPoint->GetEntry("Desired_Back_Upper_Dist");
    __Desired_Ball_Screw_Dist__Entry = NTtable_TPoint->GetEntry("Desired_Ball_Screw_Dist");
    __Desired_Front_AA_Length__Entry = NTtable_TPoint->GetEntry("Desired_Front_AA_Length");
    __Desired_Front_Dist__Entry = NTtable_TPoint->GetEntry("Desired_Front_Dist");
    __Desired_Gap__Entry = NTtable_TPoint->GetEntry("Desired_Gap");
    __Desired_Height__Entry = NTtable_TPoint->GetEntry("Desired_Height");
    __Drive_Joystick_X__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_X");
    __Drive_Joystick_Y__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Y");
    __Drive_Joystick_Z__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Z");
    __Drive_Joystick_Z_Mode__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Z_Mode");
    __FL_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("FL_Desired_Module_Angle");
    __FL_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("FL_Desired_Wheel_Speed");
    __FL_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("FL_Desired_Wheel_Speed_in");
    __FL_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("FL_Steer_Module_Angle");
    __FR_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("FR_Desired_Module_Angle");
    __FR_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("FR_Desired_Wheel_Speed");
    __FR_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("FR_Desired_Wheel_Speed_in");
    __FR_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("FR_Steer_Module_Angle");
    __Face_Away_Driver__Entry = NTtable_TPoint->GetEntry("Face_Away_Driver");
    __Face_Left_Driver__Entry = NTtable_TPoint->GetEntry("Face_Left_Driver");
    __Face_Right_Driver__Entry = NTtable_TPoint->GetEntry("Face_Right_Driver");
    __Face_Toward_Driver__Entry = NTtable_TPoint->GetEntry("Face_Toward_Driver");
    __Front_Arm_Length__Entry = NTtable_TPoint->GetEntry("Front_Arm_Length");
    __Gyro_Angle_Calibrated_deg__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_Calibrated_deg");
    __Gyro_Angle_Field_rad__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_Field_rad");
    __Gyro_Angle_SPF__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_SPF");
    __Gyro_Angle_rad__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_rad");
    __Intake_Motor_DC__Entry = NTtable_TPoint->GetEntry("Intake_Motor_DC");
    __Intake_Shooter_State_Request__Entry = NTtable_TPoint->GetEntry("Intake_Shooter_State_Request");
    __Is_Absolute_Steering_SPF__Entry = NTtable_TPoint->GetEntry("Is_Absolute_Steering_SPF");
    __Is_Absolute_Translation_SPF__Entry = NTtable_TPoint->GetEntry("Is_Absolute_Translation_SPF");
    __Is_All_Arms_Cal_Position__Entry = NTtable_TPoint->GetEntry("Is_All_Arms_Cal_Position");
    __Is_Boosting__Entry = NTtable_TPoint->GetEntry("Is_Boosting");
    __KF_Position_X__Entry = NTtable_TPoint->GetEntry("KF_Position_X");
    __KF_Position_Y__Entry = NTtable_TPoint->GetEntry("KF_Position_Y");
    __Line_Sensor_Boolean__Entry = NTtable_TPoint->GetEntry("Line_Sensor_Boolean");
    __Meas_Angle__Entry = NTtable_TPoint->GetEntry("Meas_Angle");
    __Meas_Back_AA_Length__Entry = NTtable_TPoint->GetEntry("Meas_Back_AA_Length");
    __Meas_Front_AA_Length__Entry = NTtable_TPoint->GetEntry("Meas_Front_AA_Length");
    __Meas_Gap__Entry = NTtable_TPoint->GetEntry("Meas_Gap");
    __Meas_Height__Entry = NTtable_TPoint->GetEntry("Meas_Height");
    __Note_State_ID__Entry = NTtable_TPoint->GetEntry("Note_State_ID");
    __Odom_Position_X__Entry = NTtable_TPoint->GetEntry("Odom_Position_X");
    __Odom_Position_Y__Entry = NTtable_TPoint->GetEntry("Odom_Position_Y");
    __Odometry_X_global_TEAR_ft__Entry = NTtable_TPoint->GetEntry("Odometry_X_global_TEAR_ft");
    __Odometry_X_global_est_ft__Entry = NTtable_TPoint->GetEntry("Odometry_X_global_est_ft");
    __Odometry_Y_global_TEAR_ft__Entry = NTtable_TPoint->GetEntry("Odometry_Y_global_TEAR_ft");
    __Odometry_Y_global_est_ft__Entry = NTtable_TPoint->GetEntry("Odometry_Y_global_est_ft");
    __RL_Back__Entry = NTtable_TPoint->GetEntry("RL_Back");
    __RL_FB_Ratio__Entry = NTtable_TPoint->GetEntry("RL_FB_Ratio");
    __RelativeMoveForward__Entry = NTtable_TPoint->GetEntry("RelativeMoveForward");
    __Robot_Reached_Destination__Entry = NTtable_TPoint->GetEntry("Robot_Reached_Destination");
    __Shooter_Brake_Enable_out__Entry = NTtable_TPoint->GetEntry("Shooter_Brake_Enable_out");
    __Shooter_Motor_DC_Left__Entry = NTtable_TPoint->GetEntry("Shooter_Motor_DC_Left");
    __Shooter_Motor_DC_Right__Entry = NTtable_TPoint->GetEntry("Shooter_Motor_DC_Right");
    __Shooter_Motor_Speed_Control_Ena__Entry = NTtable_TPoint->GetEntry("Shooter_Motor_Speed_Control_Ena");
    __Shooter_Motor_Speed_Left__Entry = NTtable_TPoint->GetEntry("Shooter_Motor_Speed_Left");
    __Shooter_Motor_Speed_Right__Entry = NTtable_TPoint->GetEntry("Shooter_Motor_Speed_Right");
    __Shooter_Pos_State__Entry = NTtable_TPoint->GetEntry("Shooter_Pos_State");
    __Shooter_Servo__Entry = NTtable_TPoint->GetEntry("Shooter_Servo");
    __Speaker_Angle__Entry = NTtable_TPoint->GetEntry("Speaker_Angle");
    __Speaker_Distance__Entry = NTtable_TPoint->GetEntry("Speaker_Distance");
    __SplineEnable__Entry = NTtable_TPoint->GetEntry("SplineEnable");
    __Spline_Enable__Entry = NTtable_TPoint->GetEntry("Spline_Enable");
    __Spline_Follow_Index__Entry = NTtable_TPoint->GetEntry("Spline_Follow_Index");
    __Spline_ID__Entry = NTtable_TPoint->GetEntry("Spline_ID");
    __Spline_Num_Poses__Entry = NTtable_TPoint->GetEntry("Spline_Num_Poses");
    __Spline_Out_Of_Bounds__Entry = NTtable_TPoint->GetEntry("Spline_Out_Of_Bounds");
    __Spline_Target_X__Entry = NTtable_TPoint->GetEntry("Spline_Target_X");
    __Spline_Target_Y__Entry = NTtable_TPoint->GetEntry("Spline_Target_Y");
    __State_Request_Arm__Entry = NTtable_TPoint->GetEntry("State_Request_Arm");
    __State_Request_Arm_d__Entry = NTtable_TPoint->GetEntry("State_Request_Arm_d");
    __State_Request_Intake_Shooter__Entry = NTtable_TPoint->GetEntry("State_Request_Intake_Shooter");
    __State_Request_Intake_Shooter_h__Entry = NTtable_TPoint->GetEntry("State_Request_Intake_Shooter_h");
    __Steer_Joystick_X__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_X");
    __Steer_Joystick_Y__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_Y");
    __Steer_Joystick_Z__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_Z");
    __Steering_Abs_Angle__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Angle");
    __Steering_Abs_Angle_Active__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Angle_Active");
    __Steering_Abs_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Cmd");
    __Steering_Abs_Cmd_SPF__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Cmd_SPF");
    __Steering_Abs_Gyro__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Gyro");
    __Steering_Abs_Gyro_Latch__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Gyro_Latch");
    __Steering_Localized_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Localized_Cmd");
    __Steering_Localized_PID__Entry = NTtable_TPoint->GetEntry("Steering_Localized_PID");
    __Steering_Rel_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Rel_Cmd");
    __Steering_Rel_Cmd_SPF__Entry = NTtable_TPoint->GetEntry("Steering_Rel_Cmd_SPF");
    __Test_Mode__Entry = NTtable_TPoint->GetEntry("Test_Mode");
    __Translation_Angle__Entry = NTtable_TPoint->GetEntry("Translation_Angle");
    __Translation_Angle_SPF__Entry = NTtable_TPoint->GetEntry("Translation_Angle_SPF");
    __Translation_Speed__Entry = NTtable_TPoint->GetEntry("Translation_Speed");
    __Translation_Speed_RL__Entry = NTtable_TPoint->GetEntry("Translation_Speed_RL");
    __Translation_Speed_SPF__Entry = NTtable_TPoint->GetEntry("Translation_Speed_SPF");
    __Translation_Steering_Cmd__Entry = NTtable_TPoint->GetEntry("Translation_Steering_Cmd");
    __WhileIterator__Entry = NTtable_TPoint->GetEntry("WhileIterator");
    __previous_call_was_for_speaker__Entry = NTtable_TPoint->GetEntry("previous_call_was_for_speaker");
}
 
void SimulinkSmartDashboardInterface::PreStepCallback() {}
 
void SimulinkSmartDashboardInterface::PostStepCallback() {}
 
void SimulinkSmartDashboardInterface::SmartDashboardCallback()
{
    // Inports
    __AT_Tag_11_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_11_Found);
    __AT_Tag_12_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_12_Found);
    __AT_Tag_13_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_13_Found);
    __AT_Tag_14_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_14_Found);
    __AT_Tag_15_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_15_Found);
    __AT_Tag_16_Found__Entry.SetDouble(Code_Gen_Model_U.AT_Tag_16_Found);
    __BackLeft_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Drive_Motor_Rev);
    __BackLeft_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed);
    __BackLeft_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Steer_Rev);
    __BackLeft_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Turn_Offset);
    __BackRight_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.BackRight_Drive_Motor_Rev);
    __BackRight_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.BackRight_Drive_Motor_Speed);
    __BackRight_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.BackRight_Steer_Rev);
    __BackRight_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.BackRight_Turn_Offset);
    __Encoder_Revs_Back_Lower__Entry.SetDouble(Code_Gen_Model_U.Encoder_Revs_Back_Lower);
    __Encoder_Revs_Back_Upper__Entry.SetDouble(Code_Gen_Model_U.Encoder_Revs_Back_Upper);
    __Encoder_Revs_Ball_Screw__Entry.SetDouble(Code_Gen_Model_U.Encoder_Revs_Ball_Screw);
    __Encoder_Revs_Front__Entry.SetDouble(Code_Gen_Model_U.Encoder_Revs_Front);
    __FrontLeft_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev);
    __FrontLeft_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed);
    __FrontLeft_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Steer_Rev);
    __FrontLeft_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Turn_Offset);
    __FrontRight_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Drive_Motor_Rev);
    __FrontRight_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed);
    __FrontRight_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Steer_Rev);
    __FrontRight_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Turn_Offset);
    __GameState__Entry.SetDouble(Code_Gen_Model_U.GameState);
    __Gamepad_B1_A__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B1_A);
    __Gamepad_B2_B__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B2_B);
    __Gamepad_B3_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B3_X);
    __Gamepad_B4_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B4_Y);
    __Gamepad_Back__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Back);
    __Gamepad_LB__Entry.SetDouble(Code_Gen_Model_U.Gamepad_LB);
    __Gamepad_LT__Entry.SetDouble(Code_Gen_Model_U.Gamepad_LT);
    __Gamepad_RB__Entry.SetDouble(Code_Gen_Model_U.Gamepad_RB);
    __Gamepad_RT__Entry.SetDouble(Code_Gen_Model_U.Gamepad_RT);
    __Gamepad_Start__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Start);
    __Gamepad_Stick_Left_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Left_X);
    __Gamepad_Stick_Left_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Left_Y);
    __Gamepad_Stick_Right_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Right_X);
    __Gamepad_Stick_Right_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Right_Y);
    __Gyro_Angle__Entry.SetDouble(Code_Gen_Model_U.Gyro_Angle);
    __Intake_TOF_Dist__Entry.SetDouble(Code_Gen_Model_U.Intake_TOF_Dist);
    __IsBlueAlliance__Entry.SetDouble(Code_Gen_Model_U.IsBlueAlliance);
    __Is_Absolute_Steering__Entry.SetDouble(Code_Gen_Model_U.Is_Absolute_Steering);
    __Is_Absolute_Translation__Entry.SetDouble(Code_Gen_Model_U.Is_Absolute_Translation);
    __Joystick_Left_B1__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B1);
    __Joystick_Left_B10__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B10);
    __Joystick_Left_B11__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B11);
    __Joystick_Left_B12__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B12);
    __Joystick_Left_B13__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B13);
    __Joystick_Left_B14__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B14);
    __Joystick_Left_B15__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B15);
    __Joystick_Left_B16__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B16);
    __Joystick_Left_B2__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B2);
    __Joystick_Left_B3__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B3);
    __Joystick_Left_B4__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B4);
    __Joystick_Left_B5__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B5);
    __Joystick_Left_B6__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B6);
    __Joystick_Left_B7__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B7);
    __Joystick_Left_B8__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B8);
    __Joystick_Left_B9__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B9);
    __Joystick_Left_POV__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_POV);
    __Joystick_Left_X__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_X);
    __Joystick_Left_Y__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_Y);
    __Joystick_Left_Z__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_Z);
    __Joystick_Right_B1__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B1);
    __Joystick_Right_B10__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B10);
    __Joystick_Right_B11__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B11);
    __Joystick_Right_B12__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B12);
    __Joystick_Right_B13__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B13);
    __Joystick_Right_B14__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B14);
    __Joystick_Right_B15__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B15);
    __Joystick_Right_B16__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B16);
    __Joystick_Right_B2__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B2);
    __Joystick_Right_B3__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B3);
    __Joystick_Right_B4__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B4);
    __Joystick_Right_B5__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B5);
    __Joystick_Right_B6__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B6);
    __Joystick_Right_B7__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B7);
    __Joystick_Right_B8__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B8);
    __Joystick_Right_B9__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B9);
    __Joystick_Right_POV__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_POV);
    __Joystick_Right_X__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_X);
    __Joystick_Right_Y__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_Y);
    __Joystick_Right_Z__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_Z);
    __Line_Sensor_TOF_Range__Entry.SetDouble(Code_Gen_Model_U.Line_Sensor_TOF_Range);
    __Photon_Est_Pose_Ambiguity__Entry.SetDouble(Code_Gen_Model_U.Photon_Est_Pose_Ambiguity);
    __Photon_Est_Pose_X__Entry.SetDouble(Code_Gen_Model_U.Photon_Est_Pose_X);
    __Photon_Est_Pose_Y__Entry.SetDouble(Code_Gen_Model_U.Photon_Est_Pose_Y);
    __Shooter_Left_Motor_RPM__Entry.SetDouble(Code_Gen_Model_U.Shooter_Left_Motor_RPM);
    __Shooter_Right_Motor_RPM__Entry.SetDouble(Code_Gen_Model_U.Shooter_Right_Motor_RPM);
    __Shooter_TOF_Dist__Entry.SetDouble(Code_Gen_Model_U.Shooter_TOF_Dist);
    // Outports
    __BackLeft_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackLeft_Drive_DutyCycle);
    __BackLeft_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackLeft_Steer_DutyCycle);
    __BackRight_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackRight_Drive_DutyCycle);
    __BackRight_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackRight_Steer_DutyCycle);
    __Back_Lower_Arm_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle);
    __Back_Upper_Arm_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle);
    __Ball_Screw_Arm_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle);
    __Climber_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Climber_DutyCycle);
    __Disable_Wheels__Entry.SetDouble(Code_Gen_Model_Y.Disable_Wheels);
    __Enable_Wheels__Entry.SetDouble(Code_Gen_Model_Y.Enable_Wheels);
    __FrontLeft_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle);
    __FrontLeft_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle);
    __FrontRight_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontRight_Drive_DutyCycle);
    __FrontRight_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontRight_Steer_DutyCycle);
    __Front_Arm_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Front_Arm_DutyCycle);
    __Intake_Motor_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Intake_Motor_DutyCycle);
    __Reset_Ballscrew_Zero__Entry.SetDouble(Code_Gen_Model_Y.Reset_Ballscrew_Zero);
    __Reset_Wheel_Offsets__Entry.SetDouble(Code_Gen_Model_Y.Reset_Wheel_Offsets);
    __Save_Ballscrew_Position__Entry.SetDouble(Code_Gen_Model_Y.Save_Ballscrew_Position);
    __Shooter_Brake_Enable__Entry.SetDouble(Code_Gen_Model_Y.Shooter_Brake_Enable);
    __Shooter_Left_Motor_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle);
    __Shooter_Right_Motor_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle);
    __Shooter_Servo_Position__Entry.SetDouble(Code_Gen_Model_Y.Shooter_Servo_Position);
    __Swerve_Motors_Disabled__Entry.SetDouble(Code_Gen_Model_Y.Swerve_Motors_Disabled);
    // Test Points
    __AT_Error_X__Entry.SetDouble(Code_Gen_Model_B.AT_Error_X);
    __AT_Error_Y__Entry.SetDouble(Code_Gen_Model_B.AT_Error_Y);
    __AT_Target_Angle__Entry.SetDouble(Code_Gen_Model_B.AT_Target_Angle);
    __Active_GameState__Entry.SetDouble(Code_Gen_Model_B.Active_GameState);
    __Align_Amp__Entry.SetDouble(Code_Gen_Model_B.Align_Amp);
    __Align_Speaker__Entry.SetDouble(Code_Gen_Model_B.Align_Speaker);
    __ArmStateRequest__Entry.SetDouble(Code_Gen_Model_B.ArmStateRequest);
    __AutoState__Entry.SetDouble(Code_Gen_Model_B.AutoState);
    __BL_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Module_Angle);
    __BL_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Wheel_Speed);
    __BL_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Wheel_Speed_in);
    __BL_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BL_Steer_Module_Angle);
    __BR_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Module_Angle);
    __BR_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Wheel_Speed);
    __BR_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);
    __BR_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BR_Steer_Module_Angle);
    __Back_Lower_Arm_Length__Entry.SetDouble(Code_Gen_Model_B.Back_Lower_Arm_Length);
    __Back_Upper_Arm_Length__Entry.SetDouble(Code_Gen_Model_B.Back_Upper_Arm_Length);
    __Ball_Screw_Arm_Length__Entry.SetDouble(Code_Gen_Model_B.Ball_Screw_Arm_Length);
    __Climber_Cmd_Direction__Entry.SetDouble(Code_Gen_Model_B.Climber_Cmd_Direction);
    __CurrentPriorityIndex__Entry.SetDouble(Code_Gen_Model_B.CurrentPriorityIndex);
    __Desired_Angle__Entry.SetDouble(Code_Gen_Model_B.Desired_Angle);
    __Desired_BS_Length__Entry.SetDouble(Code_Gen_Model_B.Desired_BS_Length);
    __Desired_Back_AA_Length__Entry.SetDouble(Code_Gen_Model_B.Desired_Back_AA_Length);
    __Desired_Back_Lower_Dist__Entry.SetDouble(Code_Gen_Model_B.Desired_Back_Lower_Dist);
    __Desired_Back_Upper_Dist__Entry.SetDouble(Code_Gen_Model_B.Desired_Back_Upper_Dist);
    __Desired_Ball_Screw_Dist__Entry.SetDouble(Code_Gen_Model_B.Desired_Ball_Screw_Dist);
    __Desired_Front_AA_Length__Entry.SetDouble(Code_Gen_Model_B.Desired_Front_AA_Length);
    __Desired_Front_Dist__Entry.SetDouble(Code_Gen_Model_B.Desired_Front_Dist);
    __Desired_Gap__Entry.SetDouble(Code_Gen_Model_B.Desired_Gap);
    __Desired_Height__Entry.SetDouble(Code_Gen_Model_B.Desired_Height);
    __Drive_Joystick_X__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_X);
    __Drive_Joystick_Y__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Y);
    __Drive_Joystick_Z__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Z);
    __Drive_Joystick_Z_Mode__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Z_Mode);
    __FL_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Module_Angle);
    __FL_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Wheel_Speed);
    __FL_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Wheel_Speed_in);
    __FL_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FL_Steer_Module_Angle);
    __FR_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Module_Angle);
    __FR_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Wheel_Speed);
    __FR_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Wheel_Speed_in);
    __FR_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FR_Steer_Module_Angle);
    __Face_Away_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Away_Driver);
    __Face_Left_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Left_Driver);
    __Face_Right_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Right_Driver);
    __Face_Toward_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Toward_Driver);
    __Front_Arm_Length__Entry.SetDouble(Code_Gen_Model_B.Front_Arm_Length);
    __Gyro_Angle_Calibrated_deg__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_Calibrated_deg);
    __Gyro_Angle_Field_rad__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_Field_rad);
    __Gyro_Angle_SPF__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_SPF);
    __Gyro_Angle_rad__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_rad);
    __Intake_Motor_DC__Entry.SetDouble(Code_Gen_Model_B.Intake_Motor_DC);
    __Intake_Shooter_State_Request__Entry.SetDouble(Code_Gen_Model_B.Intake_Shooter_State_Request);
    __Is_Absolute_Steering_SPF__Entry.SetDouble(Code_Gen_Model_B.Is_Absolute_Steering_SPF);
    __Is_Absolute_Translation_SPF__Entry.SetDouble(Code_Gen_Model_B.Is_Absolute_Translation_SPF);
    __Is_All_Arms_Cal_Position__Entry.SetDouble(Code_Gen_Model_B.Is_All_Arms_Cal_Position);
    __Is_Boosting__Entry.SetDouble(Code_Gen_Model_B.Is_Boosting);
    __KF_Position_X__Entry.SetDouble(Code_Gen_Model_B.KF_Position_X);
    __KF_Position_Y__Entry.SetDouble(Code_Gen_Model_B.KF_Position_Y);
    __Line_Sensor_Boolean__Entry.SetDouble(Code_Gen_Model_B.Line_Sensor_Boolean);
    __Meas_Angle__Entry.SetDouble(Code_Gen_Model_B.Meas_Angle);
    __Meas_Back_AA_Length__Entry.SetDouble(Code_Gen_Model_B.Meas_Back_AA_Length);
    __Meas_Front_AA_Length__Entry.SetDouble(Code_Gen_Model_B.Meas_Front_AA_Length);
    __Meas_Gap__Entry.SetDouble(Code_Gen_Model_B.Meas_Gap);
    __Meas_Height__Entry.SetDouble(Code_Gen_Model_B.Meas_Height);
    __Note_State_ID__Entry.SetDouble(Code_Gen_Model_B.Note_State_ID);
    __Odom_Position_X__Entry.SetDouble(Code_Gen_Model_B.Odom_Position_X);
    __Odom_Position_Y__Entry.SetDouble(Code_Gen_Model_B.Odom_Position_Y);
    __Odometry_X_global_TEAR_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_X_global_TEAR_ft);
    __Odometry_X_global_est_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_X_global_est_ft);
    __Odometry_Y_global_TEAR_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_Y_global_TEAR_ft);
    __Odometry_Y_global_est_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_Y_global_est_ft);
    __RL_Back__Entry.SetDouble(Code_Gen_Model_B.RL_Back);
    __RL_FB_Ratio__Entry.SetDouble(Code_Gen_Model_B.RL_FB_Ratio);
    __RelativeMoveForward__Entry.SetDouble(Code_Gen_Model_B.RelativeMoveForward);
    __Robot_Reached_Destination__Entry.SetDouble(Code_Gen_Model_B.Robot_Reached_Destination);
    __Shooter_Brake_Enable_out__Entry.SetDouble(Code_Gen_Model_B.Shooter_Brake_Enable_out);
    __Shooter_Motor_DC_Left__Entry.SetDouble(Code_Gen_Model_B.Shooter_Motor_DC_Left);
    __Shooter_Motor_DC_Right__Entry.SetDouble(Code_Gen_Model_B.Shooter_Motor_DC_Right);
    __Shooter_Motor_Speed_Control_Ena__Entry.SetDouble(Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena);
    __Shooter_Motor_Speed_Left__Entry.SetDouble(Code_Gen_Model_B.Shooter_Motor_Speed_Left);
    __Shooter_Motor_Speed_Right__Entry.SetDouble(Code_Gen_Model_B.Shooter_Motor_Speed_Right);
    __Shooter_Pos_State__Entry.SetDouble(Code_Gen_Model_B.Shooter_Pos_State);
    __Shooter_Servo__Entry.SetDouble(Code_Gen_Model_B.Shooter_Servo);
    __Speaker_Angle__Entry.SetDouble(Code_Gen_Model_B.Speaker_Angle);
    __Speaker_Distance__Entry.SetDouble(Code_Gen_Model_B.Speaker_Distance);
    __SplineEnable__Entry.SetDouble(Code_Gen_Model_B.SplineEnable);
    __Spline_Enable__Entry.SetDouble(Code_Gen_Model_B.Spline_Enable);
    __Spline_Follow_Index__Entry.SetDouble(Code_Gen_Model_B.Spline_Follow_Index);
    __Spline_ID__Entry.SetDouble(Code_Gen_Model_B.Spline_ID);
    __Spline_Num_Poses__Entry.SetDouble(Code_Gen_Model_B.Spline_Num_Poses);
    __Spline_Out_Of_Bounds__Entry.SetDouble(Code_Gen_Model_B.Spline_Out_Of_Bounds);
    __Spline_Target_X__Entry.SetDouble(Code_Gen_Model_B.Spline_Target_X);
    __Spline_Target_Y__Entry.SetDouble(Code_Gen_Model_B.Spline_Target_Y);
    __State_Request_Arm__Entry.SetDouble(Code_Gen_Model_B.State_Request_Arm);
    __State_Request_Arm_d__Entry.SetDouble(Code_Gen_Model_B.State_Request_Arm_d);
    __State_Request_Intake_Shooter__Entry.SetDouble(Code_Gen_Model_B.State_Request_Intake_Shooter);
    __State_Request_Intake_Shooter_h__Entry.SetDouble(Code_Gen_Model_B.State_Request_Intake_Shooter_h);
    __Steer_Joystick_X__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_X);
    __Steer_Joystick_Y__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_Y);
    __Steer_Joystick_Z__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_Z);
    __Steering_Abs_Angle__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Angle);
    __Steering_Abs_Angle_Active__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Angle_Active);
    __Steering_Abs_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Cmd);
    __Steering_Abs_Cmd_SPF__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Cmd_SPF);
    __Steering_Abs_Gyro__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Gyro);
    __Steering_Abs_Gyro_Latch__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Gyro_Latch);
    __Steering_Localized_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Localized_Cmd);
    __Steering_Localized_PID__Entry.SetDouble(Code_Gen_Model_B.Steering_Localized_PID);
    __Steering_Rel_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Rel_Cmd);
    __Steering_Rel_Cmd_SPF__Entry.SetDouble(Code_Gen_Model_B.Steering_Rel_Cmd_SPF);
    __Test_Mode__Entry.SetDouble(Code_Gen_Model_B.Test_Mode);
    __Translation_Angle__Entry.SetDouble(Code_Gen_Model_B.Translation_Angle);
    __Translation_Angle_SPF__Entry.SetDouble(Code_Gen_Model_B.Translation_Angle_SPF);
    __Translation_Speed__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed);
    __Translation_Speed_RL__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed_RL);
    __Translation_Speed_SPF__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed_SPF);
    __Translation_Steering_Cmd__Entry.SetDouble(Code_Gen_Model_B.Translation_Steering_Cmd);
    __WhileIterator__Entry.SetDouble(Code_Gen_Model_B.WhileIterator);
    __previous_call_was_for_speaker__Entry.SetDouble(Code_Gen_Model_B.previous_call_was_for_speaker);
}
void SimulinkSmartDashboardInterface::GameStateChangeCallback() {}
