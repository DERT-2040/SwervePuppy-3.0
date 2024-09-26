/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.212
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Sep 19 19:34:01 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "Code_Gen_Model_private.h"
#include <string.h>
#include "rt_defines.h"
#include <float.h>

/* Named constants for Chart: '<S10>/Chart_Intake_and_Shooter' */
#define Co_IN_Note_Speaker_Score_Intake ((uint8_T)8U)
#define Co_IN_Note_Speaker_Score_SpinUp ((uint8_T)9U)
#define Cod_IN_Note_Transfer_to_Shooter ((uint8_T)10U)
#define Code_Ge_IN_Waiting_for_Requests ((uint8_T)14U)
#define Code_Gen_Mod_IN_Extra_Run_Time2 ((uint8_T)1U)
#define Code_Gen_Mod_IN_Extra_Run_Time4 ((uint8_T)2U)
#define Code_Gen_Mod_IN_Extra_Run_Time5 ((uint8_T)3U)
#define Code_Gen_Mod_IN_Extra_Run_Time6 ((uint8_T)4U)
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Mode_IN_Reverse_Intake ((uint8_T)11U)
#define Code_Gen_Model_IN_Note_Pickup  ((uint8_T)7U)
#define Code_Gen_Model_IN_Store_Servo  ((uint8_T)13U)
#define Code_Gen_Model_Servo_Down      (false)
#define Code_Gen_Model_Servo_Up        (true)
#define Code_IN_Note_Eject_from_Shooter ((uint8_T)5U)
#define Code_IN_Note_Intake_AND_Shooter ((uint8_T)6U)
#define IN_Spin_Up_Shooter_Before_Trans ((uint8_T)12U)

/* Named constants for Chart: '<S15>/Chart' */
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S16>/Chart_Shooter_Position' */
#define Code_Gen_Mo_IN_Speaker_to_Stage ((uint8_T)4U)
#define Code_Gen_Mo_IN_Stage_to_Speaker ((uint8_T)6U)
#define Code_Gen_Mode_State_LoadShooter ((uint8_T)2U)
#define Code_Gen_Model_IN_Amp          ((uint8_T)1U)
#define Code_Gen_Model_IN_LoadShooter  ((uint8_T)2U)
#define Code_Gen_Model_IN_Speaker      ((uint8_T)3U)
#define Code_Gen_Model_IN_Stage        ((uint8_T)5U)
#define Code_Gen_Model_IN_Trap         ((uint8_T)7U)
#define Code_Gen_Model_State_Amp       ((uint8_T)3U)
#define Code_Gen_Model_State_Speaker   ((uint8_T)1U)
#define Code_Gen_Model_State_Stage     ((uint8_T)0U)
#define Code_Gen_Model_State_Trap      ((uint8_T)4U)

/* Named constants for Chart: '<S27>/Chart' */
#define Cod_IN_MoveArms_and_MoveForward ((uint8_T)6U)
#define Code_Gen_IN_CheckForRobotOrNote ((uint8_T)2U)
#define Code_Gen_IN_PathToPickUpWODetec ((uint8_T)16U)
#define Code_Gen_Model_IN_AngleArms    ((uint8_T)1U)
#define Code_Gen_Model_IN_DriveBack    ((uint8_T)3U)
#define Code_Gen_Model_IN_DriveOut     ((uint8_T)4U)
#define Code_Gen_Model_IN_End          ((uint8_T)5U)
#define Code_Gen_Model_IN_Move_To_Shoot ((uint8_T)7U)
#define Code_Gen_Model_IN_Note6        ((uint8_T)8U)
#define Code_Gen_Model_IN_Note6_trans  ((uint8_T)9U)
#define Code_Gen_Model_IN_Note7        ((uint8_T)10U)
#define Code_Gen_Model_IN_Note7_trans  ((uint8_T)11U)
#define Code_Gen_Model_IN_Note8        ((uint8_T)12U)
#define Code_Gen_Model_IN_Note8_trans  ((uint8_T)13U)
#define Code_Gen_Model_IN_PathPicker   ((uint8_T)14U)
#define Code_Gen_Model_IN_PathToPickUp ((uint8_T)15U)
#define Code_Gen_Model_IN_PathToShoot  ((uint8_T)17U)
#define Code_Gen_Model_IN_PathToShoot1 ((uint8_T)1U)
#define Code_Gen_Model_IN_Reset_SPF    ((uint8_T)19U)
#define Code_Gen_Model_IN_RunIntake    ((uint8_T)20U)
#define Code_Gen_Model_IN_RunIntake1   ((uint8_T)21U)
#define Code_Gen_Model_IN_Shoot        ((uint8_T)22U)
#define Code_Gen_Model_IN_Shoot1       ((uint8_T)2U)
#define Code_Gen_Model_IN_ShootAgain   ((uint8_T)23U)
#define Code_Gen_Model_IN_ShootNote    ((uint8_T)24U)
#define Code_Gen_Model_IN_ShootWODetec ((uint8_T)25U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)26U)
#define Code_Gen_Model_t_sample        (0.02)
#define Code_Gen__IN_PathToShootWODetec ((uint8_T)18U)

/* Exported block parameters */
real_T AA_Integral_Gain = 0.0005;      /* Variable: AA_Integral_Gain
                                        * Referenced by:
                                        *   '<S170>/Gain2'
                                        *   '<S171>/Gain2'
                                        *   '<S172>/Gain2'
                                        */
real_T AA_Integral_IC = 0.0;           /* Variable: AA_Integral_IC
                                        * Referenced by:
                                        *   '<S170>/Constant3'
                                        *   '<S171>/Constant3'
                                        *   '<S172>/Constant3'
                                        */
real_T AA_Integral_LL = -0.5;          /* Variable: AA_Integral_LL
                                        * Referenced by:
                                        *   '<S170>/Saturation1'
                                        *   '<S171>/Saturation1'
                                        *   '<S172>/Saturation1'
                                        */
real_T AA_Integral_UL = 0.5;           /* Variable: AA_Integral_UL
                                        * Referenced by:
                                        *   '<S170>/Saturation1'
                                        *   '<S171>/Saturation1'
                                        *   '<S172>/Saturation1'
                                        */
real_T AA_Prop_Gain = 0.01;            /* Variable: AA_Prop_Gain
                                        * Referenced by:
                                        *   '<S170>/Gain1'
                                        *   '<S171>/Gain1'
                                        *   '<S172>/Gain1'
                                        */
real_T AA_TC_LL = -0.6;                /* Variable: AA_TC_LL
                                        * Referenced by:
                                        *   '<S170>/Constant1'
                                        *   '<S170>/Saturation2'
                                        *   '<S171>/Constant1'
                                        *   '<S171>/Saturation2'
                                        *   '<S172>/Constant1'
                                        *   '<S172>/Saturation2'
                                        */
real_T AA_TC_UL = 0.6;                 /* Variable: AA_TC_UL
                                        * Referenced by:
                                        *   '<S170>/Constant'
                                        *   '<S170>/Saturation2'
                                        *   '<S171>/Constant'
                                        *   '<S171>/Saturation2'
                                        *   '<S172>/Constant'
                                        *   '<S172>/Saturation2'
                                        */
real_T AT_Tag_4_Coordinate_X = 16.5793;/* Variable: AT_Tag_4_Coordinate_X
                                        * Referenced by: '<S7>/Constant3'
                                        */
real_T AT_Tag_4_Coordinate_Y = 5.5479; /* Variable: AT_Tag_4_Coordinate_Y
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T AT_Tag_7_Coordinate_X = -0.0381;/* Variable: AT_Tag_7_Coordinate_X
                                        * Referenced by: '<S7>/Constant9'
                                        */
real_T AT_Tag_7_Coordinate_Y = 5.5479; /* Variable: AT_Tag_7_Coordinate_Y
                                        * Referenced by: '<S7>/Constant1'
                                        */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S409>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S409>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S409>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S409>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S409>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S409>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S409>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S409>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S409>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S409>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S409>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S409>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S409>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S409>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S409>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S409>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S409>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S409>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S409>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S409>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S409>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S409>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S409>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S409>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S412>/Gain2'
                                        */
real_T Amp_Angle = -50.0;              /* Variable: Amp_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Amp_Gap = 700.0;                /* Variable: Amp_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Amp_Height = 1050.0;            /* Variable: Amp_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Auto_Design_Path = 1.0;         /* Variable: Auto_Design_Path
                                        * Referenced by: '<S27>/Constant4'
                                        */
real_T Auto_Intake_Velocity = 0.0;     /* Variable: Auto_Intake_Velocity
                                        * Referenced by: '<S27>/Chart'
                                        */
real_T Auto_Start_Time = 1.5;          /* Variable: Auto_Start_Time
                                        * Referenced by: '<S27>/Chart'
                                        */
real_T Auto_Start_Velocity = 0.5;      /* Variable: Auto_Start_Velocity
                                        * Referenced by: '<S27>/Chart'
                                        */
real_T BS_Deriv_FC = 0.2;              /* Variable: BS_Deriv_FC
                                        * Referenced by: '<S169>/Constant2'
                                        */
real_T BS_Deriv_Gain = 0.0;            /* Variable: BS_Deriv_Gain
                                        * Referenced by: '<S169>/Constant3'
                                        */
real_T BS_Deriv_LL = -0.5;             /* Variable: BS_Deriv_LL
                                        * Referenced by: '<S169>/Saturation'
                                        */
real_T BS_Deriv_UL = 0.5;              /* Variable: BS_Deriv_UL
                                        * Referenced by: '<S169>/Saturation'
                                        */
real_T BS_Position_Dec_RL = -30.0;     /* Variable: BS_Position_Dec_RL
                                        * Referenced by: '<S173>/Constant1'
                                        */
real_T BS_Position_Inc_RL = 30.0;      /* Variable: BS_Position_Inc_RL
                                        * Referenced by: '<S173>/Constant3'
                                        */
real_T BS_Prop_Gain = 0.1;             /* Variable: BS_Prop_Gain
                                        * Referenced by: '<S169>/Gain1'
                                        */
real_T BS_TC_LL = -0.3;                /* Variable: BS_TC_LL
                                        * Referenced by: '<S169>/Saturation2'
                                        */
real_T BS_TC_UL = 0.3;                 /* Variable: BS_TC_UL
                                        * Referenced by: '<S169>/Saturation2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S425>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S421>/Constant'
                                        *   '<S421>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S425>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S421>/Constant1'
                                        */
real_T Climber_DutyCycle_Neg = -1.0;   /* Variable: Climber_DutyCycle_Neg
                                        * Referenced by: '<S4>/Constant3'
                                        */
real_T Climber_DutyCycle_Pos = 0.5;    /* Variable: Climber_DutyCycle_Pos
                                        * Referenced by: '<S4>/Constant2'
                                        */
real_T Dist_AA_Cal_Tol = 5.0;          /* Variable: Dist_AA_Cal_Tol
                                        * Referenced by:
                                        *   '<S22>/Calibration_Tolerance'
                                        *   '<S23>/Calibration_Tolerance'
                                        *   '<S25>/Calibration_Tolerance'
                                        */
real_T Dist_BS_Cal_Tol = 1.0;          /* Variable: Dist_BS_Cal_Tol
                                        * Referenced by: '<S24>/Calibration_Tolerance'
                                        */
real_T Dist_Per_Rev_Back_Lower = 2.2166;/* Variable: Dist_Per_Rev_Back_Lower
                                         * Referenced by: '<S22>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Back_Upper = 2.2166;/* Variable: Dist_Per_Rev_Back_Upper
                                         * Referenced by: '<S23>/Rev_2_Dist'
                                         */
real_T Dist_Per_Rev_Ball_Screw = 0.35278;/* Variable: Dist_Per_Rev_Ball_Screw
                                          * Referenced by: '<S24>/Rev_2_Dist'
                                          */
real_T Dist_Per_Rev_Front = 2.2166;    /* Variable: Dist_Per_Rev_Front
                                        * Referenced by: '<S25>/Rev_2_Dist'
                                        */
real_T Dist_Reset_Value_Back_Lower = 79.375;/* Variable: Dist_Reset_Value_Back_Lower
                                             * Referenced by:
                                             *   '<S22>/Dist_Reset_Value'
                                             *   '<S22>/Unit Delay1'
                                             */
real_T Dist_Reset_Value_Back_Upper = 19.05;/* Variable: Dist_Reset_Value_Back_Upper
                                            * Referenced by:
                                            *   '<S23>/Dist_Reset_Value'
                                            *   '<S23>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Ball_Screw = 279.4;/* Variable: Dist_Reset_Value_Ball_Screw
                                            * Referenced by:
                                            *   '<S24>/Dist_Reset_Value'
                                            *   '<S24>/Unit Delay1'
                                            */
real_T Dist_Reset_Value_Front = 6.35;  /* Variable: Dist_Reset_Value_Front
                                        * Referenced by:
                                        *   '<S25>/Dist_Reset_Value'
                                        *   '<S25>/Unit Delay1'
                                        */
real_T Distance_FL_y = 0.26194;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S349>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S265>/Constant3'
                                        *   '<S286>/Constant3'
                                        *   '<S307>/Constant3'
                                        *   '<S328>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S265>/Constant2'
                                   *   '<S286>/Constant2'
                                   *   '<S307>/Constant2'
                                   *   '<S328>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S265>/Saturation'
                                        *   '<S286>/Saturation'
                                        *   '<S307>/Saturation'
                                        *   '<S328>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S265>/Saturation'
                                        *   '<S286>/Saturation'
                                        *   '<S307>/Saturation'
                                        *   '<S328>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00018182;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S265>/Gain'
                                            *   '<S286>/Gain'
                                            *   '<S307>/Gain'
                                            *   '<S328>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S265>/Gain2'
                                        *   '<S286>/Gain2'
                                        *   '<S307>/Gain2'
                                        *   '<S328>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S265>/Saturation1'
                                        *   '<S286>/Saturation1'
                                        *   '<S307>/Saturation1'
                                        *   '<S328>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S265>/Saturation1'
                                        *   '<S286>/Saturation1'
                                        *   '<S307>/Saturation1'
                                        *   '<S328>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S265>/Gain1'
                                        *   '<S286>/Gain1'
                                        *   '<S307>/Gain1'
                                        *   '<S328>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S270>/Constant'
                            *   '<S291>/Constant'
                            *   '<S312>/Constant'
                            *   '<S333>/Constant'
                            */
real_T FloorDistance = 850.0;          /* Variable: FloorDistance
                                        * Referenced by: '<S26>/Constant'
                                        */
real_T Front_AA_Max_Ext = 443.0;       /* Variable: Front_AA_Max_Ext
                                        * Referenced by: '<S165>/Saturation'
                                        */
real_T Front_AA_Min_Ext = 6.35;        /* Variable: Front_AA_Min_Ext
                                        * Referenced by: '<S165>/Saturation'
                                        */
real_T Gamepad_Stick_Neg_Threshold = -0.5;/* Variable: Gamepad_Stick_Neg_Threshold
                                           * Referenced by:
                                           *   '<S40>/Constant'
                                           *   '<S42>/Constant'
                                           */
real_T Gamepad_Stick_Pos_Threshold = 0.5;/* Variable: Gamepad_Stick_Pos_Threshold
                                          * Referenced by:
                                          *   '<S41>/Constant'
                                          *   '<S43>/Constant'
                                          */
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S8>/Constant2'
                                       *   '<S8>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S8>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S12>/Constant1'
                                        *   '<S12>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.1;/* Variable: KF_Vision_Ambiguity_Thresh
                                         * Referenced by: '<S12>/Constant'
                                         */
real_T LoadShooter_Angle = 35.0;       /* Variable: LoadShooter_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Gap = 280.0;        /* Variable: LoadShooter_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T LoadShooter_Height = 600.0;     /* Variable: LoadShooter_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Note_Detect_Dist_Intake = 200.0;/* Variable: Note_Detect_Dist_Intake
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Detect_Dist_Shooter = 60.0;/* Variable: Note_Detect_Dist_Shooter
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Eject = 1.0;          /* Variable: Note_Time_Eject
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Speaker_Spin_Up = 0.5;/* Variable: Note_Time_Speaker_Spin_Up
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer = 0.0;       /* Variable: Note_Time_Transfer
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Note_Time_Transfer_Spin_Up = 0.5;/* Variable: Note_Time_Transfer_Spin_Up
                                         * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                         */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S14>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S157>/Constant'
                                        */
real_T RL_Back_Amp_to_Stage = 10.0;    /* Variable: RL_Back_Amp_to_Stage
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Load_to_Amp = 10.0;     /* Variable: RL_Back_Load_to_Amp
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Load_to_Stage = 4.0;    /* Variable: RL_Back_Load_to_Stage
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Speaker_Final_to_Speaker_Partial = 5.0;
                           /* Variable: RL_Back_Speaker_Final_to_Speaker_Partial
                            * Referenced by: '<S16>/Chart_Shooter_Position'
                            */
real_T RL_Back_Speaker_Partial_to_Speaker_Final = 3.0;
                           /* Variable: RL_Back_Speaker_Partial_to_Speaker_Final
                            * Referenced by: '<S16>/Chart_Shooter_Position'
                            */
real_T RL_Back_Speaker_Partial_to_Stage = 10.0;
                                   /* Variable: RL_Back_Speaker_Partial_to_Stage
                                    * Referenced by: '<S16>/Chart_Shooter_Position'
                                    */
real_T RL_Back_Stage_to_Amp = 6.0;     /* Variable: RL_Back_Stage_to_Amp
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Stage_to_Load = 7.0;    /* Variable: RL_Back_Stage_to_Load
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Stage_to_Speaker_Partial = 6.0;
                                   /* Variable: RL_Back_Stage_to_Speaker_Partial
                                    * Referenced by: '<S16>/Chart_Shooter_Position'
                                    */
real_T RL_Back_Stage_to_Trap = 1.0;    /* Variable: RL_Back_Stage_to_Trap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_Back_Trap_to_Stage = 1.0;    /* Variable: RL_Back_Trap_to_Stage
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Load_Amp = 0.42;    /* Variable: RL_FB_Ratio_Load_Amp
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Speaker_Final = 1.8;/* Variable: RL_FB_Ratio_Speaker_Final
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Speaker_Partial = 1.33;/* Variable: RL_FB_Ratio_Speaker_Partial
                                           * Referenced by: '<S16>/Chart_Shooter_Position'
                                           */
real_T RL_FB_Ratio_Stage_Amp = 1.0;    /* Variable: RL_FB_Ratio_Stage_Amp
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Stage_Load = 1.61;  /* Variable: RL_FB_Ratio_Stage_Load
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T RL_FB_Ratio_Stage_Trap = 1.15;  /* Variable: RL_FB_Ratio_Stage_Trap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Servo_Store_Gain = 0.0071429;   /* Variable: Servo_Store_Gain
                                        * Referenced by: '<S10>/Gain'
                                        */
real_T Servo_Store_Offset = 0.65;      /* Variable: Servo_Store_Offset
                                        * Referenced by: '<S10>/Constant1'
                                        */
real_T Servo_Time_Deploy = 0.4;        /* Variable: Servo_Time_Deploy
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Servo_Time_Store = 0.5;         /* Variable: Servo_Time_Store
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_DC_Eject = 0.2;         /* Variable: Shooter_DC_Eject
                                        * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                        */
real_T Shooter_Motor_Control_FF = 0.00025;/* Variable: Shooter_Motor_Control_FF
                                           * Referenced by:
                                           *   '<S90>/Gain'
                                           *   '<S91>/Gain'
                                           */
real_T Shooter_Motor_Control_I = 2.0E-5;/* Variable: Shooter_Motor_Control_I
                                         * Referenced by:
                                         *   '<S90>/Gain2'
                                         *   '<S91>/Gain2'
                                         */
real_T Shooter_Motor_Control_I_LL = -0.1;/* Variable: Shooter_Motor_Control_I_LL
                                          * Referenced by:
                                          *   '<S90>/Saturation1'
                                          *   '<S91>/Saturation1'
                                          */
real_T Shooter_Motor_Control_I_UL = 0.1;/* Variable: Shooter_Motor_Control_I_UL
                                         * Referenced by:
                                         *   '<S90>/Saturation1'
                                         *   '<S91>/Saturation1'
                                         */
real_T Shooter_Motor_Control_P = 0.0001;/* Variable: Shooter_Motor_Control_P
                                         * Referenced by:
                                         *   '<S90>/Gain1'
                                         *   '<S91>/Gain1'
                                         */
real_T Shooter_Motor_DesSpd_Store = 500.0;/* Variable: Shooter_Motor_DesSpd_Store
                                           * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                           */
real_T Shooter_Motor_Speed_Transition = 2000.0;
                                     /* Variable: Shooter_Motor_Speed_Transition
                                      * Referenced by: '<S10>/Chart_Intake_and_Shooter'
                                      */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S250>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S250>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S197>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S210>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S250>/Constant3'
                                     */
real_T Stage_Angle = 16.0;             /* Variable: Stage_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Stage_Gap = 241.3;              /* Variable: Stage_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Stage_Height = 533.4;           /* Variable: Stage_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S361>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S361>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S361>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S361>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S361>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S361>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S378>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S378>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S378>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S378>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S377>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S378>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S378>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S378>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S378>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S378>/Constant1'
                                   *   '<S378>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S378>/Constant'
                                   *   '<S378>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S268>/Constant3'
                                        *   '<S289>/Constant3'
                                        *   '<S310>/Constant3'
                                        *   '<S331>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S268>/Constant2'
                                *   '<S289>/Constant2'
                                *   '<S310>/Constant2'
                                *   '<S331>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S268>/Saturation'
                                           *   '<S289>/Saturation'
                                           *   '<S310>/Saturation'
                                           *   '<S331>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S268>/Saturation'
                                          *   '<S289>/Saturation'
                                          *   '<S310>/Saturation'
                                          *   '<S331>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S268>/Gain2'
                                         *   '<S289>/Gain2'
                                         *   '<S310>/Gain2'
                                         *   '<S331>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S268>/Saturation1'
                                             *   '<S289>/Saturation1'
                                             *   '<S310>/Saturation1'
                                             *   '<S331>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S268>/Saturation1'
                                            *   '<S289>/Saturation1'
                                            *   '<S310>/Saturation1'
                                            *   '<S331>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S268>/Gain1'
                                        *   '<S289>/Gain1'
                                        *   '<S310>/Gain1'
                                        *   '<S331>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S360>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S360>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S360>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S360>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S360>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S360>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S411>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S411>/Constant1'
                                        */
real_T TEST_Servo_Down_Flag = 0.0;     /* Variable: TEST_Servo_Down_Flag
                                        * Referenced by: '<S10>/Constant6'
                                        */
real_T TEST_Servo_Down_Value = 0.85;   /* Variable: TEST_Servo_Down_Value
                                        * Referenced by: '<S10>/Constant2'
                                        */
real_T TEST_Servo_Override_Flag = 0.0; /* Variable: TEST_Servo_Override_Flag
                                        * Referenced by: '<S10>/Constant4'
                                        */
real_T TEST_Servo_Override_Value = 0.0;/* Variable: TEST_Servo_Override_Value
                                        * Referenced by: '<S10>/Constant5'
                                        */
real_T TEST_Speaker_Angle = 0.0;       /* Variable: TEST_Speaker_Angle
                                        * Referenced by: '<S16>/Constant26'
                                        */
real_T TEST_Speaker_Distance = 0.0;    /* Variable: TEST_Speaker_Distance
                                        * Referenced by: '<S7>/Constant4'
                                        */
real_T TEST_Speaker_Gap = 0.0;         /* Variable: TEST_Speaker_Gap
                                        * Referenced by: '<S16>/Constant27'
                                        */
real_T TEST_Speaker_Height = 0.0;      /* Variable: TEST_Speaker_Height
                                        * Referenced by: '<S16>/Constant25'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S20>/Constant5'
                                      */
real_T Test_DC_Gain_BackLower = 0.3;   /* Variable: Test_DC_Gain_BackLower
                                        * Referenced by: '<S9>/Gain2'
                                        */
real_T Test_DC_Gain_BackUpper = 0.3;   /* Variable: Test_DC_Gain_BackUpper
                                        * Referenced by: '<S9>/Gain'
                                        */
real_T Test_DC_Gain_BallScrew = 0.2;   /* Variable: Test_DC_Gain_BallScrew
                                        * Referenced by: '<S9>/Gain3'
                                        */
real_T Test_DC_Gain_Front = 0.3;       /* Variable: Test_DC_Gain_Front
                                        * Referenced by: '<S9>/Gain1'
                                        */
real_T Test_DC_Gain_Intake = -1.0;     /* Variable: Test_DC_Gain_Intake
                                        * Referenced by: '<S9>/Gain4'
                                        */
real_T Test_DC_Gain_Shooter = 1.0;     /* Variable: Test_DC_Gain_Shooter
                                        * Referenced by: '<S9>/Gain5'
                                        */
real_T Tol_Angle = 5.0;                /* Variable: Tol_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Tol_Gap = 12.7;                 /* Variable: Tol_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Tol_Height = 12.7;              /* Variable: Tol_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S348>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S348>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S348>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S348>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S348>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S348>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S412>/Gain'
                                        */
real_T Trap_Angle = 30.0;              /* Variable: Trap_Angle
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Trap_Gap = 460.0;               /* Variable: Trap_Gap
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Trap_Height = 845.0;            /* Variable: Trap_Height
                                        * Referenced by: '<S16>/Chart_Shooter_Position'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S411>/Dead Zone'
                                        *   '<S412>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S411>/Dead Zone'
                                        *   '<S412>/Dead Zone'
                                        */

/* Block signals (default storage) */
B_Code_Gen_Model_T Code_Gen_Model_B;

/* Block states (default storage) */
DW_Code_Gen_Model_T Code_Gen_Model_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Code_Gen_Model_T Code_Gen_Model_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Code_Gen_Model_T Code_Gen_Model_Y;

/* Real-time model */
static RT_MODEL_Code_Gen_Model_T Code_Gen_Model_M_;
RT_MODEL_Code_Gen_Model_T *const Code_Gen_Model_M = &Code_Gen_Model_M_;

/* Forward declaration for local functions */
static void Code_Gen_Mo_CheckForRobotOrNote(void);
static void Code_Gen_Model_Note6_trans(const boolean_T *UnitDelay, const
  boolean_T *UnitDelay_e);
static void Code_Gen_Model_Note8_trans(const boolean_T *UnitDelay, const
  boolean_T *UnitDelay_e);
static void Code_Gen_Model_PathPicker(void);
static void Code_Gen_Model_PathToPickUp(void);
static void Code_Gen_Model_PathToShoot(void);
static void Code_Gen_Model_RunIntake(void);
static void Code_Gen_Model_Shoot(void);
static void Code_Gen_Model_ShootWODetec(const boolean_T *UnitDelay);
static void Code_Gen_M_Waiting_for_Requests(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_i, const boolean_T *FixPtRelationalOperator_o, const
  boolean_T *FixPtRelationalOperator_c);

/* Lookup Binary Search Utility BINARYSEARCH_real_T */
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real_T_real_T */
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = (maxIndex >> 1U);
    iLeft = 0U;
    iRght = maxIndex;
    while ((iRght - iLeft) > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = ((iRght + iLeft) >> 1U);
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return ((table[iLeft + 1U] - yL_0d0) * frac) + yL_0d0;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else if ((rtIsInf(u0)) && (rtIsInf(u1))) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Mo_CheckForRobotOrNote(void)
{
  real_T tmp;

  /* Constant: '<S27>/Constant3' */
  tmp = Code_Gen_Model_ConstP.Constant3_Value_m[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if ((tmp > 5.0) && (Code_Gen_Model_DW.Timer < 16.0)) {
    Code_Gen_Model_B.CurrentPriorityIndex++;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else if (tmp < 6.0) {
    Code_Gen_Model_B.CurrentPriorityIndex++;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_PathToPickUp;
    Code_Gen_Model_B.SplineEnable = 1.0;
  } else {
    Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
  }

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_Note6_trans(const boolean_T *UnitDelay, const
  boolean_T *UnitDelay_e)
{
  if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note8_trans;
  } else if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note7_trans;
  } else if (!(*UnitDelay_e)) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else if (!(*UnitDelay)) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
  }
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_Note8_trans(const boolean_T *UnitDelay, const
  boolean_T *UnitDelay_e)
{
  if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note7_trans;
  } else if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6_trans;
  } else if (!(*UnitDelay_e)) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note8;
    Code_Gen_Model_DW.is_Note8 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else if (!(*UnitDelay)) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
  }
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_PathPicker(void)
{
  Code_Gen_Model_DW.is_c10_Code_Gen_Model = Cod_IN_MoveArms_and_MoveForward;
  Code_Gen_Model_B.ArmStateRequest = 1.0;
  Code_Gen_Model_B.SplineEnable = 0.0;
  Code_Gen_Model_B.RelativeMoveForward = Auto_Start_Velocity;
  Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_PathToPickUp(void)
{
  if (Code_Gen_Model_DW.Timer < 16.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_IN_CheckForRobotOrNote;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  }
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_PathToShoot(void)
{
  real_T tmp;

  /* Constant: '<S27>/Constant3' */
  tmp = Code_Gen_Model_ConstP.Constant3_Value_m[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if (tmp < 6.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Shoot;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
    Code_Gen_Model_B.SplineEnable = 0.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  } else if (tmp > 5.0) {
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  }

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_RunIntake(void)
{
  /* Constant: '<S27>/Constant3' */
  if ((Code_Gen_Model_ConstP.Constant3_Value_m[((int32_T)
        Code_Gen_Model_B.CurrentPriorityIndex) - 1] < 6.0) &&
      (Code_Gen_Model_DW.Timer < 16.0)) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  }

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_Shoot(void)
{
  real_T tmp;

  /* Constant: '<S27>/Constant3' */
  tmp = Code_Gen_Model_ConstP.Constant3_Value_m[((int32_T)
    Code_Gen_Model_B.CurrentPriorityIndex) - 1];
  if (tmp < 6.0) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_PathToPickUp;
    Code_Gen_Model_B.SplineEnable = 1.0;
  } else if (tmp > 5.0) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note6;
    Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_PathToShoot1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_DW.CloseNoteCounter++;
  } else {
    Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
  }

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S27>/Chart' */
static void Code_Gen_Model_ShootWODetec(const boolean_T *UnitDelay)
{
  boolean_T tmp;
  Code_Gen_Model_B.AutoState = 1.0;
  if ((*UnitDelay) || (Code_Gen_Model_DW.Timer > 4.0)) {
    tmp = (Code_Gen_Model_B.CurrentPriorityIndex == 2.0);
  } else {
    tmp = false;
  }

  if (tmp) {
    Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
  } else if ((*UnitDelay) || (Code_Gen_Model_DW.Timer > 3.0)) {
    Code_Gen_Model_B.CurrentPriorityIndex++;
    Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_IN_PathToPickUpWODetec;
    Code_Gen_Model_B.AutoState = 1.1;
    Code_Gen_Model_B.SplineEnable = 1.0;
    Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
    Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
  } else {
    Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
  }
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt((a * a) + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt((b * b) + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (((rtIsNaN(u0)) || (rtIsNaN(u1))) || (rtIsInf(u0))) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    boolean_T yEq;
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      real_T q;
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > (DBL_EPSILON * q));
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Function for Chart: '<S10>/Chart_Intake_and_Shooter' */
static void Code_Gen_M_Waiting_for_Requests(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_i, const boolean_T *FixPtRelationalOperator_o, const
  boolean_T *FixPtRelationalOperator_c)
{
  Code_Gen_Model_B.Note_State_ID = 0.0;
  Code_Gen_Model_B.Intake_Motor_DC = 0.0;
  Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
  Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
  if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Intake_AND_Shooter;
    Code_Gen_Model_B.Note_State_ID = 4.1;
    Code_Gen_Model_B.Intake_Motor_DC = -1.0;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Up;
    Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
    Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
  } else if (*FixPtRelationalOperator_n) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = IN_Spin_Up_Shooter_Before_Trans;
    Code_Gen_Model_B.Note_State_ID = 2.1;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Up;
    Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
    Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
    Code_Gen_Model_DW.timer = 0.02;
  } else if (*FixPtRelationalOperator) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Note_Pickup;
    Code_Gen_Model_B.Note_State_ID = 1.0;
    Code_Gen_Model_B.Intake_Motor_DC = -1.0;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
  } else if (*FixPtRelationalOperator_k) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Store_Servo;
    Code_Gen_Model_B.Note_State_ID = 3.1;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
    Code_Gen_Model_DW.timer = 0.02;
  } else if (*FixPtRelationalOperator_o) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
    Code_Gen_Model_B.Note_State_ID = 5.1;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
    Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
    Code_Gen_Model_B.Shooter_Motor_DC_Left = -1.0;
    Code_Gen_Model_B.Shooter_Motor_DC_Right = 1.0;

    /* Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Speaker;
       Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Speaker;
       du: Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Speaker;
       Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Speaker; */
  } else if (*FixPtRelationalOperator_c) {
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mode_IN_Reverse_Intake;
    Code_Gen_Model_B.Note_State_ID = 6.1;
    Code_Gen_Model_B.Intake_Motor_DC = 1.0;
    Code_Gen_Model_DW.timer = 0.02;
  }
}

/* Model step function */
void Code_Gen_Model_step(void)
{
  /* local block i/o variables */
  real_T rtb_LookupTableDynamic1;
  real_T rtb_LookupTableDynamic;
  real_T rtb_LookupTableDynamic1_g;
  real_T rtb_LookupTableDynamic_p;
  real_T rtb_LookupTableDynamic1_i;
  real_T rtb_LookupTableDynamic_j;
  real_T rtb_MatrixConcatenate_o[450];
  real_T rtb_Position_and_Curvature[450];
  real_T distance_from_robot[150];
  real_T rtb_Assignment_d[150];
  real_T rtb_MatrixConcatenate_h[100];
  real_T rtb_Spline_Ref_Poses[40];
  real_T rtb_Assignment[24];
  real_T rtb_Selector4[24];
  real_T rtb_Ref_Poses[20];
  real_T rtb_thetay_n_0[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T Rot_Mat_idx_0;
  real_T cos_alpha;
  real_T rtb_Add_gd;
  real_T rtb_Add_gj;
  real_T rtb_Add_i;
  real_T rtb_Add_o2;
  real_T rtb_Add_oh;
  real_T rtb_Add_ov;
  real_T rtb_FeedForward;
  real_T rtb_FeedForward_a;
  real_T rtb_FeedForward_n;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_d;
  real_T rtb_Hypot_em;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_Product2_f;
  real_T rtb_Product2_l;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Sin4;
  real_T rtb_Subtract;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_b;
  real_T rtb_Subtract1_bx;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_inz;
  real_T rtb_Subtract1_kg;
  real_T rtb_Subtract1_n;
  real_T rtb_Subtract1_of;
  real_T rtb_Subtract2;
  real_T rtb_Subtract3;
  real_T rtb_Sum_jt;
  real_T rtb_Switch1;
  real_T rtb_Switch1_p2;
  real_T rtb_Switch2;
  real_T rtb_Switch4_g;
  real_T rtb_Test_DC_Shooter;
  real_T rtb_rx;
  real_T rtb_rx_d;
  real_T rtb_rx_i;
  real_T rtb_rx_l;
  real_T rtb_thetay;
  real_T rtb_thetay_a;
  real_T rtb_thetay_n;
  real_T sin_alpha;
  real_T y;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Climber_Cmd_Direction;
  int32_T rtb_Num_Segments;
  int32_T s222_iter;
  uint16_T s247_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  uint8_T rtb_Prev_GameState;
  boolean_T FixPtRelationalOperator_c;
  boolean_T FixPtRelationalOperator_o;
  boolean_T UnitDelay;
  boolean_T UnitDelay_e;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2;
  boolean_T rtb_AT_Tag_16_Active;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_Compare_pf;
  boolean_T rtb_FixPtRelationalOperator_fh;
  boolean_T rtb_FixPtRelationalOperator_h;
  boolean_T rtb_FixPtRelationalOperator_m;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_OR7;
  boolean_T rtb_Relative_Translation_Flag;

  /* Switch: '<S9>/Switch9' incorporates:
   *  Constant: '<S57>/Constant'
   *  Constant: '<S58>/Constant'
   *  Constant: '<S62>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  Constant: '<S68>/Constant'
   *  Inport: '<Root>/Joystick_Left_B13'
   *  Inport: '<Root>/Joystick_Left_B14'
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Left_B8'
   *  Inport: '<Root>/Joystick_Right_B13'
   *  Inport: '<Root>/Joystick_Right_B14'
   *  Inport: '<Root>/Joystick_Right_B7'
   *  Inport: '<Root>/Joystick_Right_B8'
   *  Logic: '<S9>/OR4'
   *  Logic: '<S9>/OR6'
   *  RelationalOperator: '<S48>/Compare'
   *  RelationalOperator: '<S57>/Compare'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  RelationalOperator: '<S68>/Compare'
   *  Switch: '<S9>/Switch10'
   */
  if ((((Code_Gen_Model_U.Joystick_Left_B7 != 0.0) ||
        (Code_Gen_Model_U.Joystick_Left_B13 != 0.0)) ||
       (Code_Gen_Model_U.Joystick_Right_B7 != 0.0)) ||
      (Code_Gen_Model_U.Joystick_Right_B13 != 0.0)) {
    /* Switch: '<S9>/Switch9' incorporates:
     *  Constant: '<S9>/Constant10'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = 1.0;
  } else if ((((Code_Gen_Model_U.Joystick_Left_B8 != 0.0) ||
               (Code_Gen_Model_U.Joystick_Left_B14 != 0.0)) ||
              (Code_Gen_Model_U.Joystick_Right_B8 != 0.0)) ||
             (Code_Gen_Model_U.Joystick_Right_B14 != 0.0)) {
    /* Switch: '<S9>/Switch10' incorporates:
     *  Constant: '<S9>/Constant11'
     *  Switch: '<S9>/Switch9'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = -1.0;
  } else {
    /* Switch: '<S9>/Switch9' incorporates:
     *  Constant: '<S9>/Constant12'
     *  Switch: '<S9>/Switch10'
     */
    Code_Gen_Model_B.Climber_Cmd_Direction = 0.0;
  }

  /* End of Switch: '<S9>/Switch9' */

  /* SignalConversion: '<S9>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S9>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S9>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S9>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S9>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S56>/Compare' incorporates:
   *  Constant: '<S56>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S54>/Compare' incorporates:
   *  Constant: '<S54>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S49>/Constant'
   *  Constant: '<S61>/Constant'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  Constant: '<S72>/Constant'
   *  Constant: '<S73>/Constant'
   *  Inport: '<Root>/Gamepad_B1_A'
   *  Inport: '<Root>/Gamepad_B4_Y'
   *  Inport: '<Root>/Gamepad_Back'
   *  Inport: '<Root>/Gamepad_LB'
   *  Inport: '<Root>/Gamepad_LT'
   *  Inport: '<Root>/Gamepad_RB'
   *  Inport: '<Root>/Gamepad_RT'
   *  Inport: '<Root>/Joystick_Right_B1'
   *  Logic: '<S9>/OR1'
   *  Logic: '<S9>/OR2'
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S72>/Compare'
   *  RelationalOperator: '<S73>/Compare'
   *  Switch: '<S9>/Switch1'
   *  Switch: '<S9>/Switch11'
   *  Switch: '<S9>/Switch12'
   *  Switch: '<S9>/Switch2'
   *  Switch: '<S9>/Switch3'
   */
  if (Code_Gen_Model_U.Joystick_Right_B1 != 0.0) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_B4_Y != 0.0) {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Switch: '<S9>/Switch'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 2.0;
  } else if ((Code_Gen_Model_U.Gamepad_RB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_RT != 0.0)) {
    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S9>/Constant2'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 4.0;
  } else if ((Code_Gen_Model_U.Gamepad_LB != 0.0) ||
             (Code_Gen_Model_U.Gamepad_LT != 0.0)) {
    /* Switch: '<S9>/Switch3' incorporates:
     *  Constant: '<S9>/Constant3'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 5.0;
  } else if (Code_Gen_Model_U.Gamepad_B1_A != 0.0) {
    /* Switch: '<S9>/Switch11' incorporates:
     *  Constant: '<S9>/Constant13'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 6.0;
  } else if (Code_Gen_Model_U.Gamepad_Back != 0.0) {
    /* Switch: '<S9>/Switch12' incorporates:
     *  Constant: '<S9>/Constant14'
     *  Switch: '<S9>/Switch'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch11'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 7.0;
  } else {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant4'
     *  Switch: '<S9>/Switch1'
     *  Switch: '<S9>/Switch11'
     *  Switch: '<S9>/Switch12'
     *  Switch: '<S9>/Switch2'
     *  Switch: '<S9>/Switch3'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter = 0.0;
  }

  /* End of Switch: '<S9>/Switch' */

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  y = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(y)) || (rtIsInf(y))) {
    y = 0.0;
  } else {
    y = fmod(y, 256.0);
  }

  rtb_GameState = (uint8_T)((y < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)((uint8_T)
    (-y)))))) : ((int32_T)((uint8_T)y)));

  /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

  /* Logic: '<S9>/OR7' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S46>/Constant'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   *  UnitDelay: '<S15>/Unit Delay'
   */
  rtb_OR7 = ((rtb_GameState == 2) && (Code_Gen_Model_B.Active_GameState > 2));

  /* Switch: '<S9>/Switch4' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  Inport: '<Root>/Gamepad_Stick_Left_Y'
   *  Inport: '<Root>/Gamepad_Stick_Right_Y'
   *  Logic: '<S9>/OR'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S74>/FixPt Relational Operator'
   *  Switch: '<S9>/Switch5'
   *  Switch: '<S9>/Switch6'
   *  Switch: '<S9>/Switch7'
   *  UnitDelay: '<S74>/Delay Input1'
   *
   * Block description for '<S74>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((((int32_T)rtb_OR7) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_nb)) ||
      (Code_Gen_Model_U.Gamepad_Stick_Left_Y <= Gamepad_Stick_Neg_Threshold)) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant5'
     */
    Code_Gen_Model_B.State_Request_Arm = 0.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant6'
     *  Switch: '<S9>/Switch5'
     */
    Code_Gen_Model_B.State_Request_Arm = 1.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y <=
             Gamepad_Stick_Neg_Threshold) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant7'
     *  Switch: '<S9>/Switch5'
     *  Switch: '<S9>/Switch6'
     */
    Code_Gen_Model_B.State_Request_Arm = 2.0;
  } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >=
             Gamepad_Stick_Pos_Threshold) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant8'
     *  Switch: '<S9>/Switch5'
     *  Switch: '<S9>/Switch6'
     *  Switch: '<S9>/Switch7'
     */
    Code_Gen_Model_B.State_Request_Arm = 3.0;
  }

  /* End of Switch: '<S9>/Switch4' */

  /* Reshape: '<S94>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S12>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S12>/Tapped Delay1'
   *  Sum: '<S12>/Add'
   *  Sum: '<S12>/Add1'
   */
  rtb_Reshapey_idx_0 = (((((Code_Gen_Model_U.Photon_Est_Pose_X +
    Code_Gen_Model_DW.TappedDelay_X[0]) + Code_Gen_Model_DW.TappedDelay_X[1]) +
    Code_Gen_Model_DW.TappedDelay_X[2]) + Code_Gen_Model_DW.TappedDelay_X[3]) +
                        Code_Gen_Model_DW.TappedDelay_X[4]) +
    Code_Gen_Model_DW.TappedDelay_X[5];
  rtb_Reshapey_idx_1 = (((((Code_Gen_Model_U.Photon_Est_Pose_Y +
    Code_Gen_Model_DW.TappedDelay1_X[0]) + Code_Gen_Model_DW.TappedDelay1_X[1])
    + Code_Gen_Model_DW.TappedDelay1_X[2]) + Code_Gen_Model_DW.TappedDelay1_X[3])
                        + Code_Gen_Model_DW.TappedDelay1_X[4]) +
    Code_Gen_Model_DW.TappedDelay1_X[5];

  /* Delay: '<S94>/MemoryX' incorporates:
   *  Constant: '<S94>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S12>/AND' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S12>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
              KF_Vision_Ambiguity_Thresh) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S121>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S147>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S147>/Add1' incorporates:
     *  Constant: '<S94>/C'
     *  Delay: '<S94>/MemoryX'
     *  Product: '<S147>/Product'
     */
    rtb_Subtract1 = rtb_Reshapey_idx_0 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Subtract = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S147>/Product2' incorporates:
     *  Constant: '<S95>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Subtract1) +
      (5.9896845167210271E-17 * rtb_Subtract);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Subtract1) +
      (0.095124921972503981 * rtb_Subtract);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S147>/Product2' incorporates:
     *  Outport: '<S147>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S121>/Enabled Subsystem' */

  /* Sum: '<S121>/Add' incorporates:
   *  Delay: '<S94>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S14>/Accumulator2' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S14>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S12>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S12>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S12>/Switch' */

  /* DiscreteIntegrator: '<S14>/Accumulator' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S14>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S12>/Switch1' incorporates:
   *  Constant: '<S12>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S12>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S12>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S12>/Switch1' */

  /* Sum: '<S7>/Subtract1' incorporates:
   *  Constant: '<S7>/Constant1'
   */
  rtb_Subtract1 = Code_Gen_Model_B.KF_Position_Y - AT_Tag_7_Coordinate_Y;

  /* Sum: '<S7>/Subtract' incorporates:
   *  Constant: '<S7>/Constant9'
   */
  rtb_Subtract = Code_Gen_Model_B.KF_Position_X - AT_Tag_7_Coordinate_X;

  /* Sum: '<S7>/Subtract3' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  rtb_Subtract3 = Code_Gen_Model_B.KF_Position_Y - AT_Tag_4_Coordinate_Y;

  /* Sum: '<S7>/Subtract2' incorporates:
   *  Constant: '<S7>/Constant3'
   */
  rtb_Subtract2 = Code_Gen_Model_B.KF_Position_X - AT_Tag_4_Coordinate_X;

  /* Switch: '<S7>/Switch1' incorporates:
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Trigonometry: '<S7>/Atan2'
     */
    Code_Gen_Model_B.Speaker_Angle = rt_atan2d_snf(rtb_Subtract1, rtb_Subtract);
  } else {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant6'
     *  Sum: '<S7>/Add'
     *  Trigonometry: '<S7>/Atan1'
     */
    Code_Gen_Model_B.Speaker_Angle = rt_atan2d_snf(rtb_Subtract3, rtb_Subtract2)
      + 3.1415926535897931;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S39>/FixPt Relational Operator'
   *  Sum: '<S8>/Sum'
   *  UnitDelay: '<S39>/Delay Input1'
   *  UnitDelay: '<S8>/Unit Delay1'
   *
   * Block description for '<S39>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* Sum: '<S8>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S38>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  y = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(y)) || (rtIsInf(y))) {
    y = 0.0;
  } else {
    y = fmod(y, 4.294967296E+9);
  }

  switch ((y < 0.0) ? (-((int32_T)((uint32_T)(-y)))) : ((int32_T)((uint32_T)y)))
  {
   case 0:
    rtAction = 0;
    break;

   case 1:
    rtAction = 1;
    break;

   case 2:
    rtAction = 2;
    break;

   default:
    rtAction = 3;
    break;
  }

  Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = rtAction;
  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* SignalConversion generated from: '<S6>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  SignalConversion generated from: '<S6>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S13>/Merge2' incorporates:
     *  Constant: '<S6>/Constant2'
     *  SignalConversion generated from: '<S6>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S13>/Merge3' incorporates:
     *  Constant: '<S6>/Constant3'
     *  SignalConversion generated from: '<S6>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S6>/Constant4'
     *  SignalConversion generated from: '<S6>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S6>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    UnitDelay = true;

    /* SignalConversion generated from: '<S6>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S6>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S6>/Constant7'
     *  SignalConversion generated from: '<S6>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S6>/Constant9'
     *  SignalConversion generated from: '<S6>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S13>/Merge10' incorporates:
     *  Constant: '<S6>/Constant10'
     *  SignalConversion generated from: '<S6>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S13>/Merge11' incorporates:
     *  Constant: '<S6>/Constant11'
     *  SignalConversion generated from: '<S6>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* SignalConversion generated from: '<S6>/Climber_Cmd_Direction' incorporates:
     *  Constant: '<S6>/Constant17'
     */
    rtb_Climber_Cmd_Direction = 0;

    /* SignalConversion generated from: '<S6>/Enable_Wheels' incorporates:
     *  Constant: '<S6>/Constant18'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S6>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S6>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S6>/Disable_Wheels' incorporates:
     *  Constant: '<S6>/Constant14'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S6>/Reset_Ballscrew_Zero' incorporates:
     *  Constant: '<S6>/Constant15'
     */
    rtb_rx_i = 0.0;

    /* SignalConversion generated from: '<S6>/Save_Ballscrew_Position' incorporates:
     *  Constant: '<S6>/Constant16'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S6>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S6>/Constant12'
     */
    UnitDelay_e = false;

    /* Merge: '<S13>/Merge12' incorporates:
     *  SignalConversion generated from: '<S6>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* SystemReset for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S3>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S27>/Chart'
       */
      Code_Gen_Model_DW.is_active_c10_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note6 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note7 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Note8 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
      Code_Gen_Model_B.SplineEnable = 0.0;
      Code_Gen_Model_B.CurrentPriorityIndex = 0.0;
      Code_Gen_Model_DW.Timer = 0.0;
      Code_Gen_Model_DW.CloseNoteCounter = 0.0;
      Code_Gen_Model_B.AutoState = 0.0;
      Code_Gen_Model_B.ArmStateRequest = 0.0;
      Code_Gen_Model_B.RelativeMoveForward = 0.0;

      /* End of SystemReset for SubSystem: '<S1>/Autonomous' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Switch: '<S27>/Switch2' incorporates:
     *  Constant: '<S27>/Constant4'
     *  Inport: '<Root>/IsBlueAlliance'
     *  Switch: '<S27>/Switch4'
     */
    if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S27>/Switch3' incorporates:
       *  Constant: '<S27>/Constant4'
       */
      if (Auto_Design_Path > 1.0) {
        /* Switch: '<S27>/Switch2' incorporates:
         *  Constant: '<S27>/Constant5'
         */
        rtb_thetay = 3.0;
      } else {
        /* Switch: '<S27>/Switch2' incorporates:
         *  Constant: '<S27>/Constant6'
         */
        rtb_thetay = 1.0;
      }

      /* End of Switch: '<S27>/Switch3' */
    } else if (Auto_Design_Path > 1.0) {
      /* Switch: '<S27>/Switch4' incorporates:
       *  Constant: '<S27>/Constant7'
       *  Switch: '<S27>/Switch2'
       */
      rtb_thetay = 4.0;
    } else {
      /* Switch: '<S27>/Switch2' incorporates:
       *  Constant: '<S27>/Constant9'
       *  Switch: '<S27>/Switch4'
       */
      rtb_thetay = 2.0;
    }

    /* End of Switch: '<S27>/Switch2' */

    /* Chart: '<S27>/Chart' incorporates:
     *  UnitDelay: '<S11>/Unit Delay'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    if (Code_Gen_Model_DW.is_active_c10_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c10_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_PathPicker;
      Code_Gen_Model_DW.CloseNoteCounter = 0.0;
      Code_Gen_Model_B.RelativeMoveForward = 0.0;
    } else {
      switch (Code_Gen_Model_DW.is_c10_Code_Gen_Model) {
       case Code_Gen_Model_IN_AngleArms:
        Code_Gen_Model_B.ArmStateRequest = 1.0;
        if (Code_Gen_Model_DW.Timer > 1.0) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Move_To_Shoot;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.RelativeMoveForward = 0.5;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_IN_CheckForRobotOrNote:
        Code_Gen_Mo_CheckForRobotOrNote();
        break;

       case Code_Gen_Model_IN_DriveBack:
        if (Code_Gen_Model_DW.Timer > 2.5) {
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_ShootAgain;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_DriveOut:
        if (Code_Gen_Model_DW.Timer > 5.0) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_DriveBack;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.RelativeMoveForward = -1.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_End:
        break;

       case Cod_IN_MoveArms_and_MoveForward:
        Code_Gen_Model_B.ArmStateRequest = 1.0;
        if (Code_Gen_Model_DW.Timer > Auto_Start_Time) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_ShootWODetec;
          Code_Gen_Model_B.AutoState = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Move_To_Shoot:
        if (Code_Gen_Model_DW.Timer > 1.5) {
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_ShootNote;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Note6:
        if (Code_Gen_Model_DW.is_Note6 == Code_Gen_Model_IN_PathToShoot1) {
          Code_Gen_Model_DW.is_Note6 = Code_Gen_Model_IN_Shoot1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;

          /* case IN_Shoot1: */
        } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_oz) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note6 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex == 2U) {
          Code_Gen_Model_DW.exitPortIndex = 0U;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note6_trans;
        }
        break;

       case Code_Gen_Model_IN_Note6_trans:
        Code_Gen_Model_Note6_trans(&Code_Gen_Model_DW.UnitDelay_DSTATE_oz,
          &Code_Gen_Model_DW.UnitDelay_DSTATE_ll);
        break;

       case Code_Gen_Model_IN_Note7:
        if (Code_Gen_Model_DW.is_Note7 == Code_Gen_Model_IN_PathToShoot1) {
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Model_IN_Shoot1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;

          /* case IN_Shoot1: */
        } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_oz) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex_n = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex_n == 2U) {
          Code_Gen_Model_DW.exitPortIndex_n = 0U;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note7_trans;
        }
        break;

       case Code_Gen_Model_IN_Note7_trans:
        if (Code_Gen_Model_DW.CloseNoteCounter == 1.0) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note8_trans;
        } else if (Code_Gen_Model_DW.CloseNoteCounter == 2.0) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note6_trans;
        } else if (!Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Note7;
          Code_Gen_Model_DW.is_Note7 = Code_Gen_Model_IN_PathToShoot1;
          Code_Gen_Model_B.SplineEnable = 1.0;
          Code_Gen_Model_DW.CloseNoteCounter++;
        } else if (!Code_Gen_Model_DW.UnitDelay_DSTATE_oz) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_End;
        }
        break;

       case Code_Gen_Model_IN_Note8:
        if (Code_Gen_Model_DW.is_Note8 == Code_Gen_Model_IN_PathToShoot1) {
          Code_Gen_Model_DW.is_Note8 = Code_Gen_Model_IN_Shoot1;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;

          /* case IN_Shoot1: */
        } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_oz) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_Note8 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.exitPortIndex_h = 2U;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }

        if (Code_Gen_Model_DW.exitPortIndex_h == 2U) {
          Code_Gen_Model_DW.exitPortIndex_h = 0U;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_Note8_trans;
        }
        break;

       case Code_Gen_Model_IN_Note8_trans:
        Code_Gen_Model_Note8_trans(&Code_Gen_Model_DW.UnitDelay_DSTATE_oz,
          &Code_Gen_Model_DW.UnitDelay_DSTATE_ll);
        break;

       case Code_Gen_Model_IN_PathPicker:
        Code_Gen_Model_PathPicker();
        break;

       case Code_Gen_Model_IN_PathToPickUp:
        Code_Gen_Model_PathToPickUp();
        break;

       case Code_Gen_IN_PathToPickUpWODetec:
        Code_Gen_Model_B.AutoState = 1.1;
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) && (Code_Gen_Model_DW.Timer >=
             0.06)) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Reset_SPF;
          Code_Gen_Model_B.SplineEnable = 0.0;
        } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_RunIntake1;
          Code_Gen_Model_B.AutoState = 1.2;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_B.RelativeMoveForward = Auto_Intake_Velocity;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_PathToShoot:
        Code_Gen_Model_PathToShoot();
        break;

       case Code_Gen__IN_PathToShootWODetec:
        Code_Gen_Model_B.AutoState = 1.3;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen_Model_IN_ShootWODetec;
          Code_Gen_Model_B.AutoState = 1.0;
          Code_Gen_Model_B.SplineEnable = 0.0;
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 5.0;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Reset_SPF:
        Code_Gen_Model_DW.is_c10_Code_Gen_Model =
          Code_Gen__IN_PathToShootWODetec;
        Code_Gen_Model_B.AutoState = 1.3;
        Code_Gen_Model_B.SplineEnable = 1.0;
        Code_Gen_Model_B.Intake_Shooter_State_Request = 6.0;
        break;

       case Code_Gen_Model_IN_RunIntake:
        Code_Gen_Model_RunIntake();
        break;

       case Code_Gen_Model_IN_RunIntake1:
        Code_Gen_Model_B.AutoState = 1.2;
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) || (Code_Gen_Model_DW.Timer >=
             4.0)) {
          Code_Gen_Model_B.RelativeMoveForward = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model =
            Code_Gen__IN_PathToShootWODetec;
          Code_Gen_Model_B.AutoState = 1.3;
          Code_Gen_Model_B.SplineEnable = 1.0;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 6.0;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_Shoot:
        Code_Gen_Model_Shoot();
        break;

       case Code_Gen_Model_IN_ShootAgain:
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) || (Code_Gen_Model_DW.Timer >
             10.0)) {
          Code_Gen_Model_B.Intake_Shooter_State_Request = 0.0;
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_Stop;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_ShootNote:
        if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz) || (Code_Gen_Model_DW.Timer >
             10.0)) {
          Code_Gen_Model_DW.is_c10_Code_Gen_Model = Code_Gen_Model_IN_DriveOut;
          Code_Gen_Model_DW.Timer = Code_Gen_Model_t_sample;
          Code_Gen_Model_B.Intake_Shooter_State_Request = 1.0;
          Code_Gen_Model_B.RelativeMoveForward = 0.5;
        } else {
          Code_Gen_Model_DW.Timer += Code_Gen_Model_t_sample;
        }
        break;

       case Code_Gen_Model_IN_ShootWODetec:
        Code_Gen_Model_ShootWODetec(&Code_Gen_Model_DW.UnitDelay_DSTATE_oz);
        break;

       default:
        /* case IN_Stop: */
        break;
      }
    }

    /* End of Chart: '<S27>/Chart' */

    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S29>/Constant'
     *  RelationalOperator: '<S29>/Compare'
     */
    if (Code_Gen_Model_B.AutoState == 1.1) {
      rtb_thetay_a = 2.0;

      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem' incorporates:
       *  ActionPort: '<S34>/Action Port'
       */
      /* If: '<S27>/If' incorporates:
       *  Constant: '<S34>/Constant9'
       *  Merge: '<S27>/Merge'
       *  Selector: '<S34>/Selector'
       *  Selector: '<S34>/Selector1'
       */
      Code_Gen_Model_B.Spline_ID = Code_Gen_Model_ConstP.Constant9_Value
        [((((((int32_T)rtb_thetay_a) - 1) * 10) + ((int32_T)
            Code_Gen_Model_B.CurrentPriorityIndex)) + ((((int32_T)rtb_thetay) -
            1) * 30)) - 1];

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem' */
    } else if (Code_Gen_Model_B.AutoState == 1.3) {
      /* Switch: '<S27>/Switch1' incorporates:
       *  Constant: '<S27>/Constant1'
       */
      rtb_thetay_a = 3.0;

      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem' incorporates:
       *  ActionPort: '<S34>/Action Port'
       */
      /* If: '<S27>/If' incorporates:
       *  Constant: '<S34>/Constant9'
       *  Merge: '<S27>/Merge'
       *  Selector: '<S34>/Selector'
       *  Selector: '<S34>/Selector1'
       */
      Code_Gen_Model_B.Spline_ID = Code_Gen_Model_ConstP.Constant9_Value
        [((((((int32_T)rtb_thetay_a) - 1) * 10) + ((int32_T)
            Code_Gen_Model_B.CurrentPriorityIndex)) + ((((int32_T)rtb_thetay) -
            1) * 30)) - 1];

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S27>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S35>/Action Port'
       */
      /* If: '<S27>/If' incorporates:
       *  Constant: '<S35>/Constant'
       *  Merge: '<S27>/Merge'
       *  SignalConversion generated from: '<S35>/Out1'
       */
      Code_Gen_Model_B.Spline_ID = 1.0;

      /* End of Outputs for SubSystem: '<S27>/If Action Subsystem1' */
    }

    /* End of Switch: '<S27>/Switch' */

    /* Selector: '<S3>/Selector' incorporates:
     *  Constant: '<S3>/Constant20'
     *  Merge: '<S13>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        rtb_Climber_Cmd_Direction = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[rtb_Climber_Cmd_Direction] =
          Code_Gen_Model_ConstP.Constant20_Value[((((int32_T)
          Code_Gen_Model_B.Spline_ID) - 1) * 40) + rtb_Climber_Cmd_Direction];
      }
    }

    /* End of Selector: '<S3>/Selector' */

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S3>/Constant6'
     *  Selector: '<S3>/Selector1'
     */
    Code_Gen_Model_B.Spline_Num_Poses = Code_Gen_Model_ConstP.Constant6_Value
      [((int32_T)Code_Gen_Model_B.Spline_ID) - 1];

    /* Merge: '<S13>/Merge12' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.ArmStateRequest;

    /* Merge: '<S13>/Merge11' incorporates:
     *  SignalConversion generated from: '<S3>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.Intake_Shooter_State_Request;

    /* Merge: '<S13>/Merge4' incorporates:
     *  SignalConversion generated from: '<S3>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.RelativeMoveForward;

    /* Logic: '<S27>/Logical Operator' incorporates:
     *  Constant: '<S31>/Constant'
     *  RelationalOperator: '<S31>/Compare'
     */
    UnitDelay = !(Code_Gen_Model_B.RelativeMoveForward != 0.0);

    /* Logic: '<S27>/Logical Operator2' incorporates:
     *  Constant: '<S33>/Constant'
     *  Logic: '<S27>/Logical Operator1'
     *  RelationalOperator: '<S33>/Compare'
     *  UnitDelay: '<S11>/Unit Delay'
     */
    rtb_Is_Absolute_Steering = (((!Code_Gen_Model_DW.UnitDelay_DSTATE_ll) ||
      (Code_Gen_Model_B.Intake_Shooter_State_Request == 5.0)) || UnitDelay);

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S32>/Compare'
     */
    Code_Gen_Model_B.Spline_Enable = (Code_Gen_Model_B.SplineEnable != 0.0);

    /* Merge: '<S13>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S13>/Merge3' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S13>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S3>/Climber_Cmd_Direction' incorporates:
     *  Constant: '<S3>/Constant17'
     */
    rtb_Climber_Cmd_Direction = 0;

    /* SignalConversion generated from: '<S3>/Enable_Wheels' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S3>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S3>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S3>/Disable_Wheels' incorporates:
     *  Constant: '<S3>/Constant14'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S3>/Reset_Ballscrew_Zero' incorporates:
     *  Constant: '<S3>/Constant15'
     */
    rtb_rx_i = 0.0;

    /* SignalConversion generated from: '<S3>/Save_Ballscrew_Position' incorporates:
     *  Constant: '<S3>/Constant16'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S3>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S3>/Constant4'
     */
    UnitDelay_e = false;

    /* RelationalOperator: '<S26>/Compare' incorporates:
     *  Constant: '<S26>/Constant'
     *  Inport: '<Root>/Line_Sensor_TOF_Range'
     */
    Code_Gen_Model_B.Line_Sensor_Boolean =
      (Code_Gen_Model_U.Line_Sensor_TOF_Range >= FloorDistance);

    /* Merge: '<S13>/Merge1' incorporates:
     *  SignalConversion: '<S3>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Speaker_Angle;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* SignalConversion generated from: '<S20>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Logic: '<S409>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    UnitDelay_e = ((Code_Gen_Model_B.Align_Amp) &&
                   (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S409>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S409>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S409>/Switch15' incorporates:
     *  Switch: '<S409>/Switch16'
     *  Switch: '<S409>/Switch23'
     *  Switch: '<S409>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S409>/Switch15' incorporates:
       *  Constant: '<S409>/Constant9'
       *  Sum: '<S409>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S409>/Switch23' incorporates:
       *  Constant: '<S409>/Constant28'
       *  Sum: '<S409>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (UnitDelay_e) {
      /* Switch: '<S409>/Switch15' incorporates:
       *  Constant: '<S409>/Constant5'
       *  Sum: '<S409>/Add16'
       *  Switch: '<S409>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S409>/Switch23' incorporates:
       *  Constant: '<S409>/Constant27'
       *  Sum: '<S409>/Add22'
       *  Switch: '<S409>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S409>/Switch15' incorporates:
       *  Constant: '<S409>/Constant1'
       *  Switch: '<S409>/Switch1'
       *  Switch: '<S409>/Switch12'
       *  Switch: '<S409>/Switch13'
       *  Switch: '<S409>/Switch14'
       *  Switch: '<S409>/Switch16'
       *  Switch: '<S409>/Switch17'
       *  Switch: '<S409>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S409>/Switch23' incorporates:
       *  Constant: '<S409>/Constant2'
       *  Switch: '<S409>/Switch19'
       *  Switch: '<S409>/Switch20'
       *  Switch: '<S409>/Switch21'
       *  Switch: '<S409>/Switch22'
       *  Switch: '<S409>/Switch24'
       *  Switch: '<S409>/Switch25'
       *  Switch: '<S409>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S409>/Switch15' */

    /* Switch: '<S424>/Switch1' incorporates:
     *  Constant: '<S429>/Constant'
     *  Constant: '<S430>/Constant'
     *  Logic: '<S424>/AND'
     *  RelationalOperator: '<S429>/Compare'
     *  RelationalOperator: '<S430>/Compare'
     *  Switch: '<S424>/Switch2'
     *  UnitDelay: '<S424>/Unit Delay'
     *  UnitDelay: '<S424>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S424>/Switch1' */

    /* Lookup_n-D: '<S412>/Modulation_Drv' incorporates:
     *  Math: '<S412>/Magnitude'
     */
    rtb_thetay = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S422>/Compare' incorporates:
     *  Constant: '<S422>/Constant'
     */
    rtb_Compare_pf = (rtb_thetay == 0.0);

    /* DeadZone: '<S412>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_thetay_a = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_thetay_a = 0.0;
    } else {
      rtb_thetay_a = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S412>/Dead Zone' */

    /* Logic: '<S412>/Logical Operator' incorporates:
     *  Constant: '<S423>/Constant'
     *  RelationalOperator: '<S423>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_thetay_a != 0.0) && rtb_Compare_pf);

    /* Switch: '<S412>/Switch1' incorporates:
     *  Switch: '<S412>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S412>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S13>/Merge3' incorporates:
         *  Constant: '<S412>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S13>/Merge3' incorporates:
         *  Constant: '<S412>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S412>/Switch5' */
    } else if (rtb_Compare_pf) {
      /* Switch: '<S412>/Switch6' incorporates:
       *  Constant: '<S412>/Constant'
       *  Constant: '<S412>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S412>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        y = 0.0;
      } else {
        y = 3.1415926535897931;
      }

      /* Merge: '<S13>/Merge3' incorporates:
       *  Sum: '<S412>/Add1'
       *  Switch: '<S412>/Switch4'
       *  Switch: '<S412>/Switch6'
       *  Trigonometry: '<S412>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + y;
    } else {
      /* Merge: '<S13>/Merge3' incorporates:
       *  Switch: '<S412>/Switch4'
       *  Trigonometry: '<S412>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2);
    }

    /* End of Switch: '<S412>/Switch1' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Translation'
     *  Switch: '<S412>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      UnitDelay = Code_Gen_Model_U.Is_Absolute_Translation;
    } else {
      UnitDelay = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S20>/Switch' */

    /* DeadZone: '<S411>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      y = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      y = 0.0;
    } else {
      y = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S411>/Add' incorporates:
     *  Constant: '<S411>/Constant'
     *  Constant: '<S411>/Constant1'
     *  DeadZone: '<S411>/Dead Zone'
     *  Lookup_n-D: '<S411>/Modulation_Str_Y_Rel'
     *  Product: '<S411>/Product'
     *  Product: '<S411>/Product1'
     *  SignalConversion: '<S9>/Signal Copy5'
     */
    rtb_rx = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
               Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
               Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
              Steering_Relative_Gain) + (y * Steering_Twist_Gain);

    /* RelationalOperator: '<S413>/Compare' incorporates:
     *  Constant: '<S413>/Constant'
     */
    rtb_FixPtRelationalOperator_fh = (rtb_rx == 0.0);

    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S20>/Constant5'
     *  Inport: '<Root>/Is_Absolute_Steering'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = Code_Gen_Model_U.Is_Absolute_Steering;
    } else {
      rtb_Is_Absolute_Steering = rtb_FixPtRelationalOperator_fh;
    }

    /* End of Switch: '<S20>/Switch1' */

    /* Logic: '<S409>/Logical Operator11' */
    rtb_FixPtRelationalOperator_h = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S418>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S418>/Delay Input1'
     *
     * Block description for '<S418>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_m = (((int32_T)rtb_FixPtRelationalOperator_h) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_ft));

    /* Logic: '<S411>/AND2' incorporates:
     *  RelationalOperator: '<S414>/FixPt Relational Operator'
     *  RelationalOperator: '<S415>/FixPt Relational Operator'
     *  RelationalOperator: '<S416>/FixPt Relational Operator'
     *  RelationalOperator: '<S417>/FixPt Relational Operator'
     *  UnitDelay: '<S414>/Delay Input1'
     *  UnitDelay: '<S415>/Delay Input1'
     *  UnitDelay: '<S416>/Delay Input1'
     *  UnitDelay: '<S417>/Delay Input1'
     *
     * Block description for '<S414>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S415>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S416>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S417>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2 = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_gt))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S411>/AND1' incorporates:
     *  Logic: '<S411>/AND3'
     *  Logic: '<S411>/AND7'
     *  UnitDelay: '<S411>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator_fh &&
                 (!rtb_FixPtRelationalOperator_m)) && (rtb_AND2 ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S411>/AND4' incorporates:
     *  Logic: '<S411>/AND5'
     *  Logic: '<S411>/AND8'
     *  UnitDelay: '<S411>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_m = ((rtb_FixPtRelationalOperator_fh &&
      (!rtb_AND2)) && (rtb_FixPtRelationalOperator_m ||
                       (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S411>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_m);

    /* Switch: '<S411>/Switch8' incorporates:
     *  Constant: '<S420>/Constant'
     *  Logic: '<S411>/AND9'
     *  RelationalOperator: '<S419>/FixPt Relational Operator'
     *  RelationalOperator: '<S420>/Compare'
     *  UnitDelay: '<S15>/Unit Delay'
     *  UnitDelay: '<S419>/Delay Input1'
     *
     * Block description for '<S419>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator_fh) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S411>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    }

    /* End of Switch: '<S411>/Switch8' */

    /* Switch: '<S411>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S411>/Switch2' incorporates:
       *  Constant: '<S411>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S411>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S411>/Switch2' */

    /* Logic: '<S409>/Logical Operator' incorporates:
     *  Logic: '<S409>/Logical Operator1'
     *  Logic: '<S409>/Logical Operator13'
     *  UnitDelay: '<S409>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_B.previous_call_was_for_speaker)));

    /* Switch: '<S409>/Switch2' incorporates:
     *  Switch: '<S409>/Switch4'
     *  Switch: '<S409>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S409>/Switch2' */
      Code_Gen_Model_B.AT_Target_Angle = Code_Gen_Model_B.Speaker_Angle;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S409>/Switch2' incorporates:
       *  Constant: '<S409>/Constant14'
       *  Switch: '<S409>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (UnitDelay_e) {
      /* Switch: '<S409>/Switch2' incorporates:
       *  Constant: '<S409>/Constant13'
       *  Switch: '<S409>/Switch4'
       *  Switch: '<S409>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    }

    /* End of Switch: '<S409>/Switch2' */

    /* Switch: '<S411>/Switch4' incorporates:
     *  Constant: '<S411>/Constant5'
     *  Switch: '<S411>/Switch1'
     *  Switch: '<S411>/Switch5'
     *  Switch: '<S411>/Switch6'
     *  Switch: '<S411>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4_g = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S411>/Switch5' incorporates:
       *  Constant: '<S411>/Constant6'
       */
      rtb_Switch4_g = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S411>/Switch6' incorporates:
       *  Constant: '<S411>/Constant7'
       *  Switch: '<S411>/Switch5'
       */
      rtb_Switch4_g = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S411>/Switch7' incorporates:
       *  Constant: '<S411>/Constant8'
       *  Switch: '<S411>/Switch5'
       *  Switch: '<S411>/Switch6'
       */
      rtb_Switch4_g = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_m) {
      /* Switch: '<S411>/Switch1' incorporates:
       *  Switch: '<S411>/Switch5'
       *  Switch: '<S411>/Switch6'
       *  Switch: '<S411>/Switch7'
       */
      rtb_Switch4_g = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S411>/Switch6' incorporates:
       *  Switch: '<S411>/Switch5'
       *  Switch: '<S411>/Switch7'
       *  UnitDelay: '<S411>/Unit Delay1'
       */
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S411>/Switch4' */

    /* Switch: '<S411>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S411>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4_g;
    } else {
      /* Switch: '<S411>/Switch3' incorporates:
       *  Constant: '<S411>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S411>/Switch3' */

    /* Merge: '<S13>/Merge1' incorporates:
     *  Sum: '<S411>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S13>/Merge2' incorporates:
     *  SignalConversion: '<S411>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_rx;

    /* Switch: '<S421>/Switch1' incorporates:
     *  Constant: '<S421>/Constant'
     *  Constant: '<S421>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_rx_i = Boost_Trigger_High_Speed;
    } else {
      rtb_rx_i = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S421>/Switch1' */

    /* Switch: '<S428>/Init' incorporates:
     *  UnitDelay: '<S428>/FixPt Unit Delay1'
     *  UnitDelay: '<S428>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_rx = rtb_rx_i;
    } else {
      rtb_rx = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f2;
    }

    /* End of Switch: '<S428>/Init' */

    /* Sum: '<S426>/Sum1' */
    rtb_rx_i -= rtb_rx;

    /* Switch: '<S427>/Switch2' incorporates:
     *  Constant: '<S425>/Constant1'
     *  Constant: '<S425>/Constant3'
     *  RelationalOperator: '<S427>/LowerRelop1'
     *  RelationalOperator: '<S427>/UpperRelop'
     *  Switch: '<S427>/Switch'
     */
    if (rtb_rx_i > Boost_Trigger_Increasing_Limit) {
      rtb_rx_i = Boost_Trigger_Increasing_Limit;
    } else if (rtb_rx_i < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S427>/Switch' incorporates:
       *  Constant: '<S425>/Constant1'
       */
      rtb_rx_i = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S427>/Switch2' */

    /* Sum: '<S426>/Sum' */
    rtb_Sum_jt = rtb_rx_i + rtb_rx;

    /* Switch: '<S412>/Switch' incorporates:
     *  Switch: '<S412>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Gain: '<S412>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_thetay_a;
    } else if (rtb_Compare_pf) {
      /* Merge: '<S13>/Merge4' incorporates:
       *  Gain: '<S412>/Gain2'
       *  Math: '<S412>/Magnitude1'
       *  Switch: '<S412>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S421>/Product' incorporates:
       *  Switch: '<S412>/Switch2'
       */
      Rot_Mat_idx_0 = rtb_thetay * rtb_Sum_jt;

      /* Saturate: '<S421>/Saturation' incorporates:
       *  Switch: '<S412>/Switch2'
       */
      if (Rot_Mat_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (Rot_Mat_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S13>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Rot_Mat_idx_0;
      }

      /* End of Saturate: '<S421>/Saturation' */
    }

    /* End of Switch: '<S412>/Switch' */

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S20>/Constant3'
     *  SignalConversion generated from: '<S20>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S20>/Constant9'
     *  SignalConversion generated from: '<S20>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S13>/Merge10' incorporates:
     *  Constant: '<S20>/Constant1'
     *  SignalConversion generated from: '<S20>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S20>/Enable_Wheels' incorporates:
     *  Constant: '<S20>/Constant6'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S20>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S20>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S20>/Disable_Wheels' incorporates:
     *  Constant: '<S20>/Constant14'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S20>/Reset_Ballscrew_Zero' incorporates:
     *  Constant: '<S20>/Constant15'
     */
    rtb_rx_i = 0.0;

    /* SignalConversion generated from: '<S20>/Save_Ballscrew_Position' incorporates:
     *  Constant: '<S20>/Constant16'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S20>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    UnitDelay_e = false;

    /* Merge: '<S13>/Merge11' incorporates:
     *  SignalConversion generated from: '<S20>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h =
      Code_Gen_Model_B.State_Request_Intake_Shooter;

    /* Merge: '<S13>/Merge12' incorporates:
     *  SignalConversion generated from: '<S20>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = Code_Gen_Model_B.State_Request_Arm;

    /* SignalConversion: '<S20>/Signal Copy' */
    rtb_Climber_Cmd_Direction = (int32_T)Code_Gen_Model_B.Climber_Cmd_Direction;

    /* Update for UnitDelay: '<S424>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S424>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S419>/Delay Input1'
     *
     * Block description for '<S419>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_FixPtRelationalOperator_fh;

    /* Update for UnitDelay: '<S418>/Delay Input1'
     *
     * Block description for '<S418>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = rtb_FixPtRelationalOperator_h;

    /* Update for UnitDelay: '<S414>/Delay Input1'
     *
     * Block description for '<S414>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S415>/Delay Input1'
     *
     * Block description for '<S415>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S416>/Delay Input1'
     *
     * Block description for '<S416>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_gt =
      Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S417>/Delay Input1'
     *
     * Block description for '<S417>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S411>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S411>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_m;

    /* Update for UnitDelay: '<S411>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4_g;

    /* Update for UnitDelay: '<S428>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S428>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S428>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f2 = rtb_Sum_jt;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S21>/Unit Delay'
       *  UnitDelay: '<S431>/Delay Input1'
       *  UnitDelay: '<S432>/Delay Input1'
       *  UnitDelay: '<S433>/Delay Input1'
       *  UnitDelay: '<S434>/Delay Input1'
       *  UnitDelay: '<S435>/Delay Input1'
       *
       * Block description for '<S431>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S432>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S433>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S434>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S435>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.DelayInput1_DSTATE_e = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_ir = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_n = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_a = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Test' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* SignalConversion generated from: '<S21>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S13>/Merge1' incorporates:
     *  Constant: '<S21>/Constant1'
     *  SignalConversion generated from: '<S21>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S13>/Merge2' incorporates:
     *  Constant: '<S21>/Constant2'
     *  SignalConversion generated from: '<S21>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S13>/Merge3' incorporates:
     *  Constant: '<S21>/Constant3'
     *  SignalConversion generated from: '<S21>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S13>/Merge4' incorporates:
     *  Constant: '<S21>/Constant4'
     *  SignalConversion generated from: '<S21>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S21>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S21>/Constant5'
     */
    UnitDelay = false;

    /* SignalConversion generated from: '<S21>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S21>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S13>/Merge7' incorporates:
     *  Constant: '<S21>/Constant7'
     *  SignalConversion generated from: '<S21>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S13>/Merge9' incorporates:
     *  Constant: '<S21>/Constant9'
     *  SignalConversion generated from: '<S21>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S13>/Merge10' incorporates:
     *  Constant: '<S21>/Constant12'
     *  SignalConversion generated from: '<S21>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Merge: '<S13>/Merge11' incorporates:
     *  Constant: '<S21>/Constant10'
     *  SignalConversion generated from: '<S21>/State_Request_Intake_Shooter'
     */
    Code_Gen_Model_B.State_Request_Intake_Shooter_h = 0.0;

    /* Merge: '<S13>/Merge12' incorporates:
     *  Constant: '<S21>/Constant11'
     *  SignalConversion generated from: '<S21>/State_Request_Arm'
     */
    Code_Gen_Model_B.State_Request_Arm_d = 0.0;

    /* RelationalOperator: '<S431>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Joystick_Left_B11'
     *  UnitDelay: '<S431>/Delay Input1'
     *
     * Block description for '<S431>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_fh = (Code_Gen_Model_U.Joystick_Left_B11 >
      Code_Gen_Model_DW.DelayInput1_DSTATE_e);

    /* RelationalOperator: '<S433>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Joystick_Left_B13'
     *  UnitDelay: '<S433>/Delay Input1'
     *
     * Block description for '<S433>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_h = (Code_Gen_Model_U.Joystick_Left_B13 >
      Code_Gen_Model_DW.DelayInput1_DSTATE_n);

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/Constant14'
     *  Switch: '<S21>/Switch1'
     *  UnitDelay: '<S21>/Unit Delay'
     */
    if (rtb_FixPtRelationalOperator_h) {
      UnitDelay_e = true;
    } else if (rtb_FixPtRelationalOperator_fh) {
      /* Switch: '<S21>/Switch1' incorporates:
       *  Constant: '<S21>/Constant13'
       */
      UnitDelay_e = false;
    } else {
      UnitDelay_e = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S21>/Switch' */

    /* DataTypeConversion: '<S21>/Cast To Boolean3' */
    rtb_thetay = rtb_FixPtRelationalOperator_h;

    /* DataTypeConversion: '<S21>/Cast To Boolean1' */
    rtb_thetay_a = rtb_FixPtRelationalOperator_fh;

    /* DataTypeConversion: '<S21>/Cast To Boolean2' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *  RelationalOperator: '<S432>/FixPt Relational Operator'
     *  UnitDelay: '<S432>/Delay Input1'
     *
     * Block description for '<S432>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_rx = (Code_Gen_Model_U.Joystick_Left_B12 >
              Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* DataTypeConversion: '<S21>/Cast To Boolean4' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  RelationalOperator: '<S434>/FixPt Relational Operator'
     *  UnitDelay: '<S434>/Delay Input1'
     *
     * Block description for '<S434>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_rx_i = (Code_Gen_Model_U.Gamepad_B3_X >
                Code_Gen_Model_DW.DelayInput1_DSTATE_a);

    /* DataTypeConversion: '<S21>/Cast To Boolean5' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  RelationalOperator: '<S435>/FixPt Relational Operator'
     *  UnitDelay: '<S435>/Delay Input1'
     *
     * Block description for '<S435>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_thetay_n = (Code_Gen_Model_U.Gamepad_B2_B >
                    Code_Gen_Model_DW.DelayInput1_DSTATE_g);

    /* SignalConversion: '<S21>/Signal Copy' */
    rtb_Climber_Cmd_Direction = (int32_T)Code_Gen_Model_B.Climber_Cmd_Direction;

    /* Update for UnitDelay: '<S431>/Delay Input1' incorporates:
     *  Inport: '<Root>/Joystick_Left_B11'
     *
     * Block description for '<S431>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B11;

    /* Update for UnitDelay: '<S21>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = UnitDelay_e;

    /* Update for UnitDelay: '<S433>/Delay Input1' incorporates:
     *  Inport: '<Root>/Joystick_Left_B13'
     *
     * Block description for '<S433>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;

    /* Update for UnitDelay: '<S432>/Delay Input1' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *
     * Block description for '<S432>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Joystick_Left_B12;

    /* Update for UnitDelay: '<S434>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S434>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S435>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S435>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_U.Gamepad_B2_B;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    y = 0.0;
  } else {
    y = 3.1415926535897931;
  }

  /* Sum: '<S8>/Add' incorporates:
   *  Switch: '<S8>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad + y;

  /* If: '<S17>/If' incorporates:
   *  Constant: '<S247>/Constant'
   *  Logic: '<S247>/AND'
   *  MATLAB Function: '<S197>/Find closest index to curve'
   *  Product: '<S247>/Product'
   *  RelationalOperator: '<S247>/Relational Operator'
   *  RelationalOperator: '<S247>/Relational Operator1'
   *  Selector: '<S247>/Selector'
   *  Selector: '<S247>/Selector1'
   *  Selector: '<S248>/Selector'
   *  Sum: '<S247>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S200>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S203>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S205>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S200>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S17>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S195>/Action Port'
       */
      /* InitializeConditions for If: '<S17>/If' incorporates:
       *  UnitDelay: '<S195>/Unit Delay'
       *  UnitDelay: '<S196>/Unit Delay'
       *  UnitDelay: '<S198>/Unit Delay'
       *  UnitDelay: '<S198>/Unit Delay1'
       *  UnitDelay: '<S248>/Unit Delay'
       *  UnitDelay: '<S248>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S17>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S17>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S195>/Action Port'
     */
    /* Selector: '<S196>/Selector1' incorporates:
     *  Merge: '<S13>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S196>/Selector1' */

    /* Lookup_n-D: '<S195>/Capture Radius' incorporates:
     *  UnitDelay: '<S195>/Unit Delay'
     */
    rtb_Switch1_p2 = look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled5,
      Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S196>/Matrix Concatenate2' */
    rtb_Akxhatkk1[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S196>/Matrix Concatenate2' */
    rtb_Akxhatkk1[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S200>/If' incorporates:
     *  RelationalOperator: '<S200>/ '
     *  UnitDelay: '<S196>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S203>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S205>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S200>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S203>/Action Port'
       */
      /* InitializeConditions for If: '<S200>/If' incorporates:
       *  UnitDelay: '<S203>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S200>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S200>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S203>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S203>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S206>/Action Port'
       */
      /* If: '<S203>/If' incorporates:
       *  Selector: '<S196>/Selector1'
       *  Selector: '<S203>/Selector'
       *  Selector: '<S206>/Selector'
       */
      rtb_Sin4 = rtb_Ref_Poses[((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_gh)
        - 1];

      /* End of Outputs for SubSystem: '<S203>/Increment_If_Rectangle_Check' */

      /* Sum: '<S203>/Minus' incorporates:
       *  Concatenate: '<S196>/Matrix Concatenate2'
       *  Selector: '<S203>/Selector'
       */
      rtb_Minus_n[0] = rtb_Akxhatkk1[0] - rtb_Sin4;

      /* Outputs for IfAction SubSystem: '<S203>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S206>/Action Port'
       */
      /* If: '<S203>/If' incorporates:
       *  Selector: '<S196>/Selector1'
       *  Selector: '<S203>/Selector'
       *  Selector: '<S206>/Selector'
       *  Sum: '<S203>/Minus'
       */
      rtb_Sum_jt = rtb_Ref_Poses[((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_gh)
        + 9];

      /* End of Outputs for SubSystem: '<S203>/Increment_If_Rectangle_Check' */

      /* Sum: '<S203>/Minus' incorporates:
       *  Concatenate: '<S196>/Matrix Concatenate2'
       *  Selector: '<S203>/Selector'
       */
      rtb_Minus_n[1] = rtb_Akxhatkk1[1] - rtb_Sum_jt;

      /* Math: '<S203>/Hypot' */
      rtb_Switch2 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S203>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S203>/Switch' incorporates:
       *  Logic: '<S203>/AND'
       *  Logic: '<S203>/OR'
       *  RelationalOperator: '<S203>/Relational Operator'
       *  UnitDelay: '<S203>/Unit Delay'
       */
      UnitDelay = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) || ((rtb_Switch2 <=
        rtb_Switch1_p2) && rtb_Is_Absolute_Steering));

      /* If: '<S203>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!UnitDelay) {
        if (!rtb_Is_Absolute_Steering) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S205>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S203>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S205>/Action Port'
         */
        /* If: '<S205>/If' incorporates:
         *  RelationalOperator: '<S205>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S205>/Is_Last_Point' incorporates:
           *  ActionPort: '<S208>/Action Port'
           */
          /* InitializeConditions for If: '<S205>/If' incorporates:
           *  UnitDelay: '<S208>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S205>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S205>/Is_Last_Point' incorporates:
           *  ActionPort: '<S208>/Action Port'
           */
          /* Switch: '<S208>/Switch' incorporates:
           *  Constant: '<S210>/Constant'
           *  Logic: '<S208>/OR'
           *  RelationalOperator: '<S210>/Compare'
           *  UnitDelay: '<S208>/Unit Delay'
           */
          rtb_FixPtRelationalOperator_h = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n)
            || (rtb_Switch2 <= Spline_Stop_Radius));

          /* If: '<S208>/If' */
          if (rtb_FixPtRelationalOperator_h) {
            /* Outputs for IfAction SubSystem: '<S208>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S211>/Action Port'
             */
            /* Merge: '<S200>/Merge2' incorporates:
             *  Constant: '<S211>/Constant'
             *  SignalConversion generated from: '<S211>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S211>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S211>/Constant1'
             */
            rtb_FixPtRelationalOperator_fh = false;

            /* End of Outputs for SubSystem: '<S208>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S208>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S212>/Action Port'
             */
            /* Merge: '<S200>/Merge2' incorporates:
             *  Constant: '<S212>/Constant'
             *  SignalConversion generated from: '<S212>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S212>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S212>/Constant1'
             */
            rtb_FixPtRelationalOperator_fh = true;

            /* End of Outputs for SubSystem: '<S208>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S208>/If' */

          /* Merge: '<S200>/Merge4' incorporates:
           *  SignalConversion: '<S208>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S208>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_FixPtRelationalOperator_h;

          /* End of Outputs for SubSystem: '<S205>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S205>/Increment_Search' incorporates:
           *  ActionPort: '<S207>/Action Port'
           */
          /* Merge: '<S200>/Merge2' incorporates:
           *  Constant: '<S207>/Constant'
           *  SignalConversion generated from: '<S207>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S207>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S207>/Constant1'
           */
          rtb_FixPtRelationalOperator_fh = false;

          /* Merge: '<S200>/Merge4' incorporates:
           *  Constant: '<S209>/FixPt Constant'
           *  SignalConversion: '<S207>/Signal Copy'
           *  Sum: '<S209>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S205>/Increment_Search' */
        }

        /* End of If: '<S205>/If' */
        /* End of Outputs for SubSystem: '<S203>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S203>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S206>/Action Port'
         */
        /* Sum: '<S213>/FixPt Sum1' incorporates:
         *  Constant: '<S213>/FixPt Constant'
         */
        rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S206>/Selector1' incorporates:
         *  Selector: '<S196>/Selector1'
         */
        rtb_Product2_f = rtb_Ref_Poses[((int32_T)rtb_Switch2) - 1];

        /* Sum: '<S214>/Subtract' incorporates:
         *  Selector: '<S206>/Selector1'
         *  Sum: '<S214>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Product2_f - rtb_Sin4;

        /* Selector: '<S206>/Selector1' incorporates:
         *  Selector: '<S196>/Selector1'
         */
        rtb_Switch2 = rtb_Ref_Poses[((int32_T)rtb_Switch2) + 9];

        /* Sum: '<S214>/Subtract' incorporates:
         *  Selector: '<S206>/Selector1'
         *  Sum: '<S214>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Switch2 - rtb_Sum_jt;

        /* Math: '<S214>/Hypot' */
        rtb_Switch4_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S214>/Divide' */
        rtb_Product2_l = rtb_Minus_n[1];

        /* UnaryMinus: '<S214>/Unary Minus' */
        rtb_rx_l = rtb_Minus_n[0];

        /* Product: '<S214>/Product' incorporates:
         *  Product: '<S214>/Divide'
         *  UnaryMinus: '<S214>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Product2_l / rtb_Switch4_g) * rtb_Switch1_p2;
        rtb_Minus_n[1] = ((-rtb_rx_l) / rtb_Switch4_g) * rtb_Switch1_p2;

        /* Sum: '<S214>/Add1' incorporates:
         *  Sum: '<S214>/Add2'
         *  Sum: '<S214>/Minus'
         */
        rtb_rx_l = rtb_Product2_f - rtb_Minus_n[0];

        /* Sum: '<S214>/Minus4' incorporates:
         *  Sum: '<S214>/Add2'
         *  Sum: '<S214>/Minus'
         */
        rtb_Product2_f = (rtb_Product2_f + rtb_Minus_n[0]) - rtb_rx_l;

        /* Sum: '<S214>/Minus5' incorporates:
         *  Concatenate: '<S196>/Matrix Concatenate2'
         *  Sum: '<S214>/Minus'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Akxhatkk1[0] - rtb_rx_l;

        /* Sum: '<S214>/Add' incorporates:
         *  Sum: '<S214>/Add2'
         *  Sum: '<S214>/Minus1'
         */
        rtb_Product2_l = rtb_Sin4 - rtb_Minus_n[0];

        /* Sum: '<S214>/Minus' incorporates:
         *  Sum: '<S214>/Minus1'
         */
        rtb_rx_l -= rtb_Product2_l;

        /* DotProduct: '<S214>/Dot Product' incorporates:
         *  Concatenate: '<S196>/Matrix Concatenate2'
         *  Sum: '<S214>/Minus'
         *  Sum: '<S214>/Minus1'
         *  Sum: '<S214>/Minus5'
         */
        rtb_Switch4_g = (rtb_Akxhatkk1[0] - rtb_Product2_l) * rtb_rx_l;

        /* DotProduct: '<S214>/Dot Product1' incorporates:
         *  Sum: '<S214>/Minus'
         */
        rtb_Sin4 = rtb_rx_l * rtb_rx_l;

        /* DotProduct: '<S214>/Dot Product2' incorporates:
         *  Sum: '<S214>/Minus4'
         *  Sum: '<S214>/Minus5'
         */
        rtb_MatrixConcatenate_b_idx_1 = rtb_Product2_f *
          rtb_MatrixConcatenate_b_idx_0;

        /* DotProduct: '<S214>/Dot Product3' incorporates:
         *  Sum: '<S214>/Minus4'
         */
        rtb_Minus_k_idx_0 = rtb_Product2_f * rtb_Product2_f;

        /* Sum: '<S214>/Add1' incorporates:
         *  Sum: '<S214>/Add2'
         *  Sum: '<S214>/Minus'
         */
        rtb_rx_l = rtb_Switch2 - rtb_Minus_n[1];

        /* Sum: '<S214>/Minus4' incorporates:
         *  Sum: '<S214>/Add2'
         *  Sum: '<S214>/Minus'
         */
        rtb_Product2_f = (rtb_Switch2 + rtb_Minus_n[1]) - rtb_rx_l;

        /* Sum: '<S214>/Minus5' incorporates:
         *  Concatenate: '<S196>/Matrix Concatenate2'
         *  Sum: '<S214>/Minus'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Akxhatkk1[1] - rtb_rx_l;

        /* Sum: '<S214>/Add' incorporates:
         *  Sum: '<S214>/Add2'
         *  Sum: '<S214>/Minus1'
         */
        rtb_Product2_l = rtb_Sum_jt - rtb_Minus_n[1];

        /* Sum: '<S214>/Minus' incorporates:
         *  Sum: '<S214>/Minus1'
         */
        rtb_rx_l -= rtb_Product2_l;

        /* DotProduct: '<S214>/Dot Product' incorporates:
         *  Concatenate: '<S196>/Matrix Concatenate2'
         *  Sum: '<S214>/Minus'
         *  Sum: '<S214>/Minus1'
         *  Sum: '<S214>/Minus5'
         */
        rtb_Switch4_g += (rtb_Akxhatkk1[1] - rtb_Product2_l) * rtb_rx_l;

        /* RelationalOperator: '<S215>/Compare' incorporates:
         *  Constant: '<S215>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Switch4_g >= 0.0);

        /* RelationalOperator: '<S214>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S214>/Dot Product1'
         *  Sum: '<S214>/Minus'
         */
        rtb_FixPtRelationalOperator_fh = (rtb_Switch4_g <= ((rtb_rx_l * rtb_rx_l)
          + rtb_Sin4));

        /* DotProduct: '<S214>/Dot Product2' incorporates:
         *  Sum: '<S214>/Minus4'
         *  Sum: '<S214>/Minus5'
         */
        rtb_Switch4_g = (rtb_Product2_f * rtb_MatrixConcatenate_b_idx_0) +
          rtb_MatrixConcatenate_b_idx_1;

        /* Merge: '<S200>/Merge4' incorporates:
         *  Constant: '<S216>/Constant'
         *  DataTypeConversion: '<S206>/Data Type Conversion'
         *  DotProduct: '<S214>/Dot Product3'
         *  Logic: '<S214>/AND'
         *  RelationalOperator: '<S214>/LessThanOrEqual1'
         *  RelationalOperator: '<S216>/Compare'
         *  Sum: '<S206>/Add'
         *  Sum: '<S214>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)
          (((rtb_Is_Absolute_Steering && rtb_FixPtRelationalOperator_fh) &&
            (rtb_Switch4_g >= 0.0)) && (rtb_Switch4_g <= ((rtb_Product2_f *
          rtb_Product2_f) + rtb_Minus_k_idx_0)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S200>/Merge2' incorporates:
         *  Constant: '<S206>/Constant2'
         *  SignalConversion generated from: '<S206>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S206>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S206>/Constant1'
         */
        rtb_FixPtRelationalOperator_fh = false;

        /* End of Outputs for SubSystem: '<S203>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S203>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S204>/Action Port'
         */
        /* Merge: '<S200>/Merge2' incorporates:
         *  Constant: '<S204>/Constant2'
         *  SignalConversion generated from: '<S204>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S204>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S204>/Constant1'
         */
        rtb_FixPtRelationalOperator_fh = false;

        /* Merge: '<S200>/Merge4' incorporates:
         *  SignalConversion generated from: '<S204>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S203>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S200>/Merge1' incorporates:
       *  Constant: '<S203>/Constant'
       *  SignalConversion generated from: '<S203>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S203>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = UnitDelay;

      /* End of Outputs for SubSystem: '<S200>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S200>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S202>/Action Port'
       */
      /* Merge: '<S200>/Merge1' incorporates:
       *  Constant: '<S202>/Constant'
       *  SignalConversion generated from: '<S202>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S200>/Merge2' incorporates:
       *  Constant: '<S202>/Constant1'
       *  SignalConversion generated from: '<S202>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S202>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S202>/Constant2'
       */
      rtb_FixPtRelationalOperator_fh = false;

      /* Merge: '<S200>/Merge4' incorporates:
       *  SignalConversion generated from: '<S202>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S200>/Escape_Auto_Driving' */
    }

    /* End of If: '<S200>/If' */

    /* If: '<S196>/If1' */
    if (!rtb_FixPtRelationalOperator_fh) {
      /* Outputs for IfAction SubSystem: '<S196>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S201>/Action Port'
       */
      /* Bias: '<S217>/Add Constant' incorporates:
       *  Bias: '<S217>/Bias'
       *  Sum: '<S217>/Subtract'
       */
      rtb_Switch2 = ((Code_Gen_Model_B.Spline_Num_Poses -
                      Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S217>/Selector4' incorporates:
       *  Bias: '<S217>/Bias1'
       *  Constant: '<S219>/FixPt Constant'
       *  Sum: '<S219>/FixPt Sum1'
       */
      rtb_Akxhatkk1[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Akxhatkk1[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* Selector: '<S217>/Selector4' */
      s222_iter = ((int32_T)rtb_Akxhatkk1[1]) - ((int32_T)rtb_Akxhatkk1[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s222_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;
      rtb_Bias1_p = (int32_T)rtb_Akxhatkk1[0];

      /* Concatenate: '<S217>/Matrix Concatenate' incorporates:
       *  Bias: '<S217>/Add Constant1'
       *  Gain: '<S220>/Gain'
       *  Gain: '<S221>/Gain'
       *  Selector: '<S196>/Selector1'
       *  Selector: '<S217>/Selector'
       *  Selector: '<S217>/Selector1'
       *  Selector: '<S217>/Selector2'
       *  Selector: '<S217>/Selector3'
       *  Sum: '<S220>/Subtract'
       *  Sum: '<S221>/Subtract'
       */
      rtb_Assignment[0] = (2.0 * rtb_Ref_Poses[0]) - rtb_Ref_Poses[1];
      rtb_Assignment[12] = (2.0 * rtb_Ref_Poses[10]) - rtb_Ref_Poses[11];
      for (i = 0; i < 10; i++) {
        rtb_Assignment[i + 1] = rtb_Ref_Poses[i];
        rtb_Assignment[i + 13] = rtb_Ref_Poses[i + 10];
      }

      for (i = 0; i < 2; i++) {
        rtb_Assignment[(12 * i) + 11] = (rtb_Ref_Poses[((10 * i) + ((int32_T)
          Code_Gen_Model_B.Spline_Num_Poses)) - 1] * 2.0) - rtb_Ref_Poses
          [(((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) + (10 * i)) - 1];

        /* Selector: '<S217>/Selector4' incorporates:
         *  Bias: '<S217>/Add Constant1'
         *  Gain: '<S220>/Gain'
         *  Selector: '<S217>/Selector'
         *  Selector: '<S217>/Selector1'
         *  Sum: '<S220>/Subtract'
         */
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s222_iter;
             rtb_Num_Segments++) {
          rtb_Selector4[rtb_Num_Segments + (Code_Gen_Model_DW.Selector4_DIMS1[0]
            * i)] = rtb_Assignment[((rtb_Num_Segments + rtb_Bias1_p) + (12 * i))
            - 1];
        }
      }

      /* End of Concatenate: '<S217>/Matrix Concatenate' */

      /* Assignment: '<S217>/Assignment' incorporates:
       *  Selector: '<S217>/Selector4'
       */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));
      s222_iter = Code_Gen_Model_DW.Selector4_DIMS1[0];
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (rtb_Bias1_p = 0; rtb_Bias1_p < s222_iter; rtb_Bias1_p++) {
          rtb_Assignment[rtb_Bias1_p + i] = rtb_Selector4
            [(Code_Gen_Model_DW.Selector4_DIMS1[0] * rtb_Num_Segments) +
            rtb_Bias1_p];
        }

        i += 12;
      }

      /* End of Assignment: '<S217>/Assignment' */

      /* Outputs for Iterator SubSystem: '<S218>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S222>/While Iterator'
       */
      s222_iter = 1;
      do {
        rtb_FeedForward = rtb_Assignment[s222_iter + 1];
        rtb_Akxhatkk1[0] = rtb_FeedForward - rtb_Assignment[s222_iter - 1];
        rtb_Minus_n[0] = rtb_Assignment[s222_iter] - rtb_Assignment[s222_iter +
          2];
        rtb_Add2_f[0] = rtb_FeedForward - rtb_Assignment[s222_iter];
        rtb_FeedForward = rtb_Assignment[s222_iter + 13];
        rtb_Akxhatkk1[1] = rtb_FeedForward - rtb_Assignment[s222_iter + 11];
        rtb_Sin4 = rtb_Assignment[s222_iter + 12];
        rtb_Minus_n[1] = rtb_Sin4 - rtb_Assignment[s222_iter + 14];
        rtb_Add2_f[1] = rtb_FeedForward - rtb_Sin4;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch4_g = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Sum_jt = rt_powd_snf(rtb_Switch4_g, 2.0);
          rtb_rx_l = rt_powd_snf(rtb_Switch4_g, 3.0);
          rtb_Product2_l = (rtb_Switch4_g - (2.0 * rtb_Sum_jt)) + rtb_rx_l;
          rtb_Product2_f = rtb_Sum_jt - rtb_rx_l;
          rtb_rx_l = (3.0 * rtb_Sum_jt) - (2.0 * rtb_rx_l);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Akxhatkk1[0] * rtb_Product2_l)
            + (rtb_Minus_n[0] * rtb_Product2_f)) * 0.0) + (rtb_Add2_f[0] *
            rtb_rx_l)) + rtb_Assignment[s222_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Akxhatkk1[1] * rtb_Product2_l)
            + (rtb_Minus_n[1] * rtb_Product2_f)) * 0.0) + (rtb_Add2_f[1] *
            rtb_rx_l)) + rtb_Sin4;
          rtb_Product2_l = ((3.0 * rtb_Sum_jt) - (4.0 * rtb_Switch4_g)) + 1.0;
          rtb_Product2_f = (2.0 * rtb_Switch4_g) - (3.0 * rtb_Sum_jt);
          rtb_Sum_jt = (rtb_Switch4_g - rtb_Sum_jt) * 6.0;
          rtb_rx_l = (((rtb_Akxhatkk1[0] * rtb_Product2_l) + (rtb_Minus_n[0] *
            rtb_Product2_f)) * 0.0) + (rtb_Add2_f[0] * rtb_Sum_jt);
          rtb_Minus_k_idx_0 = rtb_rx_l;
          Rot_Mat_idx_0 = rtb_rx_l;
          rtb_rx_l = (((rtb_Akxhatkk1[1] * rtb_Product2_l) + (rtb_Minus_n[1] *
            rtb_Product2_f)) * 0.0) + (rtb_Add2_f[1] * rtb_Sum_jt);
          rtb_Sum_jt = (6.0 * rtb_Switch4_g) - 4.0;
          rtb_Product2_l = (-6.0 * rtb_Switch4_g) + 2.0;
          rtb_Switch4_g = (-12.0 * rtb_Switch4_g) + 6.0;
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs((((((rtb_Akxhatkk1[1] *
            rtb_Sum_jt) + (rtb_Minus_n[1] * rtb_Product2_l)) * 0.0) +
            (rtb_Add2_f[1] * rtb_Switch4_g)) * Rot_Mat_idx_0) -
            (((((rtb_Akxhatkk1[0] * rtb_Sum_jt) + (rtb_Minus_n[0] *
            rtb_Product2_l)) * 0.0) + (rtb_Add2_f[0] * rtb_Switch4_g)) *
             rtb_rx_l)) / rt_powd_snf(rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_rx_l),
            3.0);
        }

        if (s222_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s222_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch4_g = rtb_Switch2 - ((real_T)s222_iter);
        rtb_Num_Segments = s222_iter;
        s222_iter++;
      } while ((rtb_Switch4_g >= 4.0) && (s222_iter <= 3));

      /* End of Outputs for SubSystem: '<S218>/Sampling_Loop' */

      /* SignalConversion generated from: '<S201>/Position_and_Curvature' incorporates:
       *  Assignment: '<S222>/Assignment'
       *  Merge: '<S196>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S196>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S196>/If Action Subsystem' incorporates:
       *  ActionPort: '<S199>/Action Port'
       */
      /* Product: '<S199>/Product' incorporates:
       *  Selector: '<S196>/Selector'
       *  Selector: '<S196>/Selector1'
       */
      rtb_Switch4_g = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S199>/Product1' incorporates:
       *  Selector: '<S196>/Selector'
       *  Selector: '<S196>/Selector1'
       */
      rtb_Switch2 = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) +
        9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S199>/Product' incorporates:
         *  Constant: '<S199>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch4_g;

        /* Product: '<S199>/Product1' incorporates:
         *  Constant: '<S199>/Constant2'
         *  Product: '<S199>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch2;
      }

      /* Assignment: '<S199>/Assignment' incorporates:
       *  Concatenate: '<S199>/Matrix Concatenate'
       *  Merge: '<S196>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S199>/Assignment' */

      /* SignalConversion generated from: '<S199>/Num_Segments' incorporates:
       *  Constant: '<S199>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S196>/If Action Subsystem' */
    }

    /* End of If: '<S196>/If1' */

    /* Concatenate: '<S197>/Matrix Concatenate' incorporates:
     *  Merge: '<S196>/Merge'
     *  Selector: '<S197>/Selector'
     *  Selector: '<S197>/Selector1'
     *  Selector: '<S197>/Selector3'
     */
    for (i = 0; i < 50; i++) {
      rtb_MatrixConcatenate_o[i] = rtb_Position_and_Curvature[i];
      rtb_MatrixConcatenate_o[i + 50] = rtb_Position_and_Curvature[i + 150];
      rtb_MatrixConcatenate_o[i + 100] = rtb_Position_and_Curvature[i + 300];
      rtb_MatrixConcatenate_o[i + 150] = rtb_Position_and_Curvature[i + 50];
      rtb_MatrixConcatenate_o[i + 200] = rtb_Position_and_Curvature[i + 200];
      rtb_MatrixConcatenate_o[i + 250] = rtb_Position_and_Curvature[i + 350];
      rtb_MatrixConcatenate_o[i + 300] = rtb_Position_and_Curvature[i + 100];
      rtb_MatrixConcatenate_o[i + 350] = rtb_Position_and_Curvature[i + 250];
      rtb_MatrixConcatenate_o[i + 400] = rtb_Position_and_Curvature[i + 400];
    }

    /* End of Concatenate: '<S197>/Matrix Concatenate' */

    /* MATLAB Function: '<S197>/Distance Along Curve' incorporates:
     *  Concatenate: '<S197>/Matrix Concatenate'
     *  Selector: '<S197>/Selector4'
     *  Selector: '<S197>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s222_iter = 0; s222_iter < 149; s222_iter++) {
      /* Outputs for Iterator SubSystem: '<S218>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S222>/While Iterator'
       */
      rtb_Assignment_d[s222_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s222_iter + 1] -
         rtb_MatrixConcatenate_o[s222_iter], rtb_MatrixConcatenate_o[s222_iter +
         151] - rtb_MatrixConcatenate_o[s222_iter + 150]) +
        rtb_Assignment_d[s222_iter];

      /* End of Outputs for SubSystem: '<S218>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S197>/Distance Along Curve' */

    /* MATLAB Function: '<S197>/Find closest index to curve' incorporates:
     *  Concatenate: '<S197>/Matrix Concatenate'
     *  Selector: '<S197>/Selector4'
     *  Selector: '<S197>/Selector5'
     *  Selector: '<S248>/Selector'
     */
    for (s222_iter = 0; s222_iter < 150; s222_iter++) {
      /* Outputs for Iterator SubSystem: '<S218>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S222>/While Iterator'
       */
      distance_from_robot[s222_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s222_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s222_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S218>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s222_iter = 1;
    } else {
      s222_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s222_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s222_iter == 0) {
      rtb_Switch2 = distance_from_robot[0];
    } else {
      rtb_Switch2 = distance_from_robot[s222_iter - 1];
      for (rtb_Bias1_p = s222_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch4_g = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch2 > rtb_Switch4_g) {
          rtb_Switch2 = rtb_Switch4_g;
        }
      }
    }

    s222_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s222_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch2) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S248>/Selector' incorporates:
     *  Constant: '<S248>/Constant'
     *  MATLAB Function: '<S197>/Find closest index to curve'
     *  MinMax: '<S248>/Min'
     */
    rtb_Switch4_g = rtb_Assignment_d[((int32_T)fmin(50.0, s222_iter)) - 1];

    /* If: '<S248>/If' incorporates:
     *  RelationalOperator: '<S248>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S248>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S251>/Action Port'
       */
      /* SignalConversion generated from: '<S251>/Lookup Table Dynamic' */
      rtb_Akxhatkk1[0] = rtb_Assignment_d[0];
      rtb_Akxhatkk1[1] = rtb_Assignment_d[49];

      /* Sum: '<S253>/FixPt Sum1' incorporates:
       *  Constant: '<S253>/FixPt Constant'
       */
      rtb_Switch2 = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S251>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S13>/Merge8'
       *  Selector: '<S251>/Selector11'
       *  Selector: '<S251>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S251>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S13>/Merge8'
       *  Selector: '<S251>/Selector1'
       *  Selector: '<S251>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S251>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S251>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch2), &rtb_Minus_n[0], rtb_Switch4_g,
                           &rtb_Akxhatkk1[0], 1U);

      /* SignalConversion: '<S251>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S251>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S251>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch4_g,
                           &rtb_Akxhatkk1[0], 1U);

      /* End of Outputs for SubSystem: '<S248>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S248>/Latch' incorporates:
       *  ActionPort: '<S252>/Action Port'
       */
      /* SignalConversion generated from: '<S252>/In1' incorporates:
       *  UnitDelay: '<S248>/Unit Delay1'
       */
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S252>/In2' incorporates:
       *  UnitDelay: '<S248>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S248>/Latch' */
    }

    /* End of If: '<S248>/If' */

    /* MinMax: '<S195>/Min' incorporates:
     *  Lookup_n-D: '<S195>/Lookahead Distance'
     *  UnitDelay: '<S195>/Unit Delay'
     */
    rtb_Switch1_p2 = fmin(rtb_Switch1_p2, look1_binlcpw
                          (Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
      Code_Gen_Model_ConstP.pooled5,
      Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S197>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S247>/While Iterator'
     */
    s247_iter = 1U;
    UnitDelay = true;
    while (UnitDelay && (s247_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S197>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S247>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s247_iter;
      UnitDelay = ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
                    (rtb_Assignment_d[s222_iter - 1] + rtb_Switch1_p2)) &&
                   (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments)
        * 50.0)));
      s247_iter++;
    }

    /* End of Outputs for SubSystem: '<S197>/Find first index that meets distance target' */

    /* Switch: '<S250>/Switch' incorporates:
     *  Concatenate: '<S197>/Matrix Concatenate'
     *  Constant: '<S197>/Constant'
     *  Constant: '<S247>/Constant'
     *  Constant: '<S250>/Constant1'
     *  Constant: '<S250>/Constant2'
     *  Constant: '<S250>/Constant3'
     *  Logic: '<S247>/AND'
     *  MATLAB Function: '<S197>/Find closest index to curve'
     *  Math: '<S250>/Hypot'
     *  Merge: '<S13>/Merge8'
     *  MinMax: '<S250>/Min'
     *  MinMax: '<S250>/Min1'
     *  Product: '<S247>/Product'
     *  Product: '<S250>/Divide'
     *  Product: '<S250>/Product'
     *  Product: '<S250>/Product1'
     *  RelationalOperator: '<S197>/Relational Operator'
     *  RelationalOperator: '<S247>/Relational Operator'
     *  RelationalOperator: '<S247>/Relational Operator1'
     *  Selector: '<S197>/Selector10'
     *  Selector: '<S197>/Selector7'
     *  Selector: '<S197>/Selector8'
     *  Selector: '<S197>/Selector9'
     *  Selector: '<S247>/Selector'
     *  Selector: '<S247>/Selector1'
     *  Selector: '<S248>/Selector'
     *  Sqrt: '<S250>/Sqrt'
     *  Sum: '<S197>/Subtract'
     *  Sum: '<S247>/Add'
     *  Sum: '<S250>/Subtract'
     *  Sum: '<S250>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Follow_Index >=
        (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Switch1_p2 = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[9] -
        Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
                            Spline_Last_Pose_Distance_to_Velocity_Gain, fmin
                            (rtb_Switch2 * Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration /
         rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299])));
    } else {
      rtb_Switch1_p2 = fmin(rtb_Switch2 * Spline_Velocity_Multiplier_TEST, sqrt
                            (Spline_Max_Centripital_Acceleration /
        rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299]));
    }

    /* End of Switch: '<S250>/Switch' */

    /* Logic: '<S198>/OR' */
    rtb_FixPtRelationalOperator_fh = (rtb_Is_Absolute_Steering ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S198>/Switch1' incorporates:
     *  Switch: '<S198>/Switch'
     *  UnitDelay: '<S198>/Unit Delay'
     */
    if (rtb_FixPtRelationalOperator_fh) {
      /* Merge: '<S17>/Merge2' incorporates:
       *  Constant: '<S198>/Constant3'
       *  SignalConversion: '<S198>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch4_g = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S17>/Merge2' incorporates:
       *  SignalConversion: '<S198>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Switch1_p2;
      rtb_Switch4_g = rtb_Merge1;
    }

    /* End of Switch: '<S198>/Switch1' */

    /* Merge: '<S17>/Merge' incorporates:
     *  SignalConversion: '<S198>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch4_g;

    /* Selector: '<S197>/Selector6' incorporates:
     *  Concatenate: '<S197>/Matrix Concatenate'
     *  Selector: '<S197>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S197>/Selector2' incorporates:
     *  Concatenate: '<S197>/Matrix Concatenate'
     *  Selector: '<S197>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S198>/Switch2' incorporates:
     *  Sum: '<S254>/Subtract'
     *  Sum: '<S254>/Subtract1'
     *  Trigonometry: '<S254>/Atan2'
     *  UnitDelay: '<S198>/Unit Delay1'
     */
    if (rtb_FixPtRelationalOperator_fh) {
      rtb_Sum_jt = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Sum_jt = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S198>/Switch2' */

    /* Merge: '<S17>/Merge3' incorporates:
     *  SignalConversion: '<S198>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Sum_jt;

    /* Merge: '<S17>/Merge7' incorporates:
     *  SignalConversion: '<S195>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = rtb_Is_Absolute_Steering;

    /* Merge: '<S17>/Merge1' incorporates:
     *  Constant: '<S198>/Constant2'
     *  SignalConversion generated from: '<S195>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S17>/Merge4' incorporates:
     *  Constant: '<S198>/Constant5'
     *  SignalConversion generated from: '<S195>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S17>/Merge5' incorporates:
     *  Constant: '<S198>/Constant6'
     *  SignalConversion generated from: '<S195>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S17>/Merge8' incorporates:
     *  SignalConversion generated from: '<S195>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S196>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S195>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S248>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch2;

    /* Update for UnitDelay: '<S248>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S198>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch4_g;

    /* Update for UnitDelay: '<S198>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Sum_jt;

    /* End of Outputs for SubSystem: '<S17>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S17>/Pass Through' incorporates:
     *  ActionPort: '<S194>/Action Port'
     */
    /* Merge: '<S17>/Merge7' incorporates:
     *  Constant: '<S194>/Constant'
     *  SignalConversion generated from: '<S194>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination = true;

    /* Merge: '<S17>/Merge' incorporates:
     *  SignalConversion generated from: '<S194>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S17>/Merge1' incorporates:
     *  SignalConversion generated from: '<S194>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S17>/Merge2' incorporates:
     *  SignalConversion generated from: '<S194>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S17>/Merge3' incorporates:
     *  SignalConversion generated from: '<S194>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S17>/Merge4' incorporates:
     *  SignalConversion generated from: '<S194>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = UnitDelay;

    /* Merge: '<S17>/Merge5' incorporates:
     *  SignalConversion generated from: '<S194>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S17>/Merge8' incorporates:
     *  SignalConversion generated from: '<S194>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S17>/Pass Through' */
  }

  /* End of If: '<S17>/If' */

  /* UnitDelay: '<S348>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S348>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    y = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    y = -1.0;
  } else {
    y = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S348>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Subtract1_bx = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Subtract1_bx = -1.0;
  } else {
    rtb_Subtract1_bx = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S348>/Product1' incorporates:
   *  Signum: '<S348>/Sign1'
   *  Signum: '<S348>/Sign2'
   */
  y *= rtb_Subtract1_bx;
  if (rtIsNaN(y)) {
    i = 0;
  } else {
    i = (int32_T)fmod(y, 256.0);
  }

  /* Switch: '<S348>/Switch' incorporates:
   *  Constant: '<S348>/Constant'
   *  Constant: '<S353>/Constant'
   *  Constant: '<S354>/Constant'
   *  Logic: '<S348>/or'
   *  Product: '<S348>/Product1'
   *  RelationalOperator: '<S353>/Compare'
   *  RelationalOperator: '<S354>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)
             (-((real_T)i))))))) : i) > 0)) {
    rtb_rx_l = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_l = 0.0;
  }

  /* End of Switch: '<S348>/Switch' */

  /* RelationalOperator: '<S355>/Compare' incorporates:
   *  Constant: '<S355>/Constant'
   */
  UnitDelay = (rtb_rx_l == 0.0);

  /* RelationalOperator: '<S356>/Compare' incorporates:
   *  Constant: '<S356>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_l > 0.0);

  /* Abs: '<S348>/Abs' incorporates:
   *  Sum: '<S348>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S348>/Switch1' incorporates:
   *  Constant: '<S348>/Constant1'
   *  Switch: '<S348>/Switch3'
   *  Switch: '<S348>/Switch5'
   *  UnaryMinus: '<S348>/Unary Minus'
   */
  if (UnitDelay) {
    rtb_Switch2 = -Translation_Speed_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S348>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S348>/Constant1'
     *  Constant: '<S348>/Constant4'
     *  Constant: '<S348>/Constant6'
     *  UnaryMinus: '<S348>/Unary Minus'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S348>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S348>/Constant2'
     *  Constant: '<S348>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S348>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S348>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p2 = rtb_LookupTableDynamic_j;
  } else {
    if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S348>/Switch3' incorporates:
       *  Constant: '<S348>/Constant3'
       */
      rtb_Switch2 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Switch2 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S348>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S348>/Constant1'
     *  Constant: '<S348>/Constant10'
     *  Constant: '<S348>/Constant8'
     *  UnaryMinus: '<S348>/Unary Minus'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S348>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S348>/Constant7'
     *  Constant: '<S348>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S348>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S348>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p2 = rtb_LookupTableDynamic1_i;
  }

  /* End of Switch: '<S348>/Switch1' */

  /* Product: '<S348>/Product' */
  rtb_Switch2 *= rtb_Switch1_p2;

  /* Switch: '<S359>/Init' incorporates:
   *  UnitDelay: '<S359>/FixPt Unit Delay1'
   *  UnitDelay: '<S359>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_rx_l;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S359>/Init' */

  /* Sum: '<S357>/Sum1' */
  rtb_Switch4_g = rtb_rx_l - rtb_Merge1;

  /* Switch: '<S358>/Switch2' incorporates:
   *  RelationalOperator: '<S358>/LowerRelop1'
   */
  if (!(rtb_Switch4_g > rtb_Switch2)) {
    /* Switch: '<S348>/Switch2' incorporates:
     *  Constant: '<S348>/Constant1'
     *  Switch: '<S348>/Switch4'
     */
    if (UnitDelay) {
      rtb_Switch2 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S348>/Switch4' incorporates:
       *  Constant: '<S348>/Constant1'
       */
      rtb_Switch2 = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S348>/Switch4' incorporates:
       *  Constant: '<S348>/Constant3'
       *  UnaryMinus: '<S348>/Unary Minus1'
       */
      rtb_Switch2 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S348>/Switch2' */

    /* Product: '<S348>/Product2' */
    rtb_Switch2 *= rtb_Switch1_p2;

    /* Switch: '<S358>/Switch' incorporates:
     *  RelationalOperator: '<S358>/UpperRelop'
     */
    if (!(rtb_Switch4_g < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4_g;
    }

    /* End of Switch: '<S358>/Switch' */
  }

  /* End of Switch: '<S358>/Switch2' */

  /* Sum: '<S357>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S351>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S351>/Switch' incorporates:
     *  Constant: '<S383>/Constant3'
     *  Constant: '<S383>/Constant4'
     *  Math: '<S383>/Math Function'
     *  Sum: '<S351>/Subtract'
     *  Sum: '<S383>/Add1'
     *  Sum: '<S383>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S351>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S351>/Switch' */

  /* Sum: '<S379>/Add1' incorporates:
   *  Constant: '<S379>/Constant3'
   *  Constant: '<S379>/Constant4'
   *  Math: '<S379>/Math Function'
   *  Sum: '<S378>/Sum'
   *  Sum: '<S379>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S381>/Sum1' incorporates:
   *  Constant: '<S378>/Constant2'
   *  Product: '<S381>/Product'
   *  Sum: '<S381>/Sum'
   *  UnitDelay: '<S381>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S378>/Product' incorporates:
   *  Constant: '<S378>/Constant3'
   */
  rtb_Switch1_p2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S380>/Diff' incorporates:
   *  UnitDelay: '<S380>/UD'
   *
   * Block description for '<S380>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S380>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Switch1_p2 - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S378>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Heading_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Heading_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Heading_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S378>/Add' incorporates:
   *  Gain: '<S378>/Gain1'
   *  Saturate: '<S378>/Saturation'
   */
  rtb_Switch4_g = (Steering_Heading_Control_P * rtb_Switch2) + Rot_Mat_idx_0;

  /* Sum: '<S378>/Subtract' incorporates:
   *  Constant: '<S378>/Constant'
   */
  rtb_Sin4 = Steering_Heading_Control_Total_UL - rtb_Switch4_g;

  /* Sum: '<S378>/Sum2' incorporates:
   *  Gain: '<S378>/Gain2'
   *  UnitDelay: '<S378>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S382>/Switch2' incorporates:
   *  RelationalOperator: '<S382>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_Sin4)) {
    /* Sum: '<S378>/Subtract1' incorporates:
     *  Constant: '<S378>/Constant1'
     */
    rtb_Sum_jt = Steering_Heading_Control_Total_LL - rtb_Switch4_g;

    /* Switch: '<S382>/Switch' incorporates:
     *  RelationalOperator: '<S382>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Sum_jt) {
      rtb_Sin4 = rtb_Sum_jt;
    } else {
      rtb_Sin4 = rtb_Switch2;
    }

    /* End of Switch: '<S382>/Switch' */
  }

  /* End of Switch: '<S382>/Switch2' */

  /* Saturate: '<S378>/Saturation1' */
  if (rtb_Sin4 > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_Sin4 < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_Sin4;
  }

  /* End of Saturate: '<S378>/Saturation1' */

  /* Sum: '<S378>/Add1' */
  Rot_Mat_idx_0 = rtb_Switch4_g + rtb_Switch2;

  /* Saturate: '<S378>/Saturation2' */
  if (Rot_Mat_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S378>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (Rot_Mat_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S378>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S378>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S378>/Saturation2' */

  /* Switch: '<S362>/Switch' incorporates:
   *  Abs: '<S362>/Abs'
   *  Constant: '<S362>/Constant'
   *  Constant: '<S377>/Constant'
   *  RelationalOperator: '<S377>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Sin4 = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Sin4 = 0.0;
  }

  /* End of Switch: '<S362>/Switch' */

  /* Signum: '<S361>/Sign2' incorporates:
   *  UnitDelay: '<S361>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    y = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    y = -1.0;
  } else {
    y = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S361>/Sign1' */
  if (rtIsNaN(rtb_Sin4)) {
    rtb_Subtract1_bx = (rtNaN);
  } else if (rtb_Sin4 < 0.0) {
    rtb_Subtract1_bx = -1.0;
  } else {
    rtb_Subtract1_bx = (rtb_Sin4 > 0.0);
  }

  /* Product: '<S361>/Product1' incorporates:
   *  Signum: '<S361>/Sign1'
   *  Signum: '<S361>/Sign2'
   */
  y *= rtb_Subtract1_bx;
  if (rtIsNaN(y)) {
    i = 0;
  } else {
    i = (int32_T)fmod(y, 256.0);
  }

  /* Switch: '<S361>/Switch' incorporates:
   *  Constant: '<S361>/Constant'
   *  Constant: '<S370>/Constant'
   *  Constant: '<S371>/Constant'
   *  Logic: '<S361>/or'
   *  Product: '<S361>/Product1'
   *  RelationalOperator: '<S370>/Compare'
   *  RelationalOperator: '<S371>/Compare'
   *  UnitDelay: '<S361>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Sin4;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
  }

  /* End of Switch: '<S361>/Switch' */

  /* RelationalOperator: '<S372>/Compare' incorporates:
   *  Constant: '<S372>/Constant'
   */
  UnitDelay = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* RelationalOperator: '<S373>/Compare' incorporates:
   *  Constant: '<S373>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_MatrixConcatenate_b_idx_0 > 0.0);

  /* Abs: '<S361>/Abs' incorporates:
   *  Sum: '<S361>/Subtract'
   *  UnitDelay: '<S361>/Unit Delay'
   */
  rtb_Switch4_g = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Sin4);

  /* Switch: '<S361>/Switch5' incorporates:
   *  Constant: '<S361>/Constant1'
   *  Switch: '<S361>/Switch1'
   *  UnaryMinus: '<S361>/Unary Minus'
   */
  if (UnitDelay) {
    /* SignalConversion generated from: '<S361>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S361>/Constant4'
     *  Constant: '<S361>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S361>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S361>/Constant2'
     *  Constant: '<S361>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S361>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S361>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Akxhatkk1[0],
                         rtb_Switch4_g, &rtb_Minus_n[0], 1U);
    rtb_Switch4_g = rtb_LookupTableDynamic;
    y = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S361>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S361>/Constant10'
     *  Constant: '<S361>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S361>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S361>/Constant7'
     *  Constant: '<S361>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S361>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S361>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Akxhatkk1[0],
                         rtb_Switch4_g, &rtb_Minus_n[0], 1U);
    rtb_Switch4_g = rtb_LookupTableDynamic1;

    /* Switch: '<S361>/Switch3' incorporates:
     *  Constant: '<S361>/Constant1'
     *  Constant: '<S361>/Constant3'
     *  UnaryMinus: '<S361>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      y = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      y = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S361>/Switch3' */
  }

  /* End of Switch: '<S361>/Switch5' */

  /* Product: '<S361>/Product' incorporates:
   *  Switch: '<S361>/Switch1'
   */
  rtb_Minus_k_idx_0 = y * rtb_Switch4_g;

  /* Switch: '<S376>/Init' incorporates:
   *  UnitDelay: '<S376>/FixPt Unit Delay1'
   *  UnitDelay: '<S376>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Sin4 = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Sin4 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S376>/Init' */

  /* Sum: '<S374>/Sum1' */
  rtb_Sum_jt = rtb_MatrixConcatenate_b_idx_0 - rtb_Sin4;

  /* Switch: '<S375>/Switch2' incorporates:
   *  RelationalOperator: '<S375>/LowerRelop1'
   */
  if (!(rtb_Sum_jt > rtb_Minus_k_idx_0)) {
    /* Switch: '<S361>/Switch2' incorporates:
     *  Constant: '<S361>/Constant1'
     *  Constant: '<S361>/Constant3'
     *  Switch: '<S361>/Switch4'
     *  UnaryMinus: '<S361>/Unary Minus1'
     */
    if (UnitDelay) {
      y = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S361>/Switch4' incorporates:
       *  Constant: '<S361>/Constant1'
       */
      y = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      y = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S361>/Product2' incorporates:
     *  Switch: '<S361>/Switch2'
     */
    rtb_Product2_l = y * rtb_Switch4_g;

    /* Switch: '<S375>/Switch' incorporates:
     *  RelationalOperator: '<S375>/UpperRelop'
     */
    if (rtb_Sum_jt < rtb_Product2_l) {
      rtb_Minus_k_idx_0 = rtb_Product2_l;
    } else {
      rtb_Minus_k_idx_0 = rtb_Sum_jt;
    }

    /* End of Switch: '<S375>/Switch' */
  }

  /* End of Switch: '<S375>/Switch2' */

  /* Sum: '<S374>/Sum' */
  rtb_Switch4_g = rtb_Minus_k_idx_0 + rtb_Sin4;

  /* Signum: '<S360>/Sign2' incorporates:
   *  UnitDelay: '<S360>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    y = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    y = -1.0;
  } else {
    y = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S360>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Subtract1_bx = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Subtract1_bx = -1.0;
  } else {
    rtb_Subtract1_bx = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S360>/Product1' incorporates:
   *  Signum: '<S360>/Sign1'
   *  Signum: '<S360>/Sign2'
   */
  y *= rtb_Subtract1_bx;
  if (rtIsNaN(y)) {
    i = 0;
  } else {
    i = (int32_T)fmod(y, 256.0);
  }

  /* Switch: '<S360>/Switch' incorporates:
   *  Constant: '<S360>/Constant'
   *  Constant: '<S363>/Constant'
   *  Constant: '<S364>/Constant'
   *  Logic: '<S360>/or'
   *  Product: '<S360>/Product1'
   *  RelationalOperator: '<S363>/Compare'
   *  RelationalOperator: '<S364>/Compare'
   *  UnitDelay: '<S360>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* End of Switch: '<S360>/Switch' */

  /* RelationalOperator: '<S365>/Compare' incorporates:
   *  Constant: '<S365>/Constant'
   */
  UnitDelay = (rtb_Minus_k_idx_0 == 0.0);

  /* RelationalOperator: '<S366>/Compare' incorporates:
   *  Constant: '<S366>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Minus_k_idx_0 > 0.0);

  /* Abs: '<S360>/Abs' incorporates:
   *  Sum: '<S360>/Subtract'
   *  UnitDelay: '<S360>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S360>/Switch5' incorporates:
   *  Constant: '<S360>/Constant1'
   *  Switch: '<S360>/Switch1'
   *  UnaryMinus: '<S360>/Unary Minus'
   */
  if (UnitDelay) {
    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S360>/Constant4'
     *  Constant: '<S360>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S360>/Constant2'
     *  Constant: '<S360>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S360>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S360>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Akxhatkk1[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic_p;
    y = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S360>/Constant10'
     *  Constant: '<S360>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S360>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S360>/Constant7'
     *  Constant: '<S360>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S360>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S360>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Akxhatkk1[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic1_g;

    /* Switch: '<S360>/Switch3' incorporates:
     *  Constant: '<S360>/Constant1'
     *  Constant: '<S360>/Constant3'
     *  UnaryMinus: '<S360>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      y = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      y = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S360>/Switch3' */
  }

  /* End of Switch: '<S360>/Switch5' */

  /* Product: '<S360>/Product' incorporates:
   *  Switch: '<S360>/Switch1'
   */
  rtb_Sin4 = y * rtb_Sum_jt;

  /* Switch: '<S369>/Init' incorporates:
   *  UnitDelay: '<S369>/FixPt Unit Delay1'
   *  UnitDelay: '<S369>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Minus_k_idx_0;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S369>/Init' */

  /* Sum: '<S367>/Sum1' */
  rtb_Product2_l = rtb_Minus_k_idx_0 - rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S368>/Switch2' incorporates:
   *  RelationalOperator: '<S368>/LowerRelop1'
   */
  if (!(rtb_Product2_l > rtb_Sin4)) {
    /* Switch: '<S360>/Switch2' incorporates:
     *  Constant: '<S360>/Constant1'
     *  Constant: '<S360>/Constant3'
     *  Switch: '<S360>/Switch4'
     *  UnaryMinus: '<S360>/Unary Minus1'
     */
    if (UnitDelay) {
      y = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S360>/Switch4' incorporates:
       *  Constant: '<S360>/Constant1'
       */
      y = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      y = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S360>/Product2' incorporates:
     *  Switch: '<S360>/Switch2'
     */
    rtb_Product2_f = y * rtb_Sum_jt;

    /* Switch: '<S368>/Switch' incorporates:
     *  RelationalOperator: '<S368>/UpperRelop'
     */
    if (rtb_Product2_l < rtb_Product2_f) {
      rtb_Sin4 = rtb_Product2_f;
    } else {
      rtb_Sin4 = rtb_Product2_l;
    }

    /* End of Switch: '<S368>/Switch' */
  }

  /* End of Switch: '<S368>/Switch2' */

  /* Sum: '<S367>/Sum' */
  rtb_Sum_jt = rtb_Sin4 + rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S350>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S350>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4_g;
  } else {
    /* Switch: '<S350>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Sum_jt;
  }

  /* End of Switch: '<S350>/Switch' */

  /* Outputs for Atomic SubSystem: '<S263>/Initialize Function' */
  /* Sum: '<S349>/Add' incorporates:
   *  Constant: '<S349>/Constant'
   *  Constant: '<S349>/Constant4'
   *  Constant: '<S349>/Constant5'
   *  Trigonometry: '<S349>/Atan2'
   */
  rtb_Product2_l = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S263>/Initialize Function' */

  /* Fcn: '<S391>/r->x' incorporates:
   *  Fcn: '<S396>/r->x'
   *  Fcn: '<S401>/r->x'
   *  Fcn: '<S406>/r->x'
   */
  rtb_FeedForward = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S385>/Add' incorporates:
   *  Fcn: '<S391>/r->x'
   *  Fcn: '<S392>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (rtb_Product2_l)) + rtb_FeedForward;

  /* Fcn: '<S391>/theta->y' incorporates:
   *  Fcn: '<S396>/theta->y'
   *  Fcn: '<S401>/theta->y'
   *  Fcn: '<S406>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S385>/Add' incorporates:
   *  Fcn: '<S391>/theta->y'
   *  Fcn: '<S392>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (rtb_Product2_l)) + rtb_Add_oh;

  /* Fcn: '<S390>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1
    [1]);

  /* RelationalOperator: '<S393>/Compare' incorporates:
   *  Constant: '<S393>/Constant'
   */
  UnitDelay = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S389>/Switch' */
  if (!UnitDelay) {
    /* Switch: '<S389>/Switch' incorporates:
     *  Fcn: '<S390>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S389>/Switch' */

  /* Trigonometry: '<S277>/Cos4' incorporates:
   *  Switch: '<S266>/Angle_Switch'
   *  Trigonometry: '<S276>/Cos4'
   */
  rtb_Product2_l = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S255>/Add1' incorporates:
   *  Constant: '<S255>/Constant3'
   *  Constant: '<S255>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S255>/Math Function'
   *  Sum: '<S18>/Add'
   *  Sum: '<S255>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S277>/Sin5' incorporates:
   *  UnaryMinus: '<S275>/Unary Minus'
   */
  rtb_rx_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S277>/Sin4' incorporates:
   *  Switch: '<S266>/Angle_Switch'
   *  Trigonometry: '<S276>/Sin4'
   */
  rtb_Product2_f = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S277>/Cos5' incorporates:
   *  UnaryMinus: '<S275>/Unary Minus'
   */
  rtb_Sin4 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S277>/Subtract1' incorporates:
   *  Product: '<S277>/Product2'
   *  Product: '<S277>/Product3'
   *  Trigonometry: '<S277>/Cos4'
   *  Trigonometry: '<S277>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_1 = (rtb_Product2_l * rtb_rx_l) + (rtb_Product2_f *
    rtb_Sin4);

  /* Sum: '<S277>/Subtract' incorporates:
   *  Product: '<S277>/Product'
   *  Product: '<S277>/Product1'
   *  Trigonometry: '<S277>/Cos4'
   *  Trigonometry: '<S277>/Sin4'
   */
  rtb_rx_l = (rtb_Product2_l * rtb_Sin4) - (rtb_Product2_f * rtb_rx_l);

  /* Math: '<S277>/Hypot' */
  rtb_Sin4 = rt_hypotd_snf(rtb_rx_l, rtb_MatrixConcatenate_b_idx_1);

  /* Switch: '<S277>/Switch' incorporates:
   *  Constant: '<S277>/Constant'
   *  Constant: '<S277>/Constant1'
   *  Constant: '<S278>/Constant'
   *  Product: '<S277>/Divide'
   *  Product: '<S277>/Divide1'
   *  RelationalOperator: '<S278>/Compare'
   *  Switch: '<S277>/Switch1'
   */
  if (rtb_Sin4 > 1.0E-6) {
    rtb_Minus_k_idx_0 = rtb_MatrixConcatenate_b_idx_1 / rtb_Sin4;
    rtb_Sin4 = rtb_rx_l / rtb_Sin4;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
    rtb_Sin4 = 1.0;
  }

  /* End of Switch: '<S277>/Switch' */

  /* RelationalOperator: '<S274>/Compare' incorporates:
   *  Abs: '<S266>/Abs'
   *  Constant: '<S274>/Constant'
   *  Trigonometry: '<S277>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_Minus_k_idx_0, rtb_Sin4)) >
    1.5707963267948966);

  /* Switch: '<S266>/Angle_Switch' incorporates:
   *  Trigonometry: '<S276>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S276>/Subtract1' incorporates:
     *  Product: '<S276>/Product2'
     *  Product: '<S276>/Product3'
     */
    rtb_rx_l = (rtb_Product2_l * Code_Gen_Model_ConstB.Sin5) + (rtb_Product2_f *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S276>/Subtract' incorporates:
     *  Product: '<S276>/Product'
     *  Product: '<S276>/Product1'
     */
    rtb_Product2_f = (rtb_Product2_l * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Product2_f * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S276>/Hypot' */
    rtb_Product2_l = rt_hypotd_snf(rtb_Product2_f, rtb_rx_l);

    /* Switch: '<S276>/Switch1' incorporates:
     *  Constant: '<S276>/Constant'
     *  Constant: '<S276>/Constant1'
     *  Constant: '<S279>/Constant'
     *  Product: '<S276>/Divide'
     *  Product: '<S276>/Divide1'
     *  RelationalOperator: '<S279>/Compare'
     *  Switch: '<S276>/Switch'
     */
    if (rtb_Product2_l > 1.0E-6) {
      rtb_Product2_f /= rtb_Product2_l;
      rtb_Product2_l = rtb_rx_l / rtb_Product2_l;
    } else {
      rtb_Product2_f = 1.0;
      rtb_Product2_l = 0.0;
    }

    /* End of Switch: '<S276>/Switch1' */
    rtb_Minus_k_idx_0 = rt_atan2d_snf(rtb_Product2_l, rtb_Product2_f);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S268>/Sum' incorporates:
   *  Sum: '<S267>/Add'
   */
  rtb_Minus_k_idx_0 -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S281>/Add1' incorporates:
   *  Constant: '<S281>/Constant3'
   *  Constant: '<S281>/Constant4'
   *  Math: '<S281>/Math Function'
   *  Sum: '<S268>/Sum'
   *  Sum: '<S281>/Add2'
   */
  rtb_Sin4 = rt_modd_snf(rtb_Minus_k_idx_0 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S283>/Sum1' incorporates:
   *  Constant: '<S268>/Constant2'
   *  Product: '<S283>/Product'
   *  Sum: '<S283>/Sum'
   *  UnitDelay: '<S283>/Unit Delay1'
   */
  rtb_Product2_l = ((rtb_Sin4 - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S268>/Product' incorporates:
   *  Constant: '<S268>/Constant3'
   */
  rtb_Product2_f = rtb_Product2_l * Steering_Motor_Control_D;

  /* Sum: '<S282>/Diff' incorporates:
   *  UnitDelay: '<S282>/UD'
   *
   * Block description for '<S282>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S282>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Product2_f - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S268>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S268>/Add' incorporates:
   *  Gain: '<S268>/Gain1'
   *  Saturate: '<S268>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_1 = (Steering_Motor_Control_P * rtb_Sin4) +
    Rot_Mat_idx_0;

  /* Sum: '<S268>/Subtract' incorporates:
   *  Constant: '<S268>/Constant'
   */
  rtb_rx_l = 1.0 - rtb_MatrixConcatenate_b_idx_1;

  /* Sum: '<S268>/Sum2' incorporates:
   *  Gain: '<S268>/Gain2'
   *  UnitDelay: '<S268>/Unit Delay'
   */
  rtb_Sin4 = (Steering_Motor_Control_I * rtb_Sin4) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S284>/Switch2' incorporates:
   *  Constant: '<S268>/Constant'
   *  RelationalOperator: '<S284>/LowerRelop1'
   *  Sum: '<S268>/Subtract'
   */
  if (!(rtb_Sin4 > (1.0 - rtb_MatrixConcatenate_b_idx_1))) {
    /* Sum: '<S268>/Subtract1' incorporates:
     *  Constant: '<S268>/Constant1'
     */
    rtb_rx_l = -1.0 - rtb_MatrixConcatenate_b_idx_1;

    /* Switch: '<S284>/Switch' incorporates:
     *  Constant: '<S268>/Constant1'
     *  RelationalOperator: '<S284>/UpperRelop'
     *  Sum: '<S268>/Subtract1'
     */
    if (!(rtb_Sin4 < (-1.0 - rtb_MatrixConcatenate_b_idx_1))) {
      rtb_rx_l = rtb_Sin4;
    }

    /* End of Switch: '<S284>/Switch' */
  }

  /* End of Switch: '<S284>/Switch2' */

  /* Saturate: '<S268>/Saturation1' */
  if (rtb_rx_l > Steering_Motor_Control_I_UL) {
    rtb_rx_l = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_l < Steering_Motor_Control_I_LL) {
    rtb_rx_l = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S268>/Saturation1' */

  /* Sum: '<S268>/Add1' */
  Rot_Mat_idx_0 = rtb_MatrixConcatenate_b_idx_1 + rtb_rx_l;

  /* Saturate: '<S268>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S268>/Saturation2' */

  /* Switch: '<S389>/Switch1' */
  if (UnitDelay) {
    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S389>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S389>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S389>/Switch1' */

  /* Sum: '<S386>/Add' incorporates:
   *  Fcn: '<S397>/r->x'
   *  Fcn: '<S397>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S395>/x->r' */
  rtb_Sin4 = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S398>/Compare' incorporates:
   *  Constant: '<S398>/Constant'
   */
  UnitDelay = (rtb_Sin4 == 0.0);

  /* Switch: '<S394>/Switch1' */
  if (UnitDelay) {
    /* Switch: '<S394>/Switch1' incorporates:
     *  Constant: '<S394>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S394>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Sin4;
  }

  /* End of Switch: '<S394>/Switch1' */

  /* Sum: '<S387>/Add' incorporates:
   *  Fcn: '<S402>/r->x'
   *  Fcn: '<S402>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_FeedForward;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S400>/x->r' */
  rtb_Test_DC_Shooter = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S403>/Compare' incorporates:
   *  Constant: '<S403>/Constant'
   */
  rtb_FixPtRelationalOperator_fh = (rtb_Test_DC_Shooter == 0.0);

  /* Switch: '<S399>/Switch1' */
  if (rtb_FixPtRelationalOperator_fh) {
    /* Switch: '<S399>/Switch1' incorporates:
     *  Constant: '<S399>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S399>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Test_DC_Shooter;
  }

  /* End of Switch: '<S399>/Switch1' */

  /* Sum: '<S388>/Add' incorporates:
   *  Fcn: '<S407>/r->x'
   *  Fcn: '<S407>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_FeedForward;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S405>/x->r' */
  rtb_rx_d = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S408>/Compare' incorporates:
   *  Constant: '<S408>/Constant'
   */
  rtb_FixPtRelationalOperator_h = (rtb_rx_d == 0.0);

  /* Switch: '<S404>/Switch1' */
  if (rtb_FixPtRelationalOperator_h) {
    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S404>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S404>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_rx_d;
  }

  /* End of Switch: '<S404>/Switch1' */

  /* Product: '<S384>/Divide' incorporates:
   *  Abs: '<S384>/Abs'
   *  Abs: '<S384>/Abs1'
   *  Abs: '<S384>/Abs2'
   *  Abs: '<S384>/Abs3'
   *  Constant: '<S384>/Constant'
   *  MinMax: '<S384>/Max'
   */
  rtb_MatrixConcatenate_b_idx_0 = 4.7808428170320649 / fmax(fmax(fmax(fmax
    (4.7808428170320649, Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S384>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S266>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S266>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    y = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    y = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S269>/Product2' incorporates:
   *  Constant: '<S269>/Constant'
   *  Switch: '<S266>/Speed_Switch'
   */
  rtb_rx_d = y * 1150.4247703785388;

  /* Signum: '<S264>/Sign' */
  if (rtIsNaN(rtb_rx_d)) {
    y = (rtNaN);
  } else if (rtb_rx_d < 0.0) {
    y = -1.0;
  } else {
    y = (rtb_rx_d > 0.0);
  }

  /* Signum: '<S264>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Subtract1_bx = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Subtract1_bx = -1.0;
  } else {
    rtb_Subtract1_bx = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S259>/Product' incorporates:
   *  Abs: '<S264>/Abs'
   *  Abs: '<S267>/Abs'
   *  Constant: '<S270>/Constant'
   *  Constant: '<S280>/Constant3'
   *  Constant: '<S280>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S264>/OR'
   *  Lookup_n-D: '<S267>/1-D Lookup Table'
   *  Math: '<S280>/Math Function'
   *  RelationalOperator: '<S264>/Equal1'
   *  RelationalOperator: '<S270>/Compare'
   *  Signum: '<S264>/Sign'
   *  Signum: '<S264>/Sign1'
   *  Sum: '<S280>/Add1'
   *  Sum: '<S280>/Add2'
   */
  rtb_rx_d = (((real_T)((y == rtb_Subtract1_bx) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_d) * look1_binlcpw(fabs
    (rt_modd_snf(rtb_Minus_k_idx_0 + 1.5707963267948966, 3.1415926535897931) -
     1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
    Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S265>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_rx_d;

  /* Sum: '<S265>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_rx_d -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S272>/Sum1' incorporates:
   *  Constant: '<S265>/Constant2'
   *  Product: '<S272>/Product'
   *  Sum: '<S272>/Sum'
   *  UnitDelay: '<S272>/Unit Delay1'
   */
  rtb_Sin4 = ((rtb_rx_d - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S265>/Product' incorporates:
   *  Constant: '<S265>/Constant3'
   */
  rtb_MatrixConcatenate_b_idx_1 = rtb_Sin4 * Drive_Motor_Control_D;

  /* Sum: '<S271>/Diff' incorporates:
   *  UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_MatrixConcatenate_b_idx_1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S265>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S265>/Add' incorporates:
   *  Gain: '<S265>/Gain1'
   *  Saturate: '<S265>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_rx_d) + rtb_FeedForward) +
    Rot_Mat_idx_0;

  /* Sum: '<S265>/Subtract' incorporates:
   *  Constant: '<S265>/Constant'
   */
  rtb_Test_DC_Shooter = 1.0 - rtb_Add_oh;

  /* Sum: '<S265>/Sum2' incorporates:
   *  Gain: '<S265>/Gain2'
   *  UnitDelay: '<S265>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_rx_d) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S273>/Switch2' incorporates:
   *  Constant: '<S265>/Constant'
   *  RelationalOperator: '<S273>/LowerRelop1'
   *  Sum: '<S265>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S273>/Switch' incorporates:
     *  Constant: '<S265>/Constant1'
     *  RelationalOperator: '<S273>/UpperRelop'
     *  Sum: '<S265>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_Test_DC_Shooter = -1.0 - rtb_Add_oh;
    } else {
      rtb_Test_DC_Shooter = rtb_FeedForward;
    }

    /* End of Switch: '<S273>/Switch' */
  }

  /* End of Switch: '<S273>/Switch2' */

  /* Saturate: '<S265>/Saturation1' */
  if (rtb_Test_DC_Shooter > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_Test_DC_Shooter < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_Test_DC_Shooter;
  }

  /* End of Saturate: '<S265>/Saturation1' */

  /* Sum: '<S265>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S265>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S265>/Saturation2' */

  /* Switch: '<S394>/Switch' */
  if (!UnitDelay) {
    /* Switch: '<S394>/Switch' incorporates:
     *  Fcn: '<S395>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S394>/Switch' */

  /* Trigonometry: '<S298>/Cos4' incorporates:
   *  Switch: '<S287>/Angle_Switch'
   *  Trigonometry: '<S297>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S256>/Add1' incorporates:
   *  Constant: '<S256>/Constant3'
   *  Constant: '<S256>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S256>/Math Function'
   *  Sum: '<S18>/Add1'
   *  Sum: '<S256>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S298>/Sin5' incorporates:
   *  UnaryMinus: '<S296>/Unary Minus'
   */
  rtb_Minus_k_idx_0 = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S298>/Sin4' incorporates:
   *  Switch: '<S287>/Angle_Switch'
   *  Trigonometry: '<S297>/Sin4'
   */
  rtb_Subtract1_inz = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S298>/Cos5' incorporates:
   *  UnaryMinus: '<S296>/Unary Minus'
   */
  rtb_Test_DC_Shooter = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S298>/Subtract1' incorporates:
   *  Product: '<S298>/Product2'
   *  Product: '<S298>/Product3'
   *  Trigonometry: '<S298>/Cos4'
   *  Trigonometry: '<S298>/Sin4'
   */
  rtb_Add_oh = (rtb_Add_gd * rtb_Minus_k_idx_0) + (rtb_Subtract1_inz *
    rtb_Test_DC_Shooter);

  /* Sum: '<S298>/Subtract' incorporates:
   *  Product: '<S298>/Product'
   *  Product: '<S298>/Product1'
   *  Trigonometry: '<S298>/Cos4'
   *  Trigonometry: '<S298>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Add_gd * rtb_Test_DC_Shooter) - (rtb_Subtract1_inz *
    rtb_Minus_k_idx_0);

  /* Math: '<S298>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S298>/Switch' incorporates:
   *  Constant: '<S298>/Constant'
   *  Constant: '<S298>/Constant1'
   *  Constant: '<S299>/Constant'
   *  Product: '<S298>/Divide'
   *  Product: '<S298>/Divide1'
   *  RelationalOperator: '<S299>/Compare'
   *  Switch: '<S298>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_rx_d = rtb_Add_oh / rtb_Hypot_bl;
    rtb_Test_DC_Shooter = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_rx_d = 0.0;
    rtb_Test_DC_Shooter = 1.0;
  }

  /* End of Switch: '<S298>/Switch' */

  /* RelationalOperator: '<S295>/Compare' incorporates:
   *  Abs: '<S287>/Abs'
   *  Constant: '<S295>/Constant'
   *  Trigonometry: '<S298>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_Test_DC_Shooter))
    > 1.5707963267948966);

  /* Switch: '<S287>/Angle_Switch' incorporates:
   *  Trigonometry: '<S297>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S297>/Subtract1' incorporates:
     *  Product: '<S297>/Product2'
     *  Product: '<S297>/Product3'
     */
    rtb_Add_oh = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract1_inz * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S297>/Subtract' incorporates:
     *  Product: '<S297>/Product'
     *  Product: '<S297>/Product1'
     */
    rtb_Hypot_bl = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract1_inz * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S297>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S297>/Switch1' incorporates:
     *  Constant: '<S297>/Constant'
     *  Constant: '<S297>/Constant1'
     *  Constant: '<S300>/Constant'
     *  Product: '<S297>/Divide'
     *  Product: '<S297>/Divide1'
     *  RelationalOperator: '<S300>/Compare'
     *  Switch: '<S297>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S297>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_rx_d = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S289>/Sum' incorporates:
   *  Sum: '<S288>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S302>/Add1' incorporates:
   *  Constant: '<S302>/Constant3'
   *  Constant: '<S302>/Constant4'
   *  Math: '<S302>/Math Function'
   *  Sum: '<S289>/Sum'
   *  Sum: '<S302>/Add2'
   */
  rtb_Test_DC_Shooter = rt_modd_snf(rtb_rx_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S304>/Sum1' incorporates:
   *  Constant: '<S289>/Constant2'
   *  Product: '<S304>/Product'
   *  Sum: '<S304>/Sum'
   *  UnitDelay: '<S304>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_Test_DC_Shooter - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S289>/Product' incorporates:
   *  Constant: '<S289>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S303>/Diff' incorporates:
   *  UnitDelay: '<S303>/UD'
   *
   * Block description for '<S303>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S303>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S289>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S289>/Add' incorporates:
   *  Gain: '<S289>/Gain1'
   *  Saturate: '<S289>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_Test_DC_Shooter) + Rot_Mat_idx_0;

  /* Sum: '<S289>/Subtract' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_Minus_k_idx_0 = 1.0 - rtb_Add_i;

  /* Sum: '<S289>/Sum2' incorporates:
   *  Gain: '<S289>/Gain2'
   *  UnitDelay: '<S289>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_Test_DC_Shooter) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S305>/Switch2' incorporates:
   *  Constant: '<S289>/Constant'
   *  RelationalOperator: '<S305>/LowerRelop1'
   *  Sum: '<S289>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S305>/Switch' incorporates:
     *  Constant: '<S289>/Constant1'
     *  RelationalOperator: '<S305>/UpperRelop'
     *  Sum: '<S289>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_Minus_k_idx_0 = -1.0 - rtb_Add_i;
    } else {
      rtb_Minus_k_idx_0 = rtb_Hypot_bl;
    }

    /* End of Switch: '<S305>/Switch' */
  }

  /* End of Switch: '<S305>/Switch2' */

  /* Saturate: '<S289>/Saturation1' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S289>/Saturation1' */

  /* Sum: '<S289>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S289>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S289>/Saturation2' */

  /* Product: '<S384>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S287>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S287>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    y = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    y = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S290>/Product2' incorporates:
   *  Constant: '<S290>/Constant'
   *  Switch: '<S287>/Speed_Switch'
   */
  rtb_Test_DC_Shooter = y * 1150.4247703785388;

  /* Signum: '<S285>/Sign' */
  if (rtIsNaN(rtb_Test_DC_Shooter)) {
    y = (rtNaN);
  } else if (rtb_Test_DC_Shooter < 0.0) {
    y = -1.0;
  } else {
    y = (rtb_Test_DC_Shooter > 0.0);
  }

  /* Signum: '<S285>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Subtract1_bx = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Subtract1_bx = -1.0;
  } else {
    rtb_Subtract1_bx = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S260>/Product' incorporates:
   *  Abs: '<S285>/Abs'
   *  Abs: '<S288>/Abs'
   *  Constant: '<S291>/Constant'
   *  Constant: '<S301>/Constant3'
   *  Constant: '<S301>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S285>/OR'
   *  Lookup_n-D: '<S288>/1-D Lookup Table'
   *  Math: '<S301>/Math Function'
   *  RelationalOperator: '<S285>/Equal1'
   *  RelationalOperator: '<S291>/Compare'
   *  Signum: '<S285>/Sign'
   *  Signum: '<S285>/Sign1'
   *  Sum: '<S301>/Add1'
   *  Sum: '<S301>/Add2'
   */
  rtb_Test_DC_Shooter = (((real_T)((y == rtb_Subtract1_bx) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Test_DC_Shooter) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
                  Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S286>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_Test_DC_Shooter;

  /* Sum: '<S286>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Test_DC_Shooter -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S293>/Sum1' incorporates:
   *  Constant: '<S286>/Constant2'
   *  Product: '<S293>/Product'
   *  Sum: '<S293>/Sum'
   *  UnitDelay: '<S293>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_Test_DC_Shooter - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S286>/Product' incorporates:
   *  Constant: '<S286>/Constant3'
   */
  rtb_Subtract1_kg = rtb_Add_i * Drive_Motor_Control_D;

  /* Sum: '<S292>/Diff' incorporates:
   *  UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_kg - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S286>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S286>/Add' incorporates:
   *  Gain: '<S286>/Gain1'
   *  Saturate: '<S286>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_Test_DC_Shooter) +
                rtb_FeedForward_n) + Rot_Mat_idx_0;

  /* Sum: '<S286>/Subtract' incorporates:
   *  Constant: '<S286>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Add_o2;

  /* Sum: '<S286>/Sum2' incorporates:
   *  Gain: '<S286>/Gain2'
   *  UnitDelay: '<S286>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_Test_DC_Shooter) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S294>/Switch2' incorporates:
   *  Constant: '<S286>/Constant'
   *  RelationalOperator: '<S294>/LowerRelop1'
   *  Sum: '<S286>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S294>/Switch' incorporates:
     *  Constant: '<S286>/Constant1'
     *  RelationalOperator: '<S294>/UpperRelop'
     *  Sum: '<S286>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_rx_d = -1.0 - rtb_Add_o2;
    } else {
      rtb_rx_d = rtb_FeedForward_n;
    }

    /* End of Switch: '<S294>/Switch' */
  }

  /* End of Switch: '<S294>/Switch2' */

  /* Saturate: '<S286>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_rx_d;
  }

  /* End of Saturate: '<S286>/Saturation1' */

  /* Sum: '<S286>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S286>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S286>/Saturation2' */

  /* Switch: '<S399>/Switch' */
  if (!rtb_FixPtRelationalOperator_fh) {
    /* Switch: '<S399>/Switch' incorporates:
     *  Fcn: '<S400>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S399>/Switch' */

  /* Trigonometry: '<S319>/Cos4' incorporates:
   *  Switch: '<S308>/Angle_Switch'
   *  Trigonometry: '<S318>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S257>/Add1' incorporates:
   *  Constant: '<S257>/Constant3'
   *  Constant: '<S257>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S257>/Math Function'
   *  Sum: '<S18>/Add2'
   *  Sum: '<S257>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S319>/Sin5' incorporates:
   *  UnaryMinus: '<S317>/Unary Minus'
   */
  rtb_Minus_k_idx_0 = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S319>/Sin4' incorporates:
   *  Switch: '<S308>/Angle_Switch'
   *  Trigonometry: '<S318>/Sin4'
   */
  rtb_Subtract1_inz = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S319>/Cos5' incorporates:
   *  UnaryMinus: '<S317>/Unary Minus'
   */
  rtb_Test_DC_Shooter = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S319>/Subtract1' incorporates:
   *  Product: '<S319>/Product2'
   *  Product: '<S319>/Product3'
   *  Trigonometry: '<S319>/Cos4'
   *  Trigonometry: '<S319>/Sin4'
   */
  rtb_Add_o2 = (rtb_Add_gd * rtb_Minus_k_idx_0) + (rtb_Subtract1_inz *
    rtb_Test_DC_Shooter);

  /* Sum: '<S319>/Subtract' incorporates:
   *  Product: '<S319>/Product'
   *  Product: '<S319>/Product1'
   *  Trigonometry: '<S319>/Cos4'
   *  Trigonometry: '<S319>/Sin4'
   */
  rtb_Subtract1_n = (rtb_Add_gd * rtb_Test_DC_Shooter) - (rtb_Subtract1_inz *
    rtb_Minus_k_idx_0);

  /* Math: '<S319>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_n, rtb_Add_o2);

  /* Switch: '<S319>/Switch' incorporates:
   *  Constant: '<S319>/Constant'
   *  Constant: '<S319>/Constant1'
   *  Constant: '<S320>/Constant'
   *  Product: '<S319>/Divide'
   *  Product: '<S319>/Divide1'
   *  RelationalOperator: '<S320>/Compare'
   *  Switch: '<S319>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_rx_d = rtb_Add_o2 / rtb_Hypot_d;
    rtb_Test_DC_Shooter = rtb_Subtract1_n / rtb_Hypot_d;
  } else {
    rtb_rx_d = 0.0;
    rtb_Test_DC_Shooter = 1.0;
  }

  /* End of Switch: '<S319>/Switch' */

  /* RelationalOperator: '<S316>/Compare' incorporates:
   *  Abs: '<S308>/Abs'
   *  Constant: '<S316>/Constant'
   *  Trigonometry: '<S319>/Atan1'
   */
  rtb_FixPtRelationalOperator_fh = (fabs(rt_atan2d_snf(rtb_rx_d,
    rtb_Test_DC_Shooter)) > 1.5707963267948966);

  /* Switch: '<S308>/Angle_Switch' incorporates:
   *  Trigonometry: '<S318>/Atan1'
   */
  if (rtb_FixPtRelationalOperator_fh) {
    /* Sum: '<S318>/Subtract1' incorporates:
     *  Product: '<S318>/Product2'
     *  Product: '<S318>/Product3'
     */
    rtb_Add_o2 = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Subtract1_inz * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S318>/Subtract' incorporates:
     *  Product: '<S318>/Product'
     *  Product: '<S318>/Product1'
     */
    rtb_Hypot_d = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Subtract1_inz * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S318>/Hypot' */
    rtb_Subtract1_n = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S318>/Switch1' incorporates:
     *  Constant: '<S318>/Constant'
     *  Constant: '<S318>/Constant1'
     *  Constant: '<S321>/Constant'
     *  Product: '<S318>/Divide'
     *  Product: '<S318>/Divide1'
     *  RelationalOperator: '<S321>/Compare'
     *  Switch: '<S318>/Switch'
     */
    if (rtb_Subtract1_n > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_n;
      rtb_Add_o2 /= rtb_Subtract1_n;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S318>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_rx_d = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S310>/Sum' incorporates:
   *  Sum: '<S309>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S323>/Add1' incorporates:
   *  Constant: '<S323>/Constant3'
   *  Constant: '<S323>/Constant4'
   *  Math: '<S323>/Math Function'
   *  Sum: '<S310>/Sum'
   *  Sum: '<S323>/Add2'
   */
  rtb_Test_DC_Shooter = rt_modd_snf(rtb_rx_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S325>/Sum1' incorporates:
   *  Constant: '<S310>/Constant2'
   *  Product: '<S325>/Product'
   *  Sum: '<S325>/Sum'
   *  UnitDelay: '<S325>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_Test_DC_Shooter - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S310>/Product' incorporates:
   *  Constant: '<S310>/Constant3'
   */
  rtb_Subtract1_n = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S324>/Diff' incorporates:
   *  UnitDelay: '<S324>/UD'
   *
   * Block description for '<S324>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S324>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_n - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S310>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S310>/Add' incorporates:
   *  Gain: '<S310>/Gain1'
   *  Saturate: '<S310>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_Test_DC_Shooter) + Rot_Mat_idx_0;

  /* Sum: '<S310>/Subtract' incorporates:
   *  Constant: '<S310>/Constant'
   */
  rtb_Minus_k_idx_0 = 1.0 - rtb_Add_gj;

  /* Sum: '<S310>/Sum2' incorporates:
   *  Gain: '<S310>/Gain2'
   *  UnitDelay: '<S310>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_Test_DC_Shooter) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S326>/Switch2' incorporates:
   *  Constant: '<S310>/Constant'
   *  RelationalOperator: '<S326>/LowerRelop1'
   *  Sum: '<S310>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S326>/Switch' incorporates:
     *  Constant: '<S310>/Constant1'
     *  RelationalOperator: '<S326>/UpperRelop'
     *  Sum: '<S310>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_Minus_k_idx_0 = -1.0 - rtb_Add_gj;
    } else {
      rtb_Minus_k_idx_0 = rtb_Hypot_d;
    }

    /* End of Switch: '<S326>/Switch' */
  }

  /* End of Switch: '<S326>/Switch2' */

  /* Saturate: '<S310>/Saturation1' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S310>/Saturation1' */

  /* Sum: '<S310>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S310>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S310>/Saturation2' */

  /* Product: '<S384>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S308>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S308>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator_fh) {
    y = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    y = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S311>/Product2' incorporates:
   *  Constant: '<S311>/Constant'
   *  Switch: '<S308>/Speed_Switch'
   */
  rtb_Test_DC_Shooter = y * 1150.4247703785388;

  /* Signum: '<S306>/Sign' */
  if (rtIsNaN(rtb_Test_DC_Shooter)) {
    y = (rtNaN);
  } else if (rtb_Test_DC_Shooter < 0.0) {
    y = -1.0;
  } else {
    y = (rtb_Test_DC_Shooter > 0.0);
  }

  /* Signum: '<S306>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Subtract1_bx = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Subtract1_bx = -1.0;
  } else {
    rtb_Subtract1_bx = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S261>/Product' incorporates:
   *  Abs: '<S306>/Abs'
   *  Abs: '<S309>/Abs'
   *  Constant: '<S312>/Constant'
   *  Constant: '<S322>/Constant3'
   *  Constant: '<S322>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S306>/OR'
   *  Lookup_n-D: '<S309>/1-D Lookup Table'
   *  Math: '<S322>/Math Function'
   *  RelationalOperator: '<S306>/Equal1'
   *  RelationalOperator: '<S312>/Compare'
   *  Signum: '<S306>/Sign'
   *  Signum: '<S306>/Sign1'
   *  Sum: '<S322>/Add1'
   *  Sum: '<S322>/Add2'
   */
  rtb_Test_DC_Shooter = (((real_T)((y == rtb_Subtract1_bx) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Test_DC_Shooter) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
                  Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S307>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_Test_DC_Shooter;

  /* Sum: '<S307>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Test_DC_Shooter -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S314>/Sum1' incorporates:
   *  Constant: '<S307>/Constant2'
   *  Product: '<S314>/Product'
   *  Sum: '<S314>/Sum'
   *  UnitDelay: '<S314>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_Test_DC_Shooter - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S307>/Product' incorporates:
   *  Constant: '<S307>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

  /* Sum: '<S313>/Diff' incorporates:
   *  UnitDelay: '<S313>/UD'
   *
   * Block description for '<S313>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S313>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S307>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S307>/Add' incorporates:
   *  Gain: '<S307>/Gain1'
   *  Saturate: '<S307>/Saturation'
   */
  rtb_Add_gd = ((Drive_Motor_Control_P * rtb_Test_DC_Shooter) +
                rtb_FeedForward_a) + Rot_Mat_idx_0;

  /* Sum: '<S307>/Subtract' incorporates:
   *  Constant: '<S307>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Add_gd;

  /* Sum: '<S307>/Sum2' incorporates:
   *  Gain: '<S307>/Gain2'
   *  UnitDelay: '<S307>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_Test_DC_Shooter) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S315>/Switch2' incorporates:
   *  Constant: '<S307>/Constant'
   *  RelationalOperator: '<S315>/LowerRelop1'
   *  Sum: '<S307>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_Add_gd))) {
    /* Switch: '<S315>/Switch' incorporates:
     *  Constant: '<S307>/Constant1'
     *  RelationalOperator: '<S315>/UpperRelop'
     *  Sum: '<S307>/Subtract1'
     */
    if (rtb_FeedForward_a < (-1.0 - rtb_Add_gd)) {
      rtb_rx_d = -1.0 - rtb_Add_gd;
    } else {
      rtb_rx_d = rtb_FeedForward_a;
    }

    /* End of Switch: '<S315>/Switch' */
  }

  /* End of Switch: '<S315>/Switch2' */

  /* Saturate: '<S307>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_rx_d;
  }

  /* End of Saturate: '<S307>/Saturation1' */

  /* Sum: '<S307>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_gd + rtb_FeedForward_a;

  /* Saturate: '<S307>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S307>/Saturation2' */

  /* Switch: '<S404>/Switch' */
  if (!rtb_FixPtRelationalOperator_h) {
    /* Switch: '<S404>/Switch' incorporates:
     *  Fcn: '<S405>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S404>/Switch' */

  /* Trigonometry: '<S340>/Cos4' incorporates:
   *  Switch: '<S329>/Angle_Switch'
   *  Trigonometry: '<S339>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S258>/Add1' incorporates:
   *  Constant: '<S258>/Constant3'
   *  Constant: '<S258>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S258>/Math Function'
   *  Sum: '<S18>/Add3'
   *  Sum: '<S258>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S340>/Sin5' incorporates:
   *  UnaryMinus: '<S338>/Unary Minus'
   */
  rtb_Minus_k_idx_0 = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S340>/Sin4' incorporates:
   *  Switch: '<S329>/Angle_Switch'
   *  Trigonometry: '<S339>/Sin4'
   */
  rtb_Subtract1_inz = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S340>/Cos5' incorporates:
   *  UnaryMinus: '<S338>/Unary Minus'
   */
  rtb_Test_DC_Shooter = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S340>/Subtract1' incorporates:
   *  Product: '<S340>/Product2'
   *  Product: '<S340>/Product3'
   *  Trigonometry: '<S340>/Cos4'
   *  Trigonometry: '<S340>/Sin4'
   */
  rtb_Subtract1_bx = (rtb_Add_gd * rtb_Minus_k_idx_0) + (rtb_Subtract1_inz *
    rtb_Test_DC_Shooter);

  /* Sum: '<S340>/Subtract' incorporates:
   *  Product: '<S340>/Product'
   *  Product: '<S340>/Product1'
   *  Trigonometry: '<S340>/Cos4'
   *  Trigonometry: '<S340>/Sin4'
   */
  rtb_Minus_k_idx_0 = (rtb_Add_gd * rtb_Test_DC_Shooter) - (rtb_Subtract1_inz *
    rtb_Minus_k_idx_0);

  /* Math: '<S340>/Hypot' */
  rtb_Hypot_em = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Subtract1_bx);

  /* Switch: '<S340>/Switch' incorporates:
   *  Constant: '<S340>/Constant'
   *  Constant: '<S340>/Constant1'
   *  Constant: '<S341>/Constant'
   *  Product: '<S340>/Divide'
   *  Product: '<S340>/Divide1'
   *  RelationalOperator: '<S341>/Compare'
   *  Switch: '<S340>/Switch1'
   */
  if (rtb_Hypot_em > 1.0E-6) {
    rtb_rx_d = rtb_Subtract1_bx / rtb_Hypot_em;
    rtb_Test_DC_Shooter = rtb_Minus_k_idx_0 / rtb_Hypot_em;
  } else {
    rtb_rx_d = 0.0;
    rtb_Test_DC_Shooter = 1.0;
  }

  /* End of Switch: '<S340>/Switch' */

  /* RelationalOperator: '<S337>/Compare' incorporates:
   *  Abs: '<S329>/Abs'
   *  Constant: '<S337>/Constant'
   *  Trigonometry: '<S340>/Atan1'
   */
  rtb_FixPtRelationalOperator_h = (fabs(rt_atan2d_snf(rtb_rx_d,
    rtb_Test_DC_Shooter)) > 1.5707963267948966);

  /* Switch: '<S329>/Angle_Switch' incorporates:
   *  Trigonometry: '<S339>/Atan1'
   */
  if (rtb_FixPtRelationalOperator_h) {
    /* Sum: '<S339>/Subtract1' incorporates:
     *  Product: '<S339>/Product2'
     *  Product: '<S339>/Product3'
     */
    rtb_Minus_k_idx_0 = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Subtract1_inz * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S339>/Subtract' incorporates:
     *  Product: '<S339>/Product'
     *  Product: '<S339>/Product1'
     */
    rtb_Subtract1_inz = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract1_inz * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S339>/Hypot' */
    rtb_Add_gd = rt_hypotd_snf(rtb_Subtract1_inz, rtb_Minus_k_idx_0);

    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S339>/Constant'
     *  Constant: '<S339>/Constant1'
     *  Constant: '<S342>/Constant'
     *  Product: '<S339>/Divide'
     *  Product: '<S339>/Divide1'
     *  RelationalOperator: '<S342>/Compare'
     *  Switch: '<S339>/Switch'
     */
    if (rtb_Add_gd > 1.0E-6) {
      rtb_Subtract1_inz /= rtb_Add_gd;
      rtb_Add_gd = rtb_Minus_k_idx_0 / rtb_Add_gd;
    } else {
      rtb_Subtract1_inz = 1.0;
      rtb_Add_gd = 0.0;
    }

    /* End of Switch: '<S339>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_gd, rtb_Subtract1_inz);
  } else {
    rtb_rx_d = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S331>/Sum' incorporates:
   *  Sum: '<S330>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S344>/Add1' incorporates:
   *  Constant: '<S344>/Constant3'
   *  Constant: '<S344>/Constant4'
   *  Math: '<S344>/Math Function'
   *  Sum: '<S331>/Sum'
   *  Sum: '<S344>/Add2'
   */
  rtb_Test_DC_Shooter = rt_modd_snf(rtb_rx_d + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S346>/Sum1' incorporates:
   *  Constant: '<S331>/Constant2'
   *  Product: '<S346>/Product'
   *  Sum: '<S346>/Sum'
   *  UnitDelay: '<S346>/Unit Delay1'
   */
  rtb_Add_gd = ((rtb_Test_DC_Shooter - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S331>/Product' incorporates:
   *  Constant: '<S331>/Constant3'
   */
  rtb_Subtract1_inz = rtb_Add_gd * Steering_Motor_Control_D;

  /* Sum: '<S345>/Diff' incorporates:
   *  UnitDelay: '<S345>/UD'
   *
   * Block description for '<S345>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S345>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_inz - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S331>/Saturation' */
  if (Rot_Mat_idx_0 > Steering_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Steering_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S331>/Add' incorporates:
   *  Gain: '<S331>/Gain1'
   *  Saturate: '<S331>/Saturation'
   */
  rtb_Subtract1_bx = (Steering_Motor_Control_P * rtb_Test_DC_Shooter) +
    Rot_Mat_idx_0;

  /* Sum: '<S331>/Subtract' incorporates:
   *  Constant: '<S331>/Constant'
   */
  rtb_Minus_k_idx_0 = 1.0 - rtb_Subtract1_bx;

  /* Sum: '<S331>/Sum2' incorporates:
   *  Gain: '<S331>/Gain2'
   *  UnitDelay: '<S331>/Unit Delay'
   */
  rtb_Hypot_em = (Steering_Motor_Control_I * rtb_Test_DC_Shooter) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S347>/Switch2' incorporates:
   *  Constant: '<S331>/Constant'
   *  RelationalOperator: '<S347>/LowerRelop1'
   *  Sum: '<S331>/Subtract'
   */
  if (!(rtb_Hypot_em > (1.0 - rtb_Subtract1_bx))) {
    /* Sum: '<S331>/Subtract1' incorporates:
     *  Constant: '<S331>/Constant1'
     */
    rtb_Minus_k_idx_0 = -1.0 - rtb_Subtract1_bx;

    /* Switch: '<S347>/Switch' incorporates:
     *  Constant: '<S331>/Constant1'
     *  RelationalOperator: '<S347>/UpperRelop'
     *  Sum: '<S331>/Subtract1'
     */
    if (!(rtb_Hypot_em < (-1.0 - rtb_Subtract1_bx))) {
      rtb_Minus_k_idx_0 = rtb_Hypot_em;
    }

    /* End of Switch: '<S347>/Switch' */
  }

  /* End of Switch: '<S347>/Switch2' */

  /* Saturate: '<S331>/Saturation1' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_I_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S331>/Saturation1' */

  /* Sum: '<S331>/Add1' */
  Rot_Mat_idx_0 = rtb_Subtract1_bx + rtb_Minus_k_idx_0;

  /* Saturate: '<S331>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S331>/Saturation2' */

  /* Product: '<S384>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_MatrixConcatenate_b_idx_0;

  /* Switch: '<S329>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S329>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator_h) {
    y = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    y = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S332>/Product2' incorporates:
   *  Constant: '<S332>/Constant'
   *  Switch: '<S329>/Speed_Switch'
   */
  rtb_Test_DC_Shooter = y * 1150.4247703785388;

  /* Signum: '<S327>/Sign' */
  if (rtIsNaN(rtb_Test_DC_Shooter)) {
    y = (rtNaN);
  } else if (rtb_Test_DC_Shooter < 0.0) {
    y = -1.0;
  } else {
    y = (rtb_Test_DC_Shooter > 0.0);
  }

  /* Signum: '<S327>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Subtract1_bx = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Subtract1_bx = -1.0;
  } else {
    rtb_Subtract1_bx = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S262>/Product' incorporates:
   *  Abs: '<S327>/Abs'
   *  Abs: '<S330>/Abs'
   *  Constant: '<S333>/Constant'
   *  Constant: '<S343>/Constant3'
   *  Constant: '<S343>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S327>/OR'
   *  Lookup_n-D: '<S330>/1-D Lookup Table'
   *  Math: '<S343>/Math Function'
   *  RelationalOperator: '<S327>/Equal1'
   *  RelationalOperator: '<S333>/Compare'
   *  Signum: '<S327>/Sign'
   *  Signum: '<S327>/Sign1'
   *  Sum: '<S343>/Add1'
   *  Sum: '<S343>/Add2'
   */
  rtb_Test_DC_Shooter = (((real_T)((y == rtb_Subtract1_bx) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Test_DC_Shooter) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled40,
                  Code_Gen_Model_ConstP.pooled39, 1U);

  /* Gain: '<S328>/Gain' */
  rtb_Hypot_em = Drive_Motor_Control_FF * rtb_Test_DC_Shooter;

  /* Sum: '<S328>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Test_DC_Shooter -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S335>/Sum1' incorporates:
   *  Constant: '<S328>/Constant2'
   *  Product: '<S335>/Product'
   *  Sum: '<S335>/Sum'
   *  UnitDelay: '<S335>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Test_DC_Shooter -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S328>/Product' incorporates:
   *  Constant: '<S328>/Constant3'
   */
  rtb_Subtract1_bx = rtb_MatrixConcatenate_b_idx_0 * Drive_Motor_Control_D;

  /* Sum: '<S334>/Diff' incorporates:
   *  UnitDelay: '<S334>/UD'
   *
   * Block description for '<S334>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S334>/UD':
   *
   *  Store in Global RAM
   */
  Rot_Mat_idx_0 = rtb_Subtract1_bx - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S328>/Saturation' */
  if (Rot_Mat_idx_0 > Drive_Motor_Control_D_UL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_UL;
  } else if (Rot_Mat_idx_0 < Drive_Motor_Control_D_LL) {
    Rot_Mat_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S328>/Add' incorporates:
   *  Gain: '<S328>/Gain1'
   *  Saturate: '<S328>/Saturation'
   */
  rtb_Add_ov = ((Drive_Motor_Control_P * rtb_Test_DC_Shooter) + rtb_Hypot_em) +
    Rot_Mat_idx_0;

  /* Sum: '<S328>/Subtract' incorporates:
   *  Constant: '<S328>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Add_ov;

  /* Sum: '<S328>/Sum2' incorporates:
   *  Gain: '<S328>/Gain2'
   *  UnitDelay: '<S328>/Unit Delay'
   */
  rtb_Hypot_em = (Drive_Motor_Control_I * rtb_Test_DC_Shooter) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S336>/Switch2' incorporates:
   *  Constant: '<S328>/Constant'
   *  RelationalOperator: '<S336>/LowerRelop1'
   *  Sum: '<S328>/Subtract'
   */
  if (!(rtb_Hypot_em > (1.0 - rtb_Add_ov))) {
    /* Switch: '<S336>/Switch' incorporates:
     *  Constant: '<S328>/Constant1'
     *  RelationalOperator: '<S336>/UpperRelop'
     *  Sum: '<S328>/Subtract1'
     */
    if (rtb_Hypot_em < (-1.0 - rtb_Add_ov)) {
      rtb_rx_d = -1.0 - rtb_Add_ov;
    } else {
      rtb_rx_d = rtb_Hypot_em;
    }

    /* End of Switch: '<S336>/Switch' */
  }

  /* End of Switch: '<S336>/Switch2' */

  /* Saturate: '<S328>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_Hypot_em = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_Hypot_em = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_em = rtb_rx_d;
  }

  /* End of Saturate: '<S328>/Saturation1' */

  /* Sum: '<S328>/Add1' */
  Rot_Mat_idx_0 = rtb_Add_ov + rtb_Hypot_em;

  /* Saturate: '<S328>/Saturation2' */
  if (Rot_Mat_idx_0 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (Rot_Mat_idx_0 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = Rot_Mat_idx_0;
  }

  /* End of Saturate: '<S328>/Saturation2' */

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  UnitDelay = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 1.0);

  /* RelationalOperator: '<S84>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S84>/Delay Input1'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AT_Tag_5_Active = (((int32_T)UnitDelay) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_f));

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_B.State_Request_Intake_Shooter_h ==
    2.0);

  /* RelationalOperator: '<S85>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S85>/Delay Input1'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Compare_pf = (((int32_T)rtb_Is_Absolute_Steering) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_nx));

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  rtb_FixPtRelationalOperator_fh =
    (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 4.0);

  /* RelationalOperator: '<S87>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S87>/Delay Input1'
   *
   * Block description for '<S87>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_Relative_Translation_Flag = (((int32_T)rtb_FixPtRelationalOperator_fh) >
    ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_o));

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  rtb_FixPtRelationalOperator_h =
    (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 3.0);

  /* RelationalOperator: '<S86>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S86>/Delay Input1'
   *
   * Block description for '<S86>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_AND2 = (((int32_T)rtb_FixPtRelationalOperator_h) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_h));

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   */
  rtb_AND1 = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 5.0);

  /* RelationalOperator: '<S88>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S88>/Delay Input1'
   *
   * Block description for '<S88>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_o = (((int32_T)rtb_AND1) > ((int32_T)
    Code_Gen_Model_DW.DelayInput1_DSTATE_em));

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   */
  rtb_AT_Tag_16_Active = (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 6.0);

  /* RelationalOperator: '<S82>/Compare' incorporates:
   *  Constant: '<S82>/Constant'
   */
  rtb_FixPtRelationalOperator_m =
    (Code_Gen_Model_B.State_Request_Intake_Shooter_h == 7.0);

  /* RelationalOperator: '<S89>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S89>/Delay Input1'
   *
   * Block description for '<S89>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_c = (((int32_T)rtb_FixPtRelationalOperator_m) >
    ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_i));

  /* Chart: '<S10>/Chart_Intake_and_Shooter' incorporates:
   *  Inport: '<Root>/Intake_TOF_Dist'
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   *  Inport: '<Root>/Shooter_TOF_Dist'
   */
  if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
    Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
    Code_Gen_Model_B.Note_State_ID = 0.0;
    Code_Gen_Model_B.Intake_Motor_DC = 0.0;
    Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
    Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
    Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
    Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
  } else {
    guard1 = false;
    switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
     case Code_Gen_Mod_IN_Extra_Run_Time2:
      Code_Gen_Model_B.Note_State_ID = 2.3;
      if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
        guard1 = true;
      } else if (Code_Gen_Model_DW.timer >= Note_Time_Transfer) {
        guard1 = true;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time4:
      Code_Gen_Model_B.Note_State_ID = 4.2;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer) ||
          rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time5:
      Code_Gen_Model_B.Note_State_ID = 5.4;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_16_Active)
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Mod_IN_Extra_Run_Time6:
      Code_Gen_Model_B.Note_State_ID = 5.2;
      if (Code_Gen_Model_DW.timer >= Note_Time_Speaker_Spin_Up) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_Intake;
        Code_Gen_Model_B.Note_State_ID = 5.3;
        Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Co_IN_Note_Speaker_Score_SpinUp;
        Code_Gen_Model_B.Note_State_ID = 5.1;
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = -1.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 1.0;

        /* Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Speaker;
           Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Speaker;
           du: Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Speaker;
           Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Speaker; */
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Eject_from_Shooter:
      Code_Gen_Model_B.Note_State_ID = 3.2;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Eject) || rtb_AT_Tag_16_Active)
      {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_IN_Note_Intake_AND_Shooter:
      Code_Gen_Model_B.Note_State_ID = 4.1;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
      Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
      if ((Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) ||
          rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time4;
        Code_Gen_Model_B.Note_State_ID = 4.2;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Note_Pickup:
      Code_Gen_Model_B.Note_State_ID = 1.0;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist <= Note_Detect_Dist_Intake) ||
          rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      }
      break;

     case Co_IN_Note_Speaker_Score_Intake:
      Code_Gen_Model_B.Note_State_ID = 5.3;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Intake_TOF_Dist > Note_Detect_Dist_Intake) ||
          rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time5;
        Code_Gen_Model_B.Note_State_ID = 5.4;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Co_IN_Note_Speaker_Score_SpinUp:
      Code_Gen_Model_B.Note_State_ID = 5.1;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = -1.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 1.0;
      if ((Code_Gen_Model_U.Shooter_Left_Motor_RPM <
           (-Shooter_Motor_Speed_Transition)) &&
          (Code_Gen_Model_U.Shooter_Right_Motor_RPM >
           Shooter_Motor_Speed_Transition)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time6;
        Code_Gen_Model_B.Note_State_ID = 5.2;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      }
      break;

     case Cod_IN_Note_Transfer_to_Shooter:
      Code_Gen_Model_B.Note_State_ID = 2.2;
      Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      if ((Code_Gen_Model_U.Shooter_TOF_Dist <= Note_Detect_Dist_Shooter) ||
          rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Mod_IN_Extra_Run_Time2;
        Code_Gen_Model_B.Note_State_ID = 2.3;
        Code_Gen_Model_DW.timer = 0.02;
      }
      break;

     case Code_Gen_Mode_IN_Reverse_Intake:
      Code_Gen_Model_B.Note_State_ID = 6.1;
      Code_Gen_Model_B.Intake_Motor_DC = 1.0;
      if ((Code_Gen_Model_DW.timer > 5.0) || rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case IN_Spin_Up_Shooter_Before_Trans:
      Code_Gen_Model_B.Note_State_ID = 2.1;
      Code_Gen_Model_B.Shooter_Motor_Speed_Left = -Shooter_Motor_DesSpd_Store;
      Code_Gen_Model_B.Shooter_Motor_Speed_Right = Shooter_Motor_DesSpd_Store;
      if ((Code_Gen_Model_DW.timer >= Note_Time_Transfer_Spin_Up) &&
          (Code_Gen_Model_DW.timer >= Servo_Time_Deploy)) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Cod_IN_Note_Transfer_to_Shooter;
        Code_Gen_Model_B.Note_State_ID = 2.2;
        Code_Gen_Model_B.Intake_Motor_DC = -1.0;
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_B.Shooter_Servo = Code_Gen_Model_Servo_Down;
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Store_Servo:
      Code_Gen_Model_B.Note_State_ID = 3.1;
      if (Code_Gen_Model_DW.timer >= Servo_Time_Store) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_IN_Note_Eject_from_Shooter;
        Code_Gen_Model_B.Note_State_ID = 3.2;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = -Shooter_DC_Eject;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = Shooter_DC_Eject;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (rtb_AT_Tag_16_Active) {
        Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
        Code_Gen_Model_B.Note_State_ID = 0.0;
        Code_Gen_Model_B.Intake_Motor_DC = 0.0;
        Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
        Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
        Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
        Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Waiting_for_Requests: */
      Code_Gen_M_Waiting_for_Requests(&rtb_AT_Tag_5_Active, &rtb_Compare_pf,
        &rtb_Relative_Translation_Flag, &rtb_AND2, &FixPtRelationalOperator_o,
        &FixPtRelationalOperator_c);
      break;
    }

    if (guard1) {
      Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Waiting_for_Requests;
      Code_Gen_Model_B.Note_State_ID = 0.0;
      Code_Gen_Model_B.Intake_Motor_DC = 0.0;
      Code_Gen_Model_B.Shooter_Brake_Enable_out = true;
      Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena = false;
      Code_Gen_Model_B.Shooter_Motor_DC_Left = 0.0;
      Code_Gen_Model_B.Shooter_Motor_DC_Right = 0.0;
    }
  }

  /* End of Chart: '<S10>/Chart_Intake_and_Shooter' */

  /* Switch: '<S10>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Intake_Motor_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain4'
     *  Inport: '<Root>/Gamepad_LB'
     */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = Test_DC_Gain_Intake *
      Code_Gen_Model_U.Gamepad_LB;
  } else {
    /* Outport: '<Root>/Intake_Motor_DutyCycle' */
    Code_Gen_Model_Y.Intake_Motor_DutyCycle = Code_Gen_Model_B.Intake_Motor_DC;
  }

  /* End of Switch: '<S10>/Switch3' */

  /* Gain: '<S9>/Gain5' incorporates:
   *  Inport: '<Root>/Gamepad_RB'
   */
  rtb_Test_DC_Shooter = Test_DC_Gain_Shooter * Code_Gen_Model_U.Gamepad_RB;

  /* Sum: '<S90>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Left_Motor_RPM'
   */
  rtb_Add_ov = Code_Gen_Model_B.Shooter_Motor_Speed_Left -
    Code_Gen_Model_U.Shooter_Left_Motor_RPM;

  /* Sum: '<S90>/Add' incorporates:
   *  Gain: '<S90>/Gain'
   *  Gain: '<S90>/Gain1'
   */
  rtb_Subtract1_b = (Shooter_Motor_Control_FF *
                     Code_Gen_Model_B.Shooter_Motor_Speed_Left) +
    (Shooter_Motor_Control_P * rtb_Add_ov);

  /* Switch: '<S90>/Switch' incorporates:
   *  Constant: '<S90>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S90>/Sum2' incorporates:
     *  Gain: '<S90>/Gain2'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtb_Add_ov = (Shooter_Motor_Control_I * rtb_Add_ov) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_mw;

    /* Sum: '<S90>/Subtract' incorporates:
     *  Constant: '<S90>/Constant'
     */
    rtb_rx_d = 1.0 - rtb_Subtract1_b;

    /* Switch: '<S92>/Switch2' incorporates:
     *  Constant: '<S90>/Constant'
     *  RelationalOperator: '<S92>/LowerRelop1'
     *  Sum: '<S90>/Subtract'
     */
    if (!(rtb_Add_ov > (1.0 - rtb_Subtract1_b))) {
      /* Sum: '<S90>/Subtract1' incorporates:
       *  Constant: '<S90>/Constant1'
       */
      rtb_rx_d = -1.0 - rtb_Subtract1_b;

      /* Switch: '<S92>/Switch' incorporates:
       *  Constant: '<S90>/Constant1'
       *  RelationalOperator: '<S92>/UpperRelop'
       *  Sum: '<S90>/Subtract1'
       */
      if (!(rtb_Add_ov < (-1.0 - rtb_Subtract1_b))) {
        rtb_rx_d = rtb_Add_ov;
      }

      /* End of Switch: '<S92>/Switch' */
    }

    /* End of Switch: '<S92>/Switch2' */

    /* Saturate: '<S90>/Saturation1' */
    if (rtb_rx_d > Shooter_Motor_Control_I_UL) {
      rtb_Add_ov = Shooter_Motor_Control_I_UL;
    } else if (rtb_rx_d < Shooter_Motor_Control_I_LL) {
      rtb_Add_ov = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Add_ov = rtb_rx_d;
    }

    /* End of Saturate: '<S90>/Saturation1' */
  } else {
    rtb_Add_ov = 0.0;
  }

  /* End of Switch: '<S90>/Switch' */

  /* Switch: '<S10>/Switch4' incorporates:
   *  Switch: '<S10>/Switch'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  UnaryMinus: '<S10>/Unary Minus'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -rtb_Test_DC_Shooter;
  } else if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S90>/Add1' incorporates:
     *  Switch: '<S10>/Switch'
     */
    Rot_Mat_idx_0 = rtb_Subtract1_b + rtb_Add_ov;

    /* Saturate: '<S90>/Saturation2' incorporates:
     *  Switch: '<S10>/Switch'
     */
    if (Rot_Mat_idx_0 > 1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = 1.0;
    } else if (Rot_Mat_idx_0 < -1.0) {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = -1.0;
    } else {
      /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' */
      Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S90>/Saturation2' */
  } else {
    /* Outport: '<Root>/Shooter_Left_Motor_DutyCycle' incorporates:
     *  Switch: '<S10>/Switch'
     */
    Code_Gen_Model_Y.Shooter_Left_Motor_DutyCycle =
      Code_Gen_Model_B.Shooter_Motor_DC_Left;
  }

  /* End of Switch: '<S10>/Switch4' */

  /* Sum: '<S91>/Sum' incorporates:
   *  Inport: '<Root>/Shooter_Right_Motor_RPM'
   */
  rtb_Subtract1_b = Code_Gen_Model_B.Shooter_Motor_Speed_Right -
    Code_Gen_Model_U.Shooter_Right_Motor_RPM;

  /* Sum: '<S91>/Add' incorporates:
   *  Gain: '<S91>/Gain'
   *  Gain: '<S91>/Gain1'
   */
  rtb_rx_d = (Shooter_Motor_Control_FF *
              Code_Gen_Model_B.Shooter_Motor_Speed_Right) +
    (Shooter_Motor_Control_P * rtb_Subtract1_b);

  /* Switch: '<S91>/Switch' incorporates:
   *  Constant: '<S91>/Constant2'
   */
  if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
    /* Sum: '<S91>/Sum2' incorporates:
     *  Gain: '<S91>/Gain2'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_Subtract1_b = (Shooter_Motor_Control_I * rtb_Subtract1_b) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S91>/Subtract' incorporates:
     *  Constant: '<S91>/Constant'
     */
    Rot_Mat_idx_0 = 1.0 - rtb_rx_d;

    /* Switch: '<S93>/Switch2' incorporates:
     *  Constant: '<S91>/Constant'
     *  RelationalOperator: '<S93>/LowerRelop1'
     *  Sum: '<S91>/Subtract'
     */
    if (!(rtb_Subtract1_b > (1.0 - rtb_rx_d))) {
      /* Sum: '<S91>/Subtract1' incorporates:
       *  Constant: '<S91>/Constant1'
       */
      Rot_Mat_idx_0 = -1.0 - rtb_rx_d;

      /* Switch: '<S93>/Switch' incorporates:
       *  Constant: '<S91>/Constant1'
       *  RelationalOperator: '<S93>/UpperRelop'
       *  Sum: '<S91>/Subtract1'
       */
      if (!(rtb_Subtract1_b < (-1.0 - rtb_rx_d))) {
        Rot_Mat_idx_0 = rtb_Subtract1_b;
      }

      /* End of Switch: '<S93>/Switch' */
    }

    /* End of Switch: '<S93>/Switch2' */

    /* Saturate: '<S91>/Saturation1' */
    if (Rot_Mat_idx_0 > Shooter_Motor_Control_I_UL) {
      rtb_Subtract1_b = Shooter_Motor_Control_I_UL;
    } else if (Rot_Mat_idx_0 < Shooter_Motor_Control_I_LL) {
      rtb_Subtract1_b = Shooter_Motor_Control_I_LL;
    } else {
      rtb_Subtract1_b = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S91>/Saturation1' */
  } else {
    rtb_Subtract1_b = 0.0;
  }

  /* End of Switch: '<S91>/Switch' */

  /* Switch: '<S10>/Switch5' incorporates:
   *  Switch: '<S10>/Switch1'
   *  Switch: '<S10>/Switch7'
   */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
    Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = rtb_Test_DC_Shooter;

    /* Outport: '<Root>/Shooter_Brake_Enable' incorporates:
     *  Constant: '<S10>/Constant3'
     */
    Code_Gen_Model_Y.Shooter_Brake_Enable = 0.0;
  } else {
    if (Code_Gen_Model_B.Shooter_Motor_Speed_Control_Ena) {
      /* Sum: '<S91>/Add1' incorporates:
       *  Switch: '<S10>/Switch1'
       */
      Rot_Mat_idx_0 = rtb_rx_d + rtb_Subtract1_b;

      /* Saturate: '<S91>/Saturation2' incorporates:
       *  Switch: '<S10>/Switch1'
       */
      if (Rot_Mat_idx_0 > 1.0) {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = 1.0;
      } else if (Rot_Mat_idx_0 < -1.0) {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = -1.0;
      } else {
        /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' */
        Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle = Rot_Mat_idx_0;
      }

      /* End of Saturate: '<S91>/Saturation2' */
    } else {
      /* Outport: '<Root>/Shooter_Right_Motor_DutyCycle' incorporates:
       *  Switch: '<S10>/Switch1'
       */
      Code_Gen_Model_Y.Shooter_Right_Motor_DutyCycle =
        Code_Gen_Model_B.Shooter_Motor_DC_Right;
    }

    /* Outport: '<Root>/Shooter_Brake_Enable' */
    Code_Gen_Model_Y.Shooter_Brake_Enable =
      Code_Gen_Model_B.Shooter_Brake_Enable_out;
  }

  /* End of Switch: '<S10>/Switch5' */

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  y = floor(Code_Gen_Model_B.State_Request_Arm_d);
  if ((rtIsNaN(y)) || (rtIsInf(y))) {
    y = 0.0;
  } else {
    y = fmod(y, 256.0);
  }

  rtb_Prev_GameState = (uint8_T)((y < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-y)))))) : ((int32_T)((uint8_T)y)));

  /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant4'
   *  Inport: '<Root>/IsBlueAlliance'
   *  Switch: '<S7>/Switch'
   */
  if (TEST_Speaker_Distance != 0.0) {
    /* Switch: '<S7>/Switch2' */
    Code_Gen_Model_B.Speaker_Distance = TEST_Speaker_Distance;
  } else if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Math: '<S7>/Hypot'
     *  Switch: '<S7>/Switch2'
     */
    Code_Gen_Model_B.Speaker_Distance = rt_hypotd_snf(rtb_Subtract,
      rtb_Subtract1);
  } else {
    /* Switch: '<S7>/Switch2' incorporates:
     *  Math: '<S7>/Hypot1'
     *  Switch: '<S7>/Switch'
     */
    Code_Gen_Model_B.Speaker_Distance = rt_hypotd_snf(rtb_Subtract2,
      rtb_Subtract3);
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Switch: '<S16>/Switch5' incorporates:
   *  Constant: '<S16>/Constant26'
   *  Lookup_n-D: '<S16>/1-D Lookup Table1'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Angle != 0.0) {
    rtb_Subtract1 = TEST_Speaker_Angle;
  } else {
    rtb_Subtract1 = look1_binlcpw(Code_Gen_Model_B.Speaker_Distance,
      Code_Gen_Model_ConstP.pooled1,
      Code_Gen_Model_ConstP.uDLookupTable1_tableData, 8U);
  }

  /* End of Switch: '<S16>/Switch5' */

  /* Switch: '<S16>/Switch4' incorporates:
   *  Constant: '<S16>/Constant25'
   *  Lookup_n-D: '<S16>/1-D Lookup Table2'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Height != 0.0) {
    rtb_Subtract = TEST_Speaker_Height;
  } else {
    rtb_Subtract = look1_binlcpw(Code_Gen_Model_B.Speaker_Distance,
      Code_Gen_Model_ConstP.pooled1,
      Code_Gen_Model_ConstP.uDLookupTable2_tableData, 8U);
  }

  /* End of Switch: '<S16>/Switch4' */

  /* Switch: '<S16>/Switch6' incorporates:
   *  Constant: '<S16>/Constant27'
   *  Lookup_n-D: '<S16>/1-D Lookup Table3'
   *  Switch: '<S7>/Switch2'
   */
  if (TEST_Speaker_Gap != 0.0) {
    rtb_Subtract3 = TEST_Speaker_Gap;
  } else {
    rtb_Subtract3 = look1_binlcpw(Code_Gen_Model_B.Speaker_Distance,
      Code_Gen_Model_ConstP.pooled1,
      Code_Gen_Model_ConstP.uDLookupTable3_tableData, 8U);
  }

  /* End of Switch: '<S16>/Switch6' */

  /* Sum: '<S22>/Subtract1' incorporates:
   *  Constant: '<S22>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Lower'
   *  Product: '<S22>/Product'
   *  UnitDelay: '<S22>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Lower_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Lower * Dist_Per_Rev_Back_Lower) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g;

  /* Sum: '<S23>/Subtract1' incorporates:
   *  Constant: '<S23>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Back_Upper'
   *  Product: '<S23>/Product'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  Code_Gen_Model_B.Back_Upper_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Back_Upper * Dist_Per_Rev_Back_Upper) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc;

  /* Sum: '<S162>/Add' incorporates:
   *  Constant: '<S162>/Constant24'
   */
  rtb_rx_d = (Code_Gen_Model_B.Back_Lower_Arm_Length +
              Code_Gen_Model_B.Back_Upper_Arm_Length) + 421.79999999999995;

  /* Sqrt: '<S162>/Sqrt' incorporates:
   *  Math: '<S162>/Math Function'
   *  Sum: '<S162>/Subtract'
   */
  Code_Gen_Model_B.Meas_Back_AA_Length = sqrt((rtb_rx_d * rtb_rx_d) +
    Code_Gen_Model_ConstB.MathFunction1);

  /* Sum: '<S25>/Subtract1' incorporates:
   *  Constant: '<S25>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Front'
   *  Product: '<S25>/Product'
   *  UnitDelay: '<S25>/Unit Delay1'
   */
  Code_Gen_Model_B.Front_Arm_Length = (Code_Gen_Model_U.Encoder_Revs_Front *
    Dist_Per_Rev_Front) + Code_Gen_Model_DW.UnitDelay1_DSTATE_bc;

  /* Sqrt: '<S166>/Sqrt' incorporates:
   *  Constant: '<S166>/Constant24'
   *  Math: '<S166>/Math Function'
   *  Sum: '<S166>/Add'
   *  Sum: '<S166>/Subtract'
   */
  Code_Gen_Model_B.Meas_Front_AA_Length = sqrt
    (((Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997) *
      (Code_Gen_Model_B.Front_Arm_Length + 506.41249999999997)) +
     Code_Gen_Model_ConstB.MathFunction1_m);

  /* Sum: '<S24>/Subtract1' incorporates:
   *  Constant: '<S24>/Rev_2_Dist'
   *  Inport: '<Root>/Encoder_Revs_Ball_Screw'
   *  Product: '<S24>/Product'
   *  UnitDelay: '<S24>/Unit Delay1'
   */
  Code_Gen_Model_B.Ball_Screw_Arm_Length =
    (Code_Gen_Model_U.Encoder_Revs_Ball_Screw * Dist_Per_Rev_Ball_Screw) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp;

  /* MATLAB Function: '<S16>/Get_Angle_Gap_Height' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Constant: '<S16>/Constant12'
   *  Constant: '<S16>/Constant2'
   *  Constant: '<S16>/Constant22'
   *  Constant: '<S16>/Constant3'
   *  Constant: '<S16>/Constant4'
   *  Constant: '<S16>/Constant5'
   *  Constant: '<S16>/Constant6'
   *  Constant: '<S16>/Constant7'
   *  Constant: '<S16>/Constant8'
   *  Constant: '<S16>/Constant9'
   */
  rtb_rx_d = Code_Gen_Model_B.Ball_Screw_Arm_Length *
    Code_Gen_Model_B.Ball_Screw_Arm_Length;
  Rot_Mat_idx_0 = (rtb_rx_d - 56058.355625000004) / 331.17548218429454;
  rtb_rx_d -= Rot_Mat_idx_0 * Rot_Mat_idx_0;
  if (rtb_rx_d >= 0.0) {
    y = sqrt(rtb_rx_d);
  } else {
    y = 0.0;
  }

  rtb_Subtract2 = (((((((Rot_Mat_idx_0 * 0.84366148773210747) +
                        177.79999999999998) - (y * -0.53687549219315933)) -
                      177.79999999999998) - 139.7) *
                    (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925)) +
                   177.79999999999998) + 139.7;
  rtb_Test_DC_Shooter = (((Rot_Mat_idx_0 * -0.53687549219315933) +
    88.899999999999991) + (y * 0.84366148773210747)) *
    (Code_Gen_Model_B.Meas_Front_AA_Length / 288.925);
  Rot_Mat_idx_0 = sqrt(((rtb_Test_DC_Shooter - 25.4) * (rtb_Test_DC_Shooter -
    25.4)) + (rtb_Subtract2 * rtb_Subtract2));
  rtb_rx_d = Code_Gen_Model_B.Meas_Back_AA_Length *
    Code_Gen_Model_B.Meas_Back_AA_Length;
  Rot_Mat_idx_0 = (((Rot_Mat_idx_0 * Rot_Mat_idx_0) - 24840.962499999998) +
                   rtb_rx_d) / (2.0 * Rot_Mat_idx_0);
  rtb_rx_d -= Rot_Mat_idx_0 * Rot_Mat_idx_0;
  if (rtb_rx_d >= 0.0) {
    y = sqrt(rtb_rx_d);
  } else {
    y = 0.0;
  }

  rtb_rx_d = atan((rtb_Test_DC_Shooter - 25.4) / rtb_Subtract2);
  cos_alpha = cos(rtb_rx_d);
  sin_alpha = sin(rtb_rx_d);
  rtb_rx_d = (Rot_Mat_idx_0 * cos_alpha) - (y * sin_alpha);
  Rot_Mat_idx_0 = ((Rot_Mat_idx_0 * sin_alpha) + (y * cos_alpha)) + 25.4;
  rtb_Subtract2 = atan((rtb_Test_DC_Shooter - Rot_Mat_idx_0) / (rtb_Subtract2 -
    rtb_rx_d)) - -0.16186298985390718;
  y = cos(rtb_Subtract2);
  cos_alpha = sin(rtb_Subtract2);
  rtb_Test_DC_Shooter = (Rot_Mat_idx_0 - (42.875 * cos_alpha)) - (-76.0 * y);
  Rot_Mat_idx_0 = ((rtb_rx_d - -50.027) - (42.875 * y)) + (-76.0 * cos_alpha);
  Code_Gen_Model_B.Meas_Gap = ((rtb_Test_DC_Shooter - 465.697) *
    (rtb_Test_DC_Shooter - 465.697)) + (Rot_Mat_idx_0 * Rot_Mat_idx_0);
  Code_Gen_Model_B.Meas_Gap = sqrt(Code_Gen_Model_B.Meas_Gap);
  Code_Gen_Model_B.Meas_Height = rtb_Test_DC_Shooter;

  /* Gain: '<S16>/Gain2' incorporates:
   *  MATLAB Function: '<S16>/Get_Angle_Gap_Height'
   */
  Code_Gen_Model_B.Meas_Angle = 57.295779513082323 * rtb_Subtract2;

  /* Chart: '<S16>/Chart_Shooter_Position' */
  if (Code_Gen_Model_DW.is_active_c5_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 1U;
    Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
    Code_Gen_Model_B.Shooter_Pos_State = 0.0;
    Code_Gen_Model_B.Desired_Angle = Stage_Angle;
    Code_Gen_Model_B.Desired_Height = Stage_Height;
    Code_Gen_Model_B.Desired_Gap = Stage_Gap;
  } else {
    switch (Code_Gen_Model_DW.is_c5_Code_Gen_Model) {
     case Code_Gen_Model_IN_Amp:
      Code_Gen_Model_B.Shooter_Pos_State = 4.0;
      if (rtb_Prev_GameState == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_B.RL_Back = RL_Back_Amp_to_Stage;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Amp;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_LoadShooter:
      Code_Gen_Model_B.Shooter_Pos_State = 5.0;
      if (rtb_Prev_GameState == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_B.RL_Back = RL_Back_Load_to_Stage;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Load;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      } else if (rtb_Prev_GameState == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_B.RL_Back = RL_Back_Load_to_Amp;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Load_Amp;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Shooter_Pos_State = 4.0;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      }
      break;

     case Code_Gen_Model_IN_Speaker:
      Code_Gen_Model_B.Shooter_Pos_State = 2.0;
      if (rtb_Prev_GameState == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_B.RL_Back = RL_Back_Speaker_Final_to_Speaker_Partial;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Final;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Speaker_to_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 3.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      } else {
        Code_Gen_Model_B.Desired_Angle = rtb_Subtract1;
        Code_Gen_Model_B.Desired_Height = rtb_Subtract;
        Code_Gen_Model_B.Desired_Gap = rtb_Subtract3;
      }
      break;

     case Code_Gen_Mo_IN_Speaker_to_Stage:
      Code_Gen_Model_B.Shooter_Pos_State = 3.0;
      if ((((Code_Gen_Model_B.Meas_Angle < (Stage_Angle + Tol_Angle)) &&
            (Code_Gen_Model_B.Meas_Angle > (Stage_Angle - Tol_Angle))) &&
           (Code_Gen_Model_B.Meas_Gap < (Stage_Gap + Tol_Gap))) &&
          (Code_Gen_Model_B.Meas_Gap > (Stage_Gap - Tol_Gap))) {
        Code_Gen_Model_B.RL_Back = RL_Back_Speaker_Partial_to_Stage;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Partial;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;

     case Code_Gen_Model_IN_Stage:
      Code_Gen_Model_B.Shooter_Pos_State = 0.0;
      if (rtb_Prev_GameState == Code_Gen_Model_State_Speaker) {
        Code_Gen_Model_B.RL_Back = RL_Back_Stage_to_Speaker_Partial;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Partial;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mo_IN_Stage_to_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 1.0;
        Code_Gen_Model_B.Desired_Height = rtb_Subtract;
      } else if (rtb_Prev_GameState == Code_Gen_Mode_State_LoadShooter) {
        Code_Gen_Model_B.RL_Back = RL_Back_Stage_to_Load;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Load;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_LoadShooter;
        Code_Gen_Model_B.Shooter_Pos_State = 5.0;
        Code_Gen_Model_B.Desired_Angle = LoadShooter_Angle;
        Code_Gen_Model_B.Desired_Height = LoadShooter_Height;
        Code_Gen_Model_B.Desired_Gap = LoadShooter_Gap;
      } else if (rtb_Prev_GameState == Code_Gen_Model_State_Trap) {
        Code_Gen_Model_B.RL_Back = RL_Back_Stage_to_Trap;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Trap;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Trap;
        Code_Gen_Model_B.Shooter_Pos_State = 6.0;
        Code_Gen_Model_B.Desired_Angle = Trap_Angle;
        Code_Gen_Model_B.Desired_Height = Trap_Height;
        Code_Gen_Model_B.Desired_Gap = Trap_Gap;
      } else if (rtb_Prev_GameState == Code_Gen_Model_State_Amp) {
        Code_Gen_Model_B.RL_Back = RL_Back_Stage_to_Amp;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Amp;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Amp;
        Code_Gen_Model_B.Shooter_Pos_State = 4.0;
        Code_Gen_Model_B.Desired_Angle = Amp_Angle;
        Code_Gen_Model_B.Desired_Height = Amp_Height;
        Code_Gen_Model_B.Desired_Gap = Amp_Gap;
      }
      break;

     case Code_Gen_Mo_IN_Stage_to_Speaker:
      Code_Gen_Model_B.Shooter_Pos_State = 1.0;
      if ((Code_Gen_Model_B.Meas_Height < (rtb_Subtract + Tol_Height)) &&
          (Code_Gen_Model_B.Meas_Height > (rtb_Subtract - Tol_Height))) {
        Code_Gen_Model_B.RL_Back = RL_Back_Speaker_Partial_to_Speaker_Final;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Speaker_Final;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Speaker;
        Code_Gen_Model_B.Shooter_Pos_State = 2.0;
        Code_Gen_Model_B.Desired_Angle = rtb_Subtract1;
        Code_Gen_Model_B.Desired_Height = rtb_Subtract;
        Code_Gen_Model_B.Desired_Gap = rtb_Subtract3;
      }
      break;

     default:
      /* case IN_Trap: */
      Code_Gen_Model_B.Shooter_Pos_State = 6.0;
      if (rtb_Prev_GameState == Code_Gen_Model_State_Stage) {
        Code_Gen_Model_B.RL_Back = RL_Back_Trap_to_Stage;
        Code_Gen_Model_B.RL_FB_Ratio = RL_FB_Ratio_Stage_Trap;
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Stage;
        Code_Gen_Model_B.Shooter_Pos_State = 0.0;
        Code_Gen_Model_B.Desired_Angle = Stage_Angle;
        Code_Gen_Model_B.Desired_Height = Stage_Height;
        Code_Gen_Model_B.Desired_Gap = Stage_Gap;
      }
      break;
    }
  }

  /* End of Chart: '<S16>/Chart_Shooter_Position' */

  /* Product: '<S160>/Product3' incorporates:
   *  Constant: '<S160>/Constant1'
   */
  rtb_Test_DC_Shooter = Code_Gen_Model_B.RL_Back * 0.5;

  /* Gain: '<S16>/Gain3' */
  rtb_Subtract = 0.017453292519943295 * Code_Gen_Model_B.Desired_Angle;

  /* MATLAB Function: '<S16>/Get_Arm_Lengths' incorporates:
   *  Constant: '<S16>/Constant10'
   *  Constant: '<S16>/Constant11'
   *  Constant: '<S16>/Constant13'
   *  Constant: '<S16>/Constant14'
   *  Constant: '<S16>/Constant15'
   *  Constant: '<S16>/Constant21'
   */
  rtb_Subtract1 = cos(rtb_Subtract);
  rtb_Subtract = sin(rtb_Subtract);
  rtb_rx_d = (Code_Gen_Model_B.Desired_Gap * Code_Gen_Model_B.Desired_Gap) -
    ((Code_Gen_Model_B.Desired_Height - 465.697) *
     (Code_Gen_Model_B.Desired_Height - 465.697));
  if (rtb_rx_d >= 0.0) {
    rtb_Subtract3 = ((rtb_Subtract1 * 42.875) + ((-rtb_Subtract) * -76.0)) +
      (sqrt(rtb_rx_d) - 50.027);
  } else {
    rtb_Subtract3 = ((rtb_Subtract1 * 42.875) + ((-rtb_Subtract) * -76.0)) -
      50.027;
  }

  rtb_Akxhatkk1[0] = rtb_Subtract3;
  rtb_Minus_n[0] = ((rtb_Subtract1 * 155.54999999999998) + ((-rtb_Subtract) *
    -25.4)) + rtb_Subtract3;
  rtb_Subtract3 = ((rtb_Subtract * 42.875) + (rtb_Subtract1 * -76.0)) +
    Code_Gen_Model_B.Desired_Height;
  rtb_Akxhatkk1[1] = rtb_Subtract3;
  rtb_Minus_n[1] = ((rtb_Subtract * 155.54999999999998) + (rtb_Subtract1 * -25.4))
    + rtb_Subtract3;
  Code_Gen_Model_B.Desired_Back_AA_Length = ((rtb_Akxhatkk1[1] - 25.4) *
    (rtb_Akxhatkk1[1] - 25.4)) + (rtb_Akxhatkk1[0] * rtb_Akxhatkk1[0]);
  Code_Gen_Model_B.Desired_Back_AA_Length = sqrt
    (Code_Gen_Model_B.Desired_Back_AA_Length);
  rtb_Subtract1 = sqrt(((rtb_Minus_n[0] - 317.5) * (rtb_Minus_n[0] - 317.5)) +
                       (rtb_Minus_n[1] * rtb_Minus_n[1]));
  rtb_rx_d = 139.7 - ((317.5 - rtb_Minus_n[0]) * (288.925 / rtb_Subtract1));
  rtb_Subtract = ((288.925 / rtb_Subtract1) * rtb_Minus_n[1]) -
    88.899999999999991;
  Code_Gen_Model_B.Desired_BS_Length = (rtb_rx_d * rtb_rx_d) + (rtb_Subtract *
    rtb_Subtract);
  Code_Gen_Model_B.Desired_BS_Length = sqrt(Code_Gen_Model_B.Desired_BS_Length);
  Code_Gen_Model_B.Desired_Front_AA_Length = rtb_Subtract1;

  /* End of MATLAB Function: '<S16>/Get_Arm_Lengths' */

  /* MATLAB Function: '<S16>/Back_AA_To_Extentions' incorporates:
   *  Constant: '<S16>/Constant23'
   *  Constant: '<S16>/Constant24'
   *  Constant: '<S16>/Constant28'
   *  Constant: '<S16>/Constant29'
   *  Constant: '<S16>/Constant30'
   *  Constant: '<S16>/Constant31'
   */
  rtb_Subtract1 = sqrt((Code_Gen_Model_B.Desired_Back_AA_Length *
                        Code_Gen_Model_B.Desired_Back_AA_Length) - 645.16) -
    421.79999999999995;
  if (rtb_Subtract1 <= 98.425) {
    rtb_Subtract = 79.375;
    rtb_Subtract1 = 19.049999999999997;
  } else if (rtb_Subtract1 <= 213.425) {
    rtb_Subtract = rtb_Subtract1 - 19.049999999999997;
    rtb_Subtract1 = 19.049999999999997;
  } else {
    rtb_Subtract = fmin(fmax(((((rtb_Subtract1 - 115.0) - 19.049999999999997) -
      79.375) * 0.32) + 194.375, 79.375), 317.0);
    rtb_Subtract1 = fmin(fmax(rtb_Subtract1 - rtb_Subtract, 19.049999999999997),
                         334.0);
  }

  /* Switch: '<S182>/Init' incorporates:
   *  UnitDelay: '<S182>/FixPt Unit Delay1'
   *  UnitDelay: '<S182>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k != 0) {
    rtb_rx_d = rtb_Subtract1;
  } else {
    rtb_rx_d = Code_Gen_Model_B.Desired_Back_Upper_Dist;
  }

  /* End of Switch: '<S182>/Init' */

  /* Sum: '<S176>/Sum1' */
  rtb_Subtract1 -= rtb_rx_d;

  /* Switch: '<S181>/Switch2' incorporates:
   *  RelationalOperator: '<S181>/LowerRelop1'
   */
  if (!(rtb_Subtract1 > rtb_Test_DC_Shooter)) {
    /* Switch: '<S181>/Switch' incorporates:
     *  RelationalOperator: '<S181>/UpperRelop'
     *  UnaryMinus: '<S160>/Unary Minus3'
     */
    if (rtb_Subtract1 < (-rtb_Test_DC_Shooter)) {
      rtb_Test_DC_Shooter = -rtb_Test_DC_Shooter;
    } else {
      rtb_Test_DC_Shooter = rtb_Subtract1;
    }

    /* End of Switch: '<S181>/Switch' */
  }

  /* End of Switch: '<S181>/Switch2' */

  /* Sum: '<S176>/Sum' */
  Code_Gen_Model_B.Desired_Back_Upper_Dist = rtb_Test_DC_Shooter + rtb_rx_d;

  /* Sum: '<S170>/Sum' */
  rtb_Subtract1 = Code_Gen_Model_B.Desired_Back_Upper_Dist -
    Code_Gen_Model_B.Back_Upper_Arm_Length;

  /* Gain: '<S170>/Gain1' */
  rtb_Subtract3 = AA_Prop_Gain * rtb_Subtract1;

  /* RelationalOperator: '<S164>/Compare' incorporates:
   *  Constant: '<S164>/Constant'
   */
  rtb_AT_Tag_5_Active = (rtb_Prev_GameState != 0);

  /* Switch: '<S170>/Switch' incorporates:
   *  Constant: '<S170>/Constant2'
   */
  if (rtb_AT_Tag_5_Active) {
    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S170>/Constant3'
     *  UnitDelay: '<S185>/Delay Input1'
     *
     * Block description for '<S185>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_hg) {
      rtb_Subtract1 = AA_Integral_IC;
    } else {
      /* Sum: '<S170>/Sum2' incorporates:
       *  Gain: '<S170>/Gain2'
       *  UnitDelay: '<S170>/Unit Delay'
       */
      rtb_Subtract1 = (AA_Integral_Gain * rtb_Subtract1) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_mg;

      /* Sum: '<S170>/Subtract' incorporates:
       *  Constant: '<S170>/Constant'
       */
      rtb_Subtract2 = AA_TC_UL - rtb_Subtract3;

      /* Switch: '<S186>/Switch2' incorporates:
       *  RelationalOperator: '<S186>/LowerRelop1'
       */
      if (!(rtb_Subtract1 > rtb_Subtract2)) {
        /* Sum: '<S170>/Subtract1' incorporates:
         *  Constant: '<S170>/Constant1'
         */
        rtb_Subtract2 = AA_TC_LL - rtb_Subtract3;

        /* Switch: '<S186>/Switch' incorporates:
         *  RelationalOperator: '<S186>/UpperRelop'
         */
        if (!(rtb_Subtract1 < rtb_Subtract2)) {
          rtb_Subtract2 = rtb_Subtract1;
        }

        /* End of Switch: '<S186>/Switch' */
      }

      /* End of Switch: '<S186>/Switch2' */

      /* Saturate: '<S170>/Saturation1' */
      if (rtb_Subtract2 > AA_Integral_UL) {
        rtb_Subtract1 = AA_Integral_UL;
      } else if (rtb_Subtract2 < AA_Integral_LL) {
        rtb_Subtract1 = AA_Integral_LL;
      } else {
        rtb_Subtract1 = rtb_Subtract2;
      }

      /* End of Saturate: '<S170>/Saturation1' */
    }

    /* End of Switch: '<S170>/Switch1' */
  } else {
    rtb_Subtract1 = 0.0;
  }

  /* End of Switch: '<S170>/Switch' */

  /* Switch: '<S16>/Switch1' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain'
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Test_DC_Gain_BackUpper *
      Code_Gen_Model_U.Gamepad_Stick_Left_Y;
  } else {
    /* Sum: '<S170>/Add1' */
    Rot_Mat_idx_0 = rtb_Subtract3 + rtb_Subtract1;

    /* Saturate: '<S170>/Saturation2' */
    if (Rot_Mat_idx_0 > AA_TC_UL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_UL;
    } else if (Rot_Mat_idx_0 < AA_TC_LL) {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Upper_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Upper_Arm_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S170>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch1' */

  /* Switch: '<S160>/Switch' incorporates:
   *  Constant: '<S160>/Constant'
   *  Constant: '<S160>/Constant2'
   *  Constant: '<S16>/Constant28'
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   *  RelationalOperator: '<S160>/Relational Operator'
   *  UnitDelay: '<S160>/Unit Delay'
   */
  if (Code_Gen_Model_B.Desired_Back_Lower_Dist < 194.375) {
    y = 1.0;
  } else {
    y = 0.5;
  }

  /* Product: '<S160>/Product' incorporates:
   *  Switch: '<S160>/Switch'
   */
  rtb_Test_DC_Shooter = Code_Gen_Model_B.RL_Back * y;

  /* Switch: '<S180>/Init' incorporates:
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   *  UnitDelay: '<S180>/FixPt Unit Delay1'
   *  UnitDelay: '<S180>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e != 0) {
    rtb_rx_d = rtb_Subtract;
  } else {
    rtb_rx_d = Code_Gen_Model_B.Desired_Back_Lower_Dist;
  }

  /* End of Switch: '<S180>/Init' */

  /* Sum: '<S175>/Sum1' incorporates:
   *  MATLAB Function: '<S16>/Back_AA_To_Extentions'
   */
  rtb_Subtract -= rtb_rx_d;

  /* Switch: '<S179>/Switch2' incorporates:
   *  RelationalOperator: '<S179>/LowerRelop1'
   */
  if (!(rtb_Subtract > rtb_Test_DC_Shooter)) {
    /* Switch: '<S179>/Switch' incorporates:
     *  RelationalOperator: '<S179>/UpperRelop'
     *  UnaryMinus: '<S160>/Unary Minus2'
     */
    if (rtb_Subtract < (-rtb_Test_DC_Shooter)) {
      rtb_Test_DC_Shooter = -rtb_Test_DC_Shooter;
    } else {
      rtb_Test_DC_Shooter = rtb_Subtract;
    }

    /* End of Switch: '<S179>/Switch' */
  }

  /* End of Switch: '<S179>/Switch2' */

  /* Sum: '<S175>/Sum' */
  Code_Gen_Model_B.Desired_Back_Lower_Dist = rtb_Test_DC_Shooter + rtb_rx_d;

  /* Sum: '<S171>/Sum' */
  rtb_Subtract = Code_Gen_Model_B.Desired_Back_Lower_Dist -
    Code_Gen_Model_B.Back_Lower_Arm_Length;

  /* Gain: '<S171>/Gain1' */
  rtb_Subtract3 = AA_Prop_Gain * rtb_Subtract;

  /* Switch: '<S171>/Switch' incorporates:
   *  Constant: '<S171>/Constant2'
   */
  if (rtb_AT_Tag_5_Active) {
    /* Switch: '<S171>/Switch1' incorporates:
     *  Constant: '<S171>/Constant3'
     *  UnitDelay: '<S187>/Delay Input1'
     *
     * Block description for '<S187>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
      rtb_Subtract = AA_Integral_IC;
    } else {
      /* Sum: '<S171>/Sum2' incorporates:
       *  Gain: '<S171>/Gain2'
       *  UnitDelay: '<S171>/Unit Delay'
       */
      rtb_Subtract = (AA_Integral_Gain * rtb_Subtract) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_c;

      /* Sum: '<S171>/Subtract' incorporates:
       *  Constant: '<S171>/Constant'
       */
      rtb_Subtract2 = AA_TC_UL - rtb_Subtract3;

      /* Switch: '<S188>/Switch2' incorporates:
       *  RelationalOperator: '<S188>/LowerRelop1'
       */
      if (!(rtb_Subtract > rtb_Subtract2)) {
        /* Sum: '<S171>/Subtract1' incorporates:
         *  Constant: '<S171>/Constant1'
         */
        rtb_Subtract2 = AA_TC_LL - rtb_Subtract3;

        /* Switch: '<S188>/Switch' incorporates:
         *  RelationalOperator: '<S188>/UpperRelop'
         */
        if (!(rtb_Subtract < rtb_Subtract2)) {
          rtb_Subtract2 = rtb_Subtract;
        }

        /* End of Switch: '<S188>/Switch' */
      }

      /* End of Switch: '<S188>/Switch2' */

      /* Saturate: '<S171>/Saturation1' */
      if (rtb_Subtract2 > AA_Integral_UL) {
        rtb_Subtract = AA_Integral_UL;
      } else if (rtb_Subtract2 < AA_Integral_LL) {
        rtb_Subtract = AA_Integral_LL;
      } else {
        rtb_Subtract = rtb_Subtract2;
      }

      /* End of Saturate: '<S171>/Saturation1' */
    }

    /* End of Switch: '<S171>/Switch1' */
  } else {
    rtb_Subtract = 0.0;
  }

  /* End of Switch: '<S171>/Switch' */

  /* Switch: '<S16>/Switch' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain2'
     *  Inport: '<Root>/Gamepad_Stick_Left_X'
     */
    Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Test_DC_Gain_BackLower *
      Code_Gen_Model_U.Gamepad_Stick_Left_X;
  } else {
    /* Sum: '<S171>/Add1' */
    Rot_Mat_idx_0 = rtb_Subtract3 + rtb_Subtract;

    /* Saturate: '<S171>/Saturation2' */
    if (Rot_Mat_idx_0 > AA_TC_UL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_UL;
    } else if (Rot_Mat_idx_0 < AA_TC_LL) {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Back_Lower_Arm_DutyCycle' */
      Code_Gen_Model_Y.Back_Lower_Arm_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S171>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch' */

  /* Product: '<S160>/Product2' */
  rtb_Subtract3 = Code_Gen_Model_B.RL_Back * Code_Gen_Model_B.RL_FB_Ratio;

  /* Sum: '<S165>/Subtract1' incorporates:
   *  Constant: '<S165>/Constant24'
   *  Math: '<S165>/Math Function'
   *  Sqrt: '<S165>/Sqrt'
   *  Sum: '<S165>/Subtract'
   */
  rtb_rx_d = sqrt((Code_Gen_Model_B.Desired_Front_AA_Length *
                   Code_Gen_Model_B.Desired_Front_AA_Length) -
                  Code_Gen_Model_ConstB.MathFunction1_d) - 506.41249999999997;

  /* Saturate: '<S165>/Saturation' */
  if (rtb_rx_d > Front_AA_Max_Ext) {
    rtb_rx_d = Front_AA_Max_Ext;
  } else if (rtb_rx_d < Front_AA_Min_Ext) {
    rtb_rx_d = Front_AA_Min_Ext;
  }

  /* End of Saturate: '<S165>/Saturation' */

  /* Switch: '<S178>/Init' incorporates:
   *  UnitDelay: '<S178>/FixPt Unit Delay1'
   *  UnitDelay: '<S178>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Test_DC_Shooter = rtb_rx_d;
  } else {
    rtb_Test_DC_Shooter = Code_Gen_Model_B.Desired_Front_Dist;
  }

  /* End of Switch: '<S178>/Init' */

  /* Sum: '<S174>/Sum1' */
  rtb_Subtract2 = rtb_rx_d - rtb_Test_DC_Shooter;

  /* Switch: '<S177>/Switch2' incorporates:
   *  RelationalOperator: '<S177>/LowerRelop1'
   *  RelationalOperator: '<S177>/UpperRelop'
   *  Switch: '<S177>/Switch'
   *  UnaryMinus: '<S160>/Unary Minus1'
   */
  if (rtb_Subtract2 > rtb_Subtract3) {
    rtb_Subtract2 = rtb_Subtract3;
  } else if (rtb_Subtract2 < (-rtb_Subtract3)) {
    /* Switch: '<S177>/Switch' incorporates:
     *  UnaryMinus: '<S160>/Unary Minus1'
     */
    rtb_Subtract2 = -rtb_Subtract3;
  }

  /* Sum: '<S174>/Sum' incorporates:
   *  Switch: '<S177>/Switch2'
   */
  Code_Gen_Model_B.Desired_Front_Dist = rtb_Subtract2 + rtb_Test_DC_Shooter;

  /* Sum: '<S172>/Sum' */
  rtb_Subtract3 = Code_Gen_Model_B.Desired_Front_Dist -
    Code_Gen_Model_B.Front_Arm_Length;

  /* Gain: '<S172>/Gain1' */
  rtb_Subtract2 = AA_Prop_Gain * rtb_Subtract3;

  /* Switch: '<S172>/Switch' incorporates:
   *  Constant: '<S172>/Constant2'
   */
  if (rtb_AT_Tag_5_Active) {
    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S172>/Constant3'
     *  UnitDelay: '<S189>/Delay Input1'
     *
     * Block description for '<S189>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_o1) {
      rtb_Subtract3 = AA_Integral_IC;
    } else {
      /* Sum: '<S172>/Sum2' incorporates:
       *  Gain: '<S172>/Gain2'
       *  UnitDelay: '<S172>/Unit Delay'
       */
      rtb_Subtract3 = (AA_Integral_Gain * rtb_Subtract3) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_j;

      /* Sum: '<S172>/Subtract' incorporates:
       *  Constant: '<S172>/Constant'
       */
      rtb_Test_DC_Shooter = AA_TC_UL - rtb_Subtract2;

      /* Switch: '<S190>/Switch2' incorporates:
       *  RelationalOperator: '<S190>/LowerRelop1'
       */
      if (!(rtb_Subtract3 > rtb_Test_DC_Shooter)) {
        /* Sum: '<S172>/Subtract1' incorporates:
         *  Constant: '<S172>/Constant1'
         */
        rtb_Test_DC_Shooter = AA_TC_LL - rtb_Subtract2;

        /* Switch: '<S190>/Switch' incorporates:
         *  RelationalOperator: '<S190>/UpperRelop'
         */
        if (!(rtb_Subtract3 < rtb_Test_DC_Shooter)) {
          rtb_Test_DC_Shooter = rtb_Subtract3;
        }

        /* End of Switch: '<S190>/Switch' */
      }

      /* End of Switch: '<S190>/Switch2' */

      /* Saturate: '<S172>/Saturation1' */
      if (rtb_Test_DC_Shooter > AA_Integral_UL) {
        rtb_Subtract3 = AA_Integral_UL;
      } else if (rtb_Test_DC_Shooter < AA_Integral_LL) {
        rtb_Subtract3 = AA_Integral_LL;
      } else {
        rtb_Subtract3 = rtb_Test_DC_Shooter;
      }

      /* End of Saturate: '<S172>/Saturation1' */
    }

    /* End of Switch: '<S172>/Switch1' */
  } else {
    rtb_Subtract3 = 0.0;
  }

  /* End of Switch: '<S172>/Switch' */

  /* Switch: '<S16>/Switch2' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Front_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain1'
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    Code_Gen_Model_Y.Front_Arm_DutyCycle = Test_DC_Gain_Front *
      Code_Gen_Model_U.Gamepad_Stick_Right_Y;
  } else {
    /* Sum: '<S172>/Add1' */
    Rot_Mat_idx_0 = rtb_Subtract2 + rtb_Subtract3;

    /* Saturate: '<S172>/Saturation2' */
    if (Rot_Mat_idx_0 > AA_TC_UL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_UL;
    } else if (Rot_Mat_idx_0 < AA_TC_LL) {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = AA_TC_LL;
    } else {
      /* Outport: '<Root>/Front_Arm_DutyCycle' */
      Code_Gen_Model_Y.Front_Arm_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S172>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch2' */

  /* Switch: '<S193>/Init' incorporates:
   *  UnitDelay: '<S193>/FixPt Unit Delay1'
   *  UnitDelay: '<S193>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk != 0) {
    rtb_rx_d = Code_Gen_Model_B.Desired_BS_Length;
  } else {
    rtb_rx_d = Code_Gen_Model_B.Desired_Ball_Screw_Dist;
  }

  /* End of Switch: '<S193>/Init' */

  /* Sum: '<S191>/Sum1' */
  rtb_Subtract2 = Code_Gen_Model_B.Desired_BS_Length - rtb_rx_d;

  /* Switch: '<S192>/Switch2' incorporates:
   *  Constant: '<S173>/Constant1'
   *  Constant: '<S173>/Constant3'
   *  RelationalOperator: '<S192>/LowerRelop1'
   *  RelationalOperator: '<S192>/UpperRelop'
   *  Switch: '<S192>/Switch'
   */
  if (rtb_Subtract2 > BS_Position_Inc_RL) {
    rtb_Subtract2 = BS_Position_Inc_RL;
  } else if (rtb_Subtract2 < BS_Position_Dec_RL) {
    /* Switch: '<S192>/Switch' incorporates:
     *  Constant: '<S173>/Constant1'
     */
    rtb_Subtract2 = BS_Position_Dec_RL;
  }

  /* Sum: '<S191>/Sum' incorporates:
   *  Switch: '<S192>/Switch2'
   */
  Code_Gen_Model_B.Desired_Ball_Screw_Dist = rtb_Subtract2 + rtb_rx_d;

  /* Sum: '<S169>/Sum' */
  rtb_Test_DC_Shooter = Code_Gen_Model_B.Desired_Ball_Screw_Dist -
    Code_Gen_Model_B.Ball_Screw_Arm_Length;

  /* Sum: '<S184>/Sum1' incorporates:
   *  Constant: '<S169>/Constant2'
   *  Product: '<S184>/Product'
   *  Sum: '<S184>/Sum'
   *  UnitDelay: '<S184>/Unit Delay1'
   */
  rtb_Subtract2 = ((rtb_Test_DC_Shooter - Code_Gen_Model_DW.UnitDelay1_DSTATE_j)
                   * BS_Deriv_FC) + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S169>/Product' incorporates:
   *  Constant: '<S169>/Constant3'
   */
  rtb_rx_d = rtb_Subtract2 * BS_Deriv_Gain;

  /* Switch: '<S16>/Switch3' */
  if (Code_Gen_Model_B.Test_Mode) {
    /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' incorporates:
     *  Gain: '<S9>/Gain3'
     *  Inport: '<Root>/Gamepad_Stick_Right_X'
     */
    Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Test_DC_Gain_BallScrew *
      Code_Gen_Model_U.Gamepad_Stick_Right_X;
  } else {
    /* Sum: '<S183>/Diff' incorporates:
     *  UnitDelay: '<S183>/UD'
     *
     * Block description for '<S183>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S183>/UD':
     *
     *  Store in Global RAM
     */
    Rot_Mat_idx_0 = rtb_rx_d - Code_Gen_Model_DW.UD_DSTATE_ii;

    /* Saturate: '<S169>/Saturation' */
    if (Rot_Mat_idx_0 > BS_Deriv_UL) {
      Rot_Mat_idx_0 = BS_Deriv_UL;
    } else if (Rot_Mat_idx_0 < BS_Deriv_LL) {
      Rot_Mat_idx_0 = BS_Deriv_LL;
    }

    /* Sum: '<S169>/Add' incorporates:
     *  Gain: '<S169>/Gain1'
     *  Saturate: '<S169>/Saturation'
     */
    Rot_Mat_idx_0 += BS_Prop_Gain * rtb_Test_DC_Shooter;

    /* Saturate: '<S169>/Saturation2' */
    if (Rot_Mat_idx_0 > BS_TC_UL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_UL;
    } else if (Rot_Mat_idx_0 < BS_TC_LL) {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = BS_TC_LL;
    } else {
      /* Outport: '<Root>/Ball_Screw_Arm_DutyCycle' */
      Code_Gen_Model_Y.Ball_Screw_Arm_DutyCycle = Rot_Mat_idx_0;
    }

    /* End of Saturate: '<S169>/Saturation2' */
  }

  /* End of Switch: '<S16>/Switch3' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   *  Switch: '<S4>/Switch1'
   */
  if (rtb_Climber_Cmd_Direction > 0) {
    /* Outport: '<Root>/Climber_DutyCycle' incorporates:
     *  Constant: '<S4>/Constant2'
     */
    Code_Gen_Model_Y.Climber_DutyCycle = Climber_DutyCycle_Pos;
  } else if (rtb_Climber_Cmd_Direction < 0) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Outport: '<Root>/Climber_DutyCycle'
     */
    Code_Gen_Model_Y.Climber_DutyCycle = Climber_DutyCycle_Neg;
  } else {
    /* Outport: '<Root>/Climber_DutyCycle' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Switch: '<S4>/Switch1'
     */
    Code_Gen_Model_Y.Climber_DutyCycle = 0.0;
  }

  /* End of Switch: '<S4>/Switch' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_thetay_a;

  /* Switch: '<S10>/Switch2' incorporates:
   *  Constant: '<S10>/Constant4'
   *  Switch: '<S10>/Switch6'
   *  Switch: '<S10>/Switch8'
   */
  if (TEST_Servo_Override_Flag != 0.0) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S10>/Constant5'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Override_Value;
  } else if (Code_Gen_Model_B.Test_Mode) {
    /* Switch: '<S10>/Switch9' incorporates:
     *  Constant: '<S10>/Constant6'
     *  Constant: '<S83>/Constant'
     *  RelationalOperator: '<S83>/Compare'
     *  Switch: '<S10>/Switch8'
     */
    if (TEST_Servo_Down_Flag != 0.0) {
      /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
       *  Constant: '<S10>/Constant2'
       */
      Code_Gen_Model_Y.Shooter_Servo_Position = TEST_Servo_Down_Value;
    } else {
      /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
       *  Constant: '<S10>/Constant7'
       */
      Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
    }

    /* End of Switch: '<S10>/Switch9' */
  } else if (Code_Gen_Model_B.Shooter_Servo) {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S10>/Constant'
     *  Switch: '<S10>/Switch6'
     *  Switch: '<S10>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = 0.0;
  } else {
    /* Outport: '<Root>/Shooter_Servo_Position' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Gain: '<S10>/Gain'
     *  Lookup_n-D: '<S10>/1-D Lookup Table'
     *  MinMax: '<S16>/Max'
     *  Sum: '<S10>/Add'
     *  Sum: '<S10>/Add1'
     *  Sum: '<S25>/Subtract1'
     *  Switch: '<S10>/Switch6'
     *  Switch: '<S10>/Switch8'
     */
    Code_Gen_Model_Y.Shooter_Servo_Position = ((Servo_Store_Gain * fmin
      (Code_Gen_Model_B.Desired_Angle, Code_Gen_Model_B.Meas_Angle)) +
      Servo_Store_Offset) + look1_binlcpw(Code_Gen_Model_B.Front_Arm_Length,
      Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
      Code_Gen_Model_ConstP.uDLookupTable_tableData, 1U);
  }

  /* End of Switch: '<S10>/Switch2' */

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_rx;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_thetay;

  /* Outport: '<Root>/Reset_Ballscrew_Zero' */
  Code_Gen_Model_Y.Reset_Ballscrew_Zero = rtb_rx_i;

  /* Outport: '<Root>/Save_Ballscrew_Position' */
  Code_Gen_Model_Y.Save_Ballscrew_Position = rtb_thetay_n;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = UnitDelay_e;

  /* Logic: '<S2>/Logical Operator' incorporates:
   *  Abs: '<S22>/Abs'
   *  Abs: '<S23>/Abs'
   *  Abs: '<S24>/Abs'
   *  Abs: '<S25>/Abs'
   *  Constant: '<S22>/Calibration_Tolerance'
   *  Constant: '<S22>/Dist_Reset_Value'
   *  Constant: '<S23>/Calibration_Tolerance'
   *  Constant: '<S23>/Dist_Reset_Value'
   *  Constant: '<S24>/Calibration_Tolerance'
   *  Constant: '<S24>/Dist_Reset_Value'
   *  Constant: '<S25>/Calibration_Tolerance'
   *  Constant: '<S25>/Dist_Reset_Value'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  RelationalOperator: '<S25>/Relational Operator'
   *  Sum: '<S22>/Subtract'
   *  Sum: '<S23>/Subtract'
   *  Sum: '<S24>/Subtract'
   *  Sum: '<S25>/Subtract'
   */
  Code_Gen_Model_B.Is_All_Arms_Cal_Position = ((((fabs
    (Code_Gen_Model_B.Back_Lower_Arm_Length - Dist_Reset_Value_Back_Lower) <=
    Dist_AA_Cal_Tol) && (fabs(Code_Gen_Model_B.Back_Upper_Arm_Length -
    Dist_Reset_Value_Back_Upper) <= Dist_AA_Cal_Tol)) && (fabs
    (Code_Gen_Model_B.Front_Arm_Length - Dist_Reset_Value_Front) <=
    Dist_AA_Cal_Tol)) && (fabs(Code_Gen_Model_B.Ball_Screw_Arm_Length -
    Dist_Reset_Value_Ball_Screw) <= Dist_BS_Cal_Tol));

  /* SignalConversion: '<S9>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S14>/Trigonometric Function1' */
  rtb_rx_i = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S14>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S14>/Trigonometric Function'
   */
  Rot_Mat_idx_0 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_rx = rtb_rx_i;

  /* SignalConversion generated from: '<S14>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S14>/Unary Minus'
   */
  cos_alpha = -rtb_rx_i;

  /* Sum: '<S148>/Diff' incorporates:
   *  UnitDelay: '<S148>/UD'
   *
   * Block description for '<S148>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S148>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S14>/Subtract2' incorporates:
   *  Constant: '<S14>/Constant3'
   *  Gain: '<S14>/Gain7'
   *  Math: '<S14>/Square'
   */
  rtb_rx_i = 1.0 - ((rtb_thetay_n * rtb_thetay_n) * 0.16666666666666666);

  /* Gain: '<S14>/Gain6' */
  rtb_thetay_n *= 0.5;

  /* SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating' */
  sin_alpha = rtb_thetay_n;

  /* SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S14>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_0 = -rtb_thetay_n;

  /* Product: '<S14>/Product' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S149>/Diff'
   *  UnitDelay: '<S149>/UD'
   *
   * Block description for '<S149>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S149>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S150>/Diff'
   *  UnitDelay: '<S150>/UD'
   *
   * Block description for '<S150>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S150>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S14>/Product2' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S151>/Diff'
   *  UnitDelay: '<S151>/UD'
   *
   * Block description for '<S151>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S151>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_a = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S14>/Product3' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S152>/Diff'
   *  UnitDelay: '<S152>/UD'
   *
   * Block description for '<S152>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S152>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Test_DC_Shooter = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S14>/Product7' incorporates:
   *  Fcn: '<S153>/r->x'
   *  Fcn: '<S153>/theta->y'
   *  Fcn: '<S154>/r->x'
   *  Fcn: '<S154>/theta->y'
   *  Fcn: '<S155>/r->x'
   *  Fcn: '<S155>/theta->y'
   *  Fcn: '<S156>/r->x'
   *  Fcn: '<S156>/theta->y'
   */
  rtb_thetay_n_0[0] = rtb_thetay_n * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[1] = rtb_thetay_n * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[2] = rtb_thetay * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[3] = rtb_thetay * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[4] = rtb_thetay_a * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[5] = rtb_thetay_a * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[6] = rtb_Test_DC_Shooter * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n_0[7] = rtb_Test_DC_Shooter * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S14>/Product7' incorporates:
   *  Constant: '<S14>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    y = 0.0;
    rtb_Num_Segments = 0;
    for (rtb_Bias1_p = 0; rtb_Bias1_p < 8; rtb_Bias1_p++) {
      y += Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_thetay_n_0[rtb_Bias1_p];
      rtb_Num_Segments += 2;
    }

    rtb_Akxhatkk1[i] = y;
  }

  /* End of Product: '<S14>/Product7' */

  /* Product: '<S14>/Product6' incorporates:
   *  Concatenate: '<S14>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S14>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay = (rtb_rx_i * rtb_Akxhatkk1[0]) + (rtb_POSEexponentialmatrixfori_0 *
    rtb_Akxhatkk1[1]);
  rtb_thetay_a = (sin_alpha * rtb_Akxhatkk1[0]) + (rtb_rx_i * rtb_Akxhatkk1[1]);

  /* Product: '<S14>/Product6' incorporates:
   *  Concatenate: '<S14>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (Rot_Mat_idx_0 * rtb_thetay) + (cos_alpha *
    rtb_thetay_a);
  Code_Gen_Model_B.Product6[1] = (rtb_rx * rtb_thetay) + (Rot_Mat_idx_0 *
    rtb_thetay_a);

  /* Outputs for Enabled SubSystem: '<S114>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S145>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S145>/D[k]*u[k]' incorporates:
     *  Constant: '<S94>/D'
     */
    rtb_thetay = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S145>/Sum' incorporates:
     *  Constant: '<S94>/C'
     *  Delay: '<S94>/MemoryX'
     *  Product: '<S145>/C[k]*xhat[k|k-1]'
     *  Product: '<S145>/D[k]*u[k]'
     *  Sum: '<S145>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_thetay;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_thetay;

    /* Product: '<S145>/Product3' incorporates:
     *  Constant: '<S95>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S145>/Product3' incorporates:
     *  Outport: '<S145>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S114>/MeasurementUpdate' */

  /* RelationalOperator: '<S158>/Compare' incorporates:
   *  Constant: '<S157>/Constant'
   *  Constant: '<S158>/Constant'
   */
  UnitDelay_e = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S157>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S157>/Switch' incorporates:
   *  UnitDelay: '<S157>/Unit Delay'
   */
  if (UnitDelay_e) {
    rtb_thetay = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay_DSTATE_cg;
  }

  /* End of Switch: '<S157>/Switch' */

  /* Sum: '<S157>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay;

  /* Gain: '<S157>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S157>/Switch1' incorporates:
   *  UnitDelay: '<S157>/Unit Delay1'
   */
  if (UnitDelay_e) {
    rtb_thetay_a = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_thetay_a = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S157>/Switch1' */

  /* Sum: '<S157>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_thetay_a;

  /* Chart: '<S15>/Chart' */
  if (Code_Gen_Model_DW.is_active_c9_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c9_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Active_GameState = 0U;
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else if (Code_Gen_Model_DW.is_c9_Code_Gen_Model ==
             Code_Gen_Model_IN_Disabled) {
    if (rtb_GameState != 0) {
      Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Not_Disabled;
      Code_Gen_Model_B.Active_GameState = rtb_GameState;
    }

    /* case IN_Not_Disabled: */
  } else if (rtb_GameState == 0) {
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else {
    Code_Gen_Model_B.Active_GameState = rtb_GameState;
  }

  /* End of Chart: '<S15>/Chart' */

  /* Update for UnitDelay: '<S74>/Delay Input1'
   *
   * Block description for '<S74>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nb = rtb_OR7;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' incorporates:
     *  Bias: '<S222>/Bias'
     *  Merge: '<S196>/Merge1'
     *  S-Function (sfix_udelay): '<S12>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' incorporates:
     *  Bias: '<S222>/Bias'
     *  Merge: '<S196>/Merge1'
     *  S-Function (sfix_udelay): '<S12>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S94>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S114>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S94>/A'
   *  Delay: '<S94>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S94>/MemoryX' incorporates:
   *  Constant: '<S94>/B'
   *  Product: '<S114>/A[k]*xhat[k|k-1]'
   *  Product: '<S114>/B[k]*u[k]'
   *  Sum: '<S114>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S14>/Accumulator2' incorporates:
   *  Constant: '<S14>/Constant'
   *  DiscreteIntegrator: '<S14>/Accumulator'
   */
  Code_Gen_Model_DW.Accumulator2_DSTATE += Code_Gen_Model_B.Product6[0];
  if (Odometry_Reset_IC > 0.0) {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 1;
  } else {
    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;
    }

    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 2;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S14>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S14>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S39>/Delay Input1' incorporates:
   *  Constant: '<S8>/Constant3'
   *
   * Block description for '<S39>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S8>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  Constant: '<S5>/Constant'
   *  RelationalOperator: '<S5>/Compare'
   */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = (Code_Gen_Model_B.Note_State_ID == 0.0);

  /* Update for UnitDelay: '<S11>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination;

  /* Update for UnitDelay: '<S359>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S359>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S381>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S380>/UD'
   *
   * Block description for '<S380>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_p2;

  /* Update for UnitDelay: '<S378>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S361>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4_g;

  /* Update for UnitDelay: '<S376>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S376>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S376>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4_g;

  /* Update for UnitDelay: '<S360>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Sum_jt;

  /* Update for UnitDelay: '<S369>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S369>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S369>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Sum_jt;

  /* Update for UnitDelay: '<S283>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Product2_l;

  /* Update for UnitDelay: '<S282>/UD'
   *
   * Block description for '<S282>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_f;

  /* Update for UnitDelay: '<S268>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_l;

  /* Update for UnitDelay: '<S272>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Sin4;

  /* Update for UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S265>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S304>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S303>/UD'
   *
   * Block description for '<S303>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S289>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S293>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_kg;

  /* Update for UnitDelay: '<S286>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S325>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S324>/UD'
   *
   * Block description for '<S324>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_n;

  /* Update for UnitDelay: '<S310>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S314>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S313>/UD'
   *
   * Block description for '<S313>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S307>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S346>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Add_gd;

  /* Update for UnitDelay: '<S345>/UD'
   *
   * Block description for '<S345>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Subtract1_inz;

  /* Update for UnitDelay: '<S331>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Minus_k_idx_0;

  /* Update for UnitDelay: '<S335>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S334>/UD'
   *
   * Block description for '<S334>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Subtract1_bx;

  /* Update for UnitDelay: '<S328>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Hypot_em;

  /* Update for UnitDelay: '<S84>/Delay Input1'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_f = UnitDelay;

  /* Update for UnitDelay: '<S85>/Delay Input1'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nx = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S87>/Delay Input1'
   *
   * Block description for '<S87>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_FixPtRelationalOperator_fh;

  /* Update for UnitDelay: '<S86>/Delay Input1'
   *
   * Block description for '<S86>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_h = rtb_FixPtRelationalOperator_h;

  /* Update for UnitDelay: '<S88>/Delay Input1'
   *
   * Block description for '<S88>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_em = rtb_AND1;

  /* Update for UnitDelay: '<S89>/Delay Input1'
   *
   * Block description for '<S89>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_i = rtb_FixPtRelationalOperator_m;

  /* Update for UnitDelay: '<S90>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mw = rtb_Add_ov;

  /* Update for UnitDelay: '<S91>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Subtract1_b;

  /* Update for UnitDelay: '<S182>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S182>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k = 0U;

  /* Update for UnitDelay: '<S185>/Delay Input1'
   *
   * Block description for '<S185>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_hg = rtb_AT_Tag_5_Active;

  /* Update for UnitDelay: '<S170>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mg = rtb_Subtract1;

  /* Update for UnitDelay: '<S180>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S180>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e = 0U;

  /* Update for UnitDelay: '<S187>/Delay Input1'
   *
   * Block description for '<S187>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = rtb_AT_Tag_5_Active;

  /* Update for UnitDelay: '<S171>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Subtract;

  /* Update for UnitDelay: '<S178>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S178>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S189>/Delay Input1'
   *
   * Block description for '<S189>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_AT_Tag_5_Active;

  /* Update for UnitDelay: '<S172>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Subtract3;

  /* Update for UnitDelay: '<S193>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S193>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk = 0U;

  /* Update for UnitDelay: '<S184>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Subtract2;

  /* Update for UnitDelay: '<S183>/UD'
   *
   * Block description for '<S183>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ii = rtb_rx_d;

  /* Update for UnitDelay: '<S148>/UD'
   *
   * Block description for '<S148>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S149>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S149>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S150>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S150>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S151>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S151>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S152>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S152>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S157>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_cg = rtb_thetay;

  /* Update for UnitDelay: '<S157>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_thetay_a;
}

/* Model initialize function */
void Code_Gen_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    real_T Constant;
    real_T Constant1;

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for If: '<S17>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S94>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S359>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S376>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S369>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S22>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_g = Dist_Reset_Value_Back_Lower;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nc = Dist_Reset_Value_Back_Upper;

    /* InitializeConditions for UnitDelay: '<S25>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bc = Dist_Reset_Value_Front;

    /* InitializeConditions for UnitDelay: '<S24>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_fp = Dist_Reset_Value_Ball_Screw;

    /* InitializeConditions for UnitDelay: '<S182>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_k = 1U;

    /* InitializeConditions for UnitDelay: '<S180>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_e = 1U;

    /* InitializeConditions for UnitDelay: '<S178>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* InitializeConditions for UnitDelay: '<S193>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_jk = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S428>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S17>/Spline Path Following Enabled' */
    /* Start for If: '<S200>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S196>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S200>/Robot_Index_Is_Valid' */
    /* Start for If: '<S203>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S203>/Circle_Check_Valid' */
    /* Start for If: '<S205>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S203>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S200>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S17>/Spline Path Following Enabled' */
  }
}

/* Model terminate function */
void Code_Gen_Model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
