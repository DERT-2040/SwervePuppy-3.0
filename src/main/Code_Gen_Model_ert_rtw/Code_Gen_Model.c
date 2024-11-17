/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.219
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Nov 16 22:43:48 2024
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
#include "rt_defines.h"
#include <float.h>

/* Named constants for Chart: '<S10>/Chart' */
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Exported block parameters */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S311>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S311>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S311>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S311>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S311>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S311>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S311>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S311>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S311>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S311>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S311>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S311>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S311>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S311>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S311>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S311>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S311>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S311>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S311>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S311>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S311>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S311>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S311>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S311>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S314>/Gain2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S327>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S323>/Constant'
                                        *   '<S323>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S327>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S323>/Constant1'
                                        */
real_T Distance_FL_y = 0.26194;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S251>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S167>/Constant3'
                                        *   '<S188>/Constant3'
                                        *   '<S209>/Constant3'
                                        *   '<S230>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S167>/Constant2'
                                   *   '<S188>/Constant2'
                                   *   '<S209>/Constant2'
                                   *   '<S230>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S167>/Saturation'
                                        *   '<S188>/Saturation'
                                        *   '<S209>/Saturation'
                                        *   '<S230>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S167>/Saturation'
                                        *   '<S188>/Saturation'
                                        *   '<S209>/Saturation'
                                        *   '<S230>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S167>/Gain'
                                            *   '<S188>/Gain'
                                            *   '<S209>/Gain'
                                            *   '<S230>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S167>/Gain2'
                                        *   '<S188>/Gain2'
                                        *   '<S209>/Gain2'
                                        *   '<S230>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S167>/Saturation1'
                                        *   '<S188>/Saturation1'
                                        *   '<S209>/Saturation1'
                                        *   '<S230>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S167>/Saturation1'
                                        *   '<S188>/Saturation1'
                                        *   '<S209>/Saturation1'
                                        *   '<S230>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S167>/Gain1'
                                        *   '<S188>/Gain1'
                                        *   '<S209>/Gain1'
                                        *   '<S230>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S172>/Constant'
                            *   '<S193>/Constant'
                            *   '<S214>/Constant'
                            *   '<S235>/Constant'
                            */
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S4>/Constant2'
                                       *   '<S4>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S4>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S7>/Constant1'
                                        *   '<S7>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.1;/* Variable: KF_Vision_Ambiguity_Thresh
                                         * Referenced by: '<S7>/Constant'
                                         */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S9>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S93>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S152>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S152>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S99>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S112>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S152>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S263>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S263>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S263>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S263>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S263>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S263>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S280>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S280>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S280>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S280>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S279>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S280>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S280>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S280>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S280>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S280>/Constant1'
                                   *   '<S280>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S280>/Constant'
                                   *   '<S280>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S170>/Constant3'
                                        *   '<S191>/Constant3'
                                        *   '<S212>/Constant3'
                                        *   '<S233>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S170>/Constant2'
                                *   '<S191>/Constant2'
                                *   '<S212>/Constant2'
                                *   '<S233>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S170>/Saturation'
                                           *   '<S191>/Saturation'
                                           *   '<S212>/Saturation'
                                           *   '<S233>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S170>/Saturation'
                                          *   '<S191>/Saturation'
                                          *   '<S212>/Saturation'
                                          *   '<S233>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S170>/Gain2'
                                         *   '<S191>/Gain2'
                                         *   '<S212>/Gain2'
                                         *   '<S233>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S170>/Saturation1'
                                             *   '<S191>/Saturation1'
                                             *   '<S212>/Saturation1'
                                             *   '<S233>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S170>/Saturation1'
                                            *   '<S191>/Saturation1'
                                            *   '<S212>/Saturation1'
                                            *   '<S233>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S170>/Gain1'
                                        *   '<S191>/Gain1'
                                        *   '<S212>/Gain1'
                                        *   '<S233>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S262>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S262>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S262>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S262>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S262>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S262>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S313>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S313>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S14>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S14>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S14>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S250>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S250>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S250>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S250>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S250>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S250>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S314>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S313>/Dead Zone'
                                        *   '<S314>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S313>/Dead Zone'
                                        *   '<S314>/Dead Zone'
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
  real_T rtb_thetay_n_0[8];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_du;
  real_T rtb_Add_gj;
  real_T rtb_Add_i;
  real_T rtb_Add_o2;
  real_T rtb_Add_oh;
  real_T rtb_FeedForward;
  real_T rtb_FeedForward_n;
  real_T rtb_Hypot_bl;
  real_T rtb_Merge1;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_POSEexponentialmatrixfori_1;
  real_T rtb_Product2_e;
  real_T rtb_Product_oy;
  real_T rtb_Product_pz;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_do;
  real_T rtb_Subtract1_of;
  real_T rtb_Sum1_k5;
  real_T rtb_Sum1_p;
  real_T rtb_Sum2_a;
  real_T rtb_Sum2_m;
  real_T rtb_Switch1;
  real_T rtb_Switch1_p2;
  real_T rtb_Switch2;
  real_T rtb_Switch2_k;
  real_T rtb_Switch4;
  real_T rtb_rx;
  real_T rtb_rx_c;
  real_T rtb_rx_d;
  real_T rtb_rx_g;
  real_T rtb_rx_nr;
  real_T rtb_thetay;
  real_T rtb_thetay_i;
  real_T rtb_thetay_l;
  real_T rtb_thetay_n;
  real_T u0;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T tmp;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_Compare_pf;
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rtb_FixPtRelationalOperator_ea;
  boolean_T rtb_FixPtRelationalOperator_f;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Relative_Translation_Flag;
  boolean_T rtb_Swerve_Motors_Disabled;

  /* RelationalOperator: '<S27>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S29>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S29>/Delay Input1'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator_ea = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* SignalConversion: '<S5>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S5>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S5>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S5>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S5>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S24>/Compare' incorporates:
   *  Constant: '<S24>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S23>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S22>/Compare' incorporates:
   *  Constant: '<S22>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S20>/Compare' incorporates:
   *  Constant: '<S20>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S21>/Compare' incorporates:
   *  Constant: '<S21>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S30>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S7>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S7>/Tapped Delay1'
   *  Sum: '<S7>/Add'
   *  Sum: '<S7>/Add1'
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

  /* Delay: '<S30>/MemoryX' incorporates:
   *  Constant: '<S30>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S7>/AND' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S7>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
              KF_Vision_Ambiguity_Thresh) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S57>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S83>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S83>/Add1' incorporates:
     *  Constant: '<S30>/C'
     *  Delay: '<S30>/MemoryX'
     *  Product: '<S83>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_p2 = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S83>/Product2' incorporates:
     *  Constant: '<S31>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_Switch1_p2);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_Switch1_p2);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S83>/Product2' incorporates:
     *  Outport: '<S83>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S57>/Enabled Subsystem' */

  /* Sum: '<S57>/Add' incorporates:
   *  Delay: '<S30>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S9>/Accumulator2' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S9>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S9>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S7>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S7>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S7>/Switch' */

  /* DiscreteIntegrator: '<S9>/Accumulator' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S9>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S9>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S7>/Switch1' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S7>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S7>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S4>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S17>/FixPt Relational Operator'
   *  Sum: '<S4>/Sum'
   *  UnitDelay: '<S17>/Delay Input1'
   *  UnitDelay: '<S4>/Unit Delay1'
   *
   * Block description for '<S17>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* Sum: '<S4>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S16>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  u0 = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(u0)) || (rtIsInf(u0))) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  switch ((u0 < 0.0) ? (-((int32_T)((uint32_T)(-u0)))) : ((int32_T)((uint32_T)u0)))
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
     *  ActionPort: '<S3>/Action Port'
     */
    /* Merge: '<S8>/Merge1' incorporates:
     *  Constant: '<S3>/Constant1'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S8>/Merge2' incorporates:
     *  Constant: '<S3>/Constant2'
     *  SignalConversion generated from: '<S3>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S8>/Merge3' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S8>/Merge4' incorporates:
     *  Constant: '<S3>/Constant4'
     *  SignalConversion generated from: '<S3>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S3>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S8>/Merge7' incorporates:
     *  Constant: '<S3>/Constant7'
     *  SignalConversion generated from: '<S3>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S8>/Merge9' incorporates:
     *  Constant: '<S3>/Constant9'
     *  SignalConversion generated from: '<S3>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S8>/Merge10' incorporates:
     *  Constant: '<S3>/Constant10'
     *  SignalConversion generated from: '<S3>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S3>/Enable_Wheels' incorporates:
     *  Constant: '<S3>/Constant18'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S3>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S3>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S3>/Disable_Wheels' incorporates:
     *  Constant: '<S3>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S3>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S3>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Merge: '<S8>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S8>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S8>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S8>/Merge4' incorporates:
     *  Constant: '<S2>/Constant9'
     *  SignalConversion generated from: '<S2>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S2>/Constant8'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S2>/Constant5'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S8>/Merge7' incorporates:
     *  Constant: '<S2>/Constant6'
     *  SignalConversion generated from: '<S2>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S8>/Merge9' incorporates:
     *  Constant: '<S2>/Constant16'
     *  SignalConversion generated from: '<S2>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S8>/Merge10' incorporates:
     *  Constant: '<S2>/Constant3'
     *  SignalConversion generated from: '<S2>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S2>/Enable_Wheels' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    /* Logic: '<S311>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S311>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S311>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S311>/Switch15' incorporates:
     *  Switch: '<S311>/Switch16'
     *  Switch: '<S311>/Switch23'
     *  Switch: '<S311>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S311>/Switch15' incorporates:
       *  Constant: '<S311>/Constant9'
       *  Sum: '<S311>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S311>/Switch23' incorporates:
       *  Constant: '<S311>/Constant28'
       *  Sum: '<S311>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S311>/Switch15' incorporates:
       *  Constant: '<S311>/Constant5'
       *  Sum: '<S311>/Add16'
       *  Switch: '<S311>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S311>/Switch23' incorporates:
       *  Constant: '<S311>/Constant27'
       *  Sum: '<S311>/Add22'
       *  Switch: '<S311>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S311>/Switch15' incorporates:
       *  Constant: '<S311>/Constant1'
       *  Switch: '<S311>/Switch1'
       *  Switch: '<S311>/Switch12'
       *  Switch: '<S311>/Switch13'
       *  Switch: '<S311>/Switch14'
       *  Switch: '<S311>/Switch16'
       *  Switch: '<S311>/Switch17'
       *  Switch: '<S311>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S311>/Switch23' incorporates:
       *  Constant: '<S311>/Constant2'
       *  Switch: '<S311>/Switch19'
       *  Switch: '<S311>/Switch20'
       *  Switch: '<S311>/Switch21'
       *  Switch: '<S311>/Switch22'
       *  Switch: '<S311>/Switch24'
       *  Switch: '<S311>/Switch25'
       *  Switch: '<S311>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S311>/Switch15' */

    /* Switch: '<S326>/Switch1' incorporates:
     *  Constant: '<S331>/Constant'
     *  Constant: '<S332>/Constant'
     *  Logic: '<S326>/AND'
     *  RelationalOperator: '<S331>/Compare'
     *  RelationalOperator: '<S332>/Compare'
     *  Switch: '<S326>/Switch2'
     *  UnitDelay: '<S326>/Unit Delay'
     *  UnitDelay: '<S326>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S326>/Switch1' */

    /* Lookup_n-D: '<S314>/Modulation_Drv' incorporates:
     *  Math: '<S314>/Magnitude'
     */
    rtb_thetay = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S324>/Compare' incorporates:
     *  Constant: '<S324>/Constant'
     */
    rtb_Compare_pf = (rtb_thetay == 0.0);

    /* DeadZone: '<S314>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_thetay_n = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_thetay_n = 0.0;
    } else {
      rtb_thetay_n = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S314>/Dead Zone' */

    /* Logic: '<S314>/Logical Operator' incorporates:
     *  Constant: '<S325>/Constant'
     *  RelationalOperator: '<S325>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_thetay_n != 0.0) && rtb_Compare_pf);

    /* Switch: '<S314>/Switch1' incorporates:
     *  Switch: '<S314>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S314>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S8>/Merge3' incorporates:
         *  Constant: '<S314>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S8>/Merge3' incorporates:
         *  Constant: '<S314>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S314>/Switch5' */
    } else if (rtb_Compare_pf) {
      /* Switch: '<S314>/Switch6' incorporates:
       *  Constant: '<S314>/Constant'
       *  Constant: '<S314>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S314>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        u0 = 0.0;
      } else {
        u0 = 3.1415926535897931;
      }

      /* Merge: '<S8>/Merge3' incorporates:
       *  Sum: '<S314>/Add1'
       *  Switch: '<S314>/Switch4'
       *  Switch: '<S314>/Switch6'
       *  Trigonometry: '<S314>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + u0;
    } else {
      /* Merge: '<S8>/Merge3' incorporates:
       *  Switch: '<S314>/Switch4'
       *  Trigonometry: '<S314>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2);
    }

    /* End of Switch: '<S314>/Switch1' */

    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S14>/Constant5'
     *  Constant: '<S14>/Constant7'
     *  DataTypeConversion: '<S14>/Data Type Conversion'
     *  Switch: '<S314>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S14>/Switch' */

    /* DeadZone: '<S313>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      u0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      u0 = 0.0;
    } else {
      u0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S313>/Add' incorporates:
     *  Constant: '<S313>/Constant'
     *  Constant: '<S313>/Constant1'
     *  DeadZone: '<S313>/Dead Zone'
     *  Lookup_n-D: '<S313>/Modulation_Str_Y_Rel'
     *  Product: '<S313>/Product'
     *  Product: '<S313>/Product1'
     *  SignalConversion: '<S5>/Signal Copy5'
     */
    rtb_rx = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
               Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
               Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
              Steering_Relative_Gain) + (u0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S315>/Compare' incorporates:
     *  Constant: '<S315>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_rx == 0.0);

    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S14>/Constant5'
     *  Constant: '<S14>/Constant8'
     *  DataTypeConversion: '<S14>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_FixPtRelationalOperator;
    }

    /* End of Switch: '<S14>/Switch1' */

    /* Logic: '<S311>/Logical Operator11' */
    rtb_FixPtRelationalOperator_ea = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S320>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S320>/Delay Input1'
     *
     * Block description for '<S320>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_f = (((int32_T)rtb_FixPtRelationalOperator_ea) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S313>/AND2' incorporates:
     *  RelationalOperator: '<S316>/FixPt Relational Operator'
     *  RelationalOperator: '<S317>/FixPt Relational Operator'
     *  RelationalOperator: '<S318>/FixPt Relational Operator'
     *  RelationalOperator: '<S319>/FixPt Relational Operator'
     *  UnitDelay: '<S316>/Delay Input1'
     *  UnitDelay: '<S317>/Delay Input1'
     *  UnitDelay: '<S318>/Delay Input1'
     *  UnitDelay: '<S319>/Delay Input1'
     *
     * Block description for '<S316>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S317>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S318>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S319>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2 = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S313>/AND1' incorporates:
     *  Logic: '<S313>/AND3'
     *  Logic: '<S313>/AND7'
     *  UnitDelay: '<S313>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator && (!rtb_FixPtRelationalOperator_f))
                && (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S313>/AND4' incorporates:
     *  Logic: '<S313>/AND5'
     *  Logic: '<S313>/AND8'
     *  UnitDelay: '<S313>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_f = ((rtb_FixPtRelationalOperator && (!rtb_AND2))
      && (rtb_FixPtRelationalOperator_f || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S313>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_f);

    /* Switch: '<S313>/Switch8' incorporates:
     *  Constant: '<S322>/Constant'
     *  Logic: '<S313>/AND9'
     *  RelationalOperator: '<S321>/FixPt Relational Operator'
     *  RelationalOperator: '<S322>/Compare'
     *  UnitDelay: '<S10>/Unit Delay'
     *  UnitDelay: '<S321>/Delay Input1'
     *
     * Block description for '<S321>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_j))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S313>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    }

    /* End of Switch: '<S313>/Switch8' */

    /* Switch: '<S313>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S313>/Switch2' incorporates:
       *  Constant: '<S313>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S313>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S313>/Switch2' */

    /* Logic: '<S311>/Logical Operator' incorporates:
     *  Logic: '<S311>/Logical Operator1'
     *  Logic: '<S311>/Logical Operator13'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_B.previous_call_was_for_speaker)));

    /* Switch: '<S311>/Switch2' incorporates:
     *  Switch: '<S311>/Switch4'
     *  Switch: '<S311>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S311>/Switch2' incorporates:
       *  Constant: '<S14>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S311>/Switch2' incorporates:
       *  Constant: '<S311>/Constant14'
       *  Switch: '<S311>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S311>/Switch2' incorporates:
       *  Constant: '<S311>/Constant13'
       *  Switch: '<S311>/Switch4'
       *  Switch: '<S311>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    }

    /* End of Switch: '<S311>/Switch2' */

    /* Switch: '<S313>/Switch4' incorporates:
     *  Constant: '<S313>/Constant5'
     *  Switch: '<S313>/Switch1'
     *  Switch: '<S313>/Switch5'
     *  Switch: '<S313>/Switch6'
     *  Switch: '<S313>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S313>/Switch5' incorporates:
       *  Constant: '<S313>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S313>/Switch6' incorporates:
       *  Constant: '<S313>/Constant7'
       *  Switch: '<S313>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S313>/Switch7' incorporates:
       *  Constant: '<S313>/Constant8'
       *  Switch: '<S313>/Switch5'
       *  Switch: '<S313>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_f) {
      /* Switch: '<S313>/Switch1' incorporates:
       *  Switch: '<S313>/Switch5'
       *  Switch: '<S313>/Switch6'
       *  Switch: '<S313>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S313>/Switch6' incorporates:
       *  Switch: '<S313>/Switch5'
       *  Switch: '<S313>/Switch7'
       *  UnitDelay: '<S313>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S313>/Switch4' */

    /* Switch: '<S313>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S313>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S313>/Switch3' incorporates:
       *  Constant: '<S313>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S313>/Switch3' */

    /* Merge: '<S8>/Merge1' incorporates:
     *  Sum: '<S313>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S8>/Merge2' incorporates:
     *  SignalConversion: '<S313>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_rx;

    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S323>/Constant'
     *  Constant: '<S323>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Switch2_k = Boost_Trigger_High_Speed;
    } else {
      rtb_Switch2_k = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S323>/Switch1' */

    /* Switch: '<S330>/Init' incorporates:
     *  UnitDelay: '<S330>/FixPt Unit Delay1'
     *  UnitDelay: '<S330>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_rx = rtb_Switch2_k;
    } else {
      rtb_rx = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S330>/Init' */

    /* Sum: '<S328>/Sum1' */
    rtb_Switch2_k -= rtb_rx;

    /* Switch: '<S329>/Switch2' incorporates:
     *  Constant: '<S327>/Constant1'
     *  Constant: '<S327>/Constant3'
     *  RelationalOperator: '<S329>/LowerRelop1'
     *  RelationalOperator: '<S329>/UpperRelop'
     *  Switch: '<S329>/Switch'
     */
    if (rtb_Switch2_k > Boost_Trigger_Increasing_Limit) {
      rtb_Switch2_k = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Switch2_k < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S329>/Switch' incorporates:
       *  Constant: '<S327>/Constant1'
       */
      rtb_Switch2_k = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S329>/Switch2' */

    /* Sum: '<S328>/Sum' */
    rtb_Switch2_k += rtb_rx;

    /* Switch: '<S314>/Switch' incorporates:
     *  Switch: '<S314>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S8>/Merge4' incorporates:
       *  Gain: '<S314>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_thetay_n;
    } else if (rtb_Compare_pf) {
      /* Merge: '<S8>/Merge4' incorporates:
       *  Gain: '<S314>/Gain2'
       *  Math: '<S314>/Magnitude1'
       *  Switch: '<S314>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S323>/Product' incorporates:
       *  Switch: '<S314>/Switch2'
       */
      u0 = rtb_thetay * rtb_Switch2_k;

      /* Saturate: '<S323>/Saturation' incorporates:
       *  Switch: '<S314>/Switch2'
       */
      if (u0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S8>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (u0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S8>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S8>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = u0;
      }

      /* End of Saturate: '<S323>/Saturation' */
    }

    /* End of Switch: '<S314>/Switch' */

    /* Merge: '<S8>/Merge7' incorporates:
     *  Constant: '<S14>/Constant3'
     *  SignalConversion generated from: '<S14>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S8>/Merge9' incorporates:
     *  Constant: '<S14>/Constant9'
     *  SignalConversion generated from: '<S14>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S8>/Merge10' incorporates:
     *  Constant: '<S14>/Constant1'
     *  SignalConversion generated from: '<S14>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S14>/Enable_Wheels' incorporates:
     *  Constant: '<S14>/Constant6'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S14>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S14>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S14>/Disable_Wheels' incorporates:
     *  Constant: '<S14>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S14>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S14>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S326>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S326>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S321>/Delay Input1'
     *
     * Block description for '<S321>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = rtb_FixPtRelationalOperator;

    /* Update for UnitDelay: '<S320>/Delay Input1'
     *
     * Block description for '<S320>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_FixPtRelationalOperator_ea;

    /* Update for UnitDelay: '<S316>/Delay Input1'
     *
     * Block description for '<S316>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S317>/Delay Input1'
     *
     * Block description for '<S317>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S318>/Delay Input1'
     *
     * Block description for '<S318>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S319>/Delay Input1'
     *
     * Block description for '<S319>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S313>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S313>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_f;

    /* Update for UnitDelay: '<S313>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch4;

    /* Update for UnitDelay: '<S330>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S330>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S330>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Switch2_k;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S15>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* Merge: '<S8>/Merge1' incorporates:
     *  Constant: '<S15>/Constant1'
     *  SignalConversion generated from: '<S15>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S8>/Merge2' incorporates:
     *  Constant: '<S15>/Constant2'
     *  SignalConversion generated from: '<S15>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S8>/Merge3' incorporates:
     *  Constant: '<S15>/Constant3'
     *  SignalConversion generated from: '<S15>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S8>/Merge4' incorporates:
     *  Constant: '<S15>/Constant4'
     *  SignalConversion generated from: '<S15>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S15>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S15>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S15>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S15>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S8>/Merge7' incorporates:
     *  Constant: '<S15>/Constant7'
     *  SignalConversion generated from: '<S15>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S8>/Merge9' incorporates:
     *  Constant: '<S15>/Constant9'
     *  SignalConversion generated from: '<S15>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S8>/Merge10' incorporates:
     *  Constant: '<S15>/Constant12'
     *  SignalConversion generated from: '<S15>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S15>/Constant14'
     *  Switch: '<S15>/Switch1'
     *  UnitDelay: '<S15>/Unit Delay'
     */
    if (rtb_FixPtRelationalOperator_ea) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (rtb_FixPtRelationalOperator) {
      /* Switch: '<S15>/Switch1' incorporates:
       *  Constant: '<S15>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S15>/Switch' */

    /* DataTypeConversion: '<S15>/Cast To Boolean1' */
    rtb_thetay = rtb_FixPtRelationalOperator;

    /* DataTypeConversion: '<S15>/Cast To Boolean3' */
    rtb_thetay_n = rtb_FixPtRelationalOperator_ea;

    /* DataTypeConversion: '<S15>/Cast To Boolean2' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *  RelationalOperator: '<S28>/FixPt Relational Operator'
     *  UnitDelay: '<S28>/Delay Input1'
     *
     * Block description for '<S28>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_rx = (Code_Gen_Model_U.Joystick_Left_B12 >
              Code_Gen_Model_DW.DelayInput1_DSTATE_e);

    /* Update for UnitDelay: '<S15>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    u0 = 0.0;
  } else {
    u0 = 3.1415926535897931;
  }

  /* Sum: '<S4>/Add' incorporates:
   *  Switch: '<S4>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad + u0;

  /* If: '<S11>/If' incorporates:
   *  Constant: '<S96>/Constant'
   *  Merge: '<S11>/Merge'
   *  Merge: '<S11>/Merge1'
   *  Merge: '<S11>/Merge2'
   *  Merge: '<S11>/Merge3'
   *  Merge: '<S11>/Merge4'
   *  Merge: '<S11>/Merge5'
   *  Merge: '<S11>/Merge7'
   *  Merge: '<S11>/Merge8'
   *  SignalConversion generated from: '<S96>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S102>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S105>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S107>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S105>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S102>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S11>/Pass Through' incorporates:
   *  ActionPort: '<S96>/Action Port'
   */
  Code_Gen_Model_B.Robot_Reached_Destination = true;
  Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;
  Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;
  Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;
  Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;
  Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;
  Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;
  Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

  /* End of If: '<S11>/If' */
  /* End of Outputs for SubSystem: '<S11>/Pass Through' */

  /* UnitDelay: '<S250>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S250>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    u0 = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S250>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S250>/Product1' incorporates:
   *  Signum: '<S250>/Sign1'
   *  Signum: '<S250>/Sign2'
   */
  u0 *= rtb_Add_du;
  if (rtIsNaN(u0)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S250>/Switch' incorporates:
   *  Constant: '<S250>/Constant'
   *  Constant: '<S255>/Constant'
   *  Constant: '<S256>/Constant'
   *  Logic: '<S250>/or'
   *  Product: '<S250>/Product1'
   *  RelationalOperator: '<S255>/Compare'
   *  RelationalOperator: '<S256>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_c = 0.0;
  }

  /* End of Switch: '<S250>/Switch' */

  /* RelationalOperator: '<S257>/Compare' incorporates:
   *  Constant: '<S257>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_c == 0.0);

  /* RelationalOperator: '<S258>/Compare' incorporates:
   *  Constant: '<S258>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_c > 0.0);

  /* Abs: '<S250>/Abs' incorporates:
   *  Sum: '<S250>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S250>/Switch5' incorporates:
   *  Constant: '<S250>/Constant1'
   *  Switch: '<S250>/Switch1'
   *  UnaryMinus: '<S250>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S250>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S250>/Constant4'
     *  Constant: '<S250>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S250>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S250>/Constant2'
     *  Constant: '<S250>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S250>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S250>/Lookup Table Dynamic'
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
    u0 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S250>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S250>/Constant10'
     *  Constant: '<S250>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S250>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S250>/Constant7'
     *  Constant: '<S250>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S250>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S250>/Lookup Table Dynamic1'
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

    /* Switch: '<S250>/Switch3' incorporates:
     *  Constant: '<S250>/Constant1'
     *  Constant: '<S250>/Constant3'
     *  UnaryMinus: '<S250>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      u0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S250>/Switch3' */
  }

  /* End of Switch: '<S250>/Switch5' */

  /* Product: '<S250>/Product' incorporates:
   *  Switch: '<S250>/Switch1'
   */
  rtb_Switch2 = u0 * rtb_Switch1_p2;

  /* Switch: '<S261>/Init' incorporates:
   *  UnitDelay: '<S261>/FixPt Unit Delay1'
   *  UnitDelay: '<S261>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_rx_c;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S261>/Init' */

  /* Sum: '<S259>/Sum1' */
  rtb_Switch4 = rtb_rx_c - rtb_Merge1;

  /* Switch: '<S260>/Switch2' incorporates:
   *  RelationalOperator: '<S260>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2)) {
    /* Switch: '<S250>/Switch2' incorporates:
     *  Constant: '<S250>/Constant1'
     *  Constant: '<S250>/Constant3'
     *  Switch: '<S250>/Switch4'
     *  UnaryMinus: '<S250>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      u0 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S250>/Switch4' incorporates:
       *  Constant: '<S250>/Constant1'
       */
      u0 = Translation_Speed_Rate_Limit_Dec;
    } else {
      u0 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S250>/Product2' incorporates:
     *  Switch: '<S250>/Switch2'
     */
    rtb_Switch2 = u0 * rtb_Switch1_p2;

    /* Switch: '<S260>/Switch' incorporates:
     *  RelationalOperator: '<S260>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4;
    }

    /* End of Switch: '<S260>/Switch' */
  }

  /* End of Switch: '<S260>/Switch2' */

  /* Sum: '<S259>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S253>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S253>/Switch' incorporates:
     *  Constant: '<S285>/Constant3'
     *  Constant: '<S285>/Constant4'
     *  Math: '<S285>/Math Function'
     *  Sum: '<S253>/Subtract'
     *  Sum: '<S285>/Add1'
     *  Sum: '<S285>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S253>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S253>/Switch' */

  /* Sum: '<S281>/Add1' incorporates:
   *  Constant: '<S281>/Constant3'
   *  Constant: '<S281>/Constant4'
   *  Math: '<S281>/Math Function'
   *  Sum: '<S280>/Sum'
   *  Sum: '<S281>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S283>/Sum1' incorporates:
   *  Constant: '<S280>/Constant2'
   *  Product: '<S283>/Product'
   *  Sum: '<S283>/Sum'
   *  UnitDelay: '<S283>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S280>/Product' incorporates:
   *  Constant: '<S280>/Constant3'
   */
  rtb_Switch1_p2 = rtb_Merge1 * Steering_Heading_Control_D;

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
  u0 = rtb_Switch1_p2 - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S280>/Saturation' */
  if (u0 > Steering_Heading_Control_D_UL) {
    u0 = Steering_Heading_Control_D_UL;
  } else if (u0 < Steering_Heading_Control_D_LL) {
    u0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S280>/Add' incorporates:
   *  Gain: '<S280>/Gain1'
   *  Saturate: '<S280>/Saturation'
   */
  rtb_Switch4 = (Steering_Heading_Control_P * rtb_Switch2) + u0;

  /* Sum: '<S280>/Subtract' incorporates:
   *  Constant: '<S280>/Constant'
   */
  rtb_rx_g = Steering_Heading_Control_Total_UL - rtb_Switch4;

  /* Sum: '<S280>/Sum2' incorporates:
   *  Gain: '<S280>/Gain2'
   *  UnitDelay: '<S280>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S284>/Switch2' incorporates:
   *  RelationalOperator: '<S284>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_rx_g)) {
    /* Sum: '<S280>/Subtract1' incorporates:
     *  Constant: '<S280>/Constant1'
     */
    rtb_Switch2_k = Steering_Heading_Control_Total_LL - rtb_Switch4;

    /* Switch: '<S284>/Switch' incorporates:
     *  RelationalOperator: '<S284>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Switch2_k) {
      rtb_rx_g = rtb_Switch2_k;
    } else {
      rtb_rx_g = rtb_Switch2;
    }

    /* End of Switch: '<S284>/Switch' */
  }

  /* End of Switch: '<S284>/Switch2' */

  /* Saturate: '<S280>/Saturation1' */
  if (rtb_rx_g > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_rx_g < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_rx_g;
  }

  /* End of Saturate: '<S280>/Saturation1' */

  /* Sum: '<S280>/Add1' */
  u0 = rtb_Switch4 + rtb_Switch2;

  /* Saturate: '<S280>/Saturation2' */
  if (u0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S280>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (u0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S280>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S280>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = u0;
  }

  /* End of Saturate: '<S280>/Saturation2' */

  /* Switch: '<S264>/Switch' incorporates:
   *  Abs: '<S264>/Abs'
   *  Constant: '<S264>/Constant'
   *  Constant: '<S279>/Constant'
   *  RelationalOperator: '<S279>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_rx_g = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_rx_g = 0.0;
  }

  /* End of Switch: '<S264>/Switch' */

  /* Signum: '<S263>/Sign2' incorporates:
   *  UnitDelay: '<S263>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    u0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S263>/Sign1' */
  if (rtIsNaN(rtb_rx_g)) {
    rtb_Add_du = (rtNaN);
  } else if (rtb_rx_g < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (rtb_rx_g > 0.0);
  }

  /* Product: '<S263>/Product1' incorporates:
   *  Signum: '<S263>/Sign1'
   *  Signum: '<S263>/Sign2'
   */
  u0 *= rtb_Add_du;
  if (rtIsNaN(u0)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S263>/Switch' incorporates:
   *  Constant: '<S263>/Constant'
   *  Constant: '<S272>/Constant'
   *  Constant: '<S273>/Constant'
   *  Logic: '<S263>/or'
   *  Product: '<S263>/Product1'
   *  RelationalOperator: '<S272>/Compare'
   *  RelationalOperator: '<S273>/Compare'
   *  UnitDelay: '<S263>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_nr = rtb_rx_g;
  } else {
    rtb_rx_nr = 0.0;
  }

  /* End of Switch: '<S263>/Switch' */

  /* RelationalOperator: '<S274>/Compare' incorporates:
   *  Constant: '<S274>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_nr == 0.0);

  /* RelationalOperator: '<S275>/Compare' incorporates:
   *  Constant: '<S275>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_nr > 0.0);

  /* Abs: '<S263>/Abs' incorporates:
   *  Sum: '<S263>/Subtract'
   *  UnitDelay: '<S263>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_rx_g);

  /* Switch: '<S263>/Switch5' incorporates:
   *  Constant: '<S263>/Constant1'
   *  Switch: '<S263>/Switch1'
   *  UnaryMinus: '<S263>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S263>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S263>/Constant4'
     *  Constant: '<S263>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S263>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S263>/Constant2'
     *  Constant: '<S263>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S263>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S263>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Akxhatkk1[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic;
    u0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S263>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S263>/Constant10'
     *  Constant: '<S263>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S263>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S263>/Constant7'
     *  Constant: '<S263>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S263>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S263>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Akxhatkk1[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic1;

    /* Switch: '<S263>/Switch3' incorporates:
     *  Constant: '<S263>/Constant1'
     *  Constant: '<S263>/Constant3'
     *  UnaryMinus: '<S263>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      u0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S263>/Switch3' */
  }

  /* End of Switch: '<S263>/Switch5' */

  /* Product: '<S263>/Product' incorporates:
   *  Switch: '<S263>/Switch1'
   */
  rtb_thetay_i = u0 * rtb_Switch4;

  /* Switch: '<S278>/Init' incorporates:
   *  UnitDelay: '<S278>/FixPt Unit Delay1'
   *  UnitDelay: '<S278>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_rx_g = rtb_rx_nr;
  } else {
    rtb_rx_g = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S278>/Init' */

  /* Sum: '<S276>/Sum1' */
  rtb_Switch2_k = rtb_rx_nr - rtb_rx_g;

  /* Switch: '<S277>/Switch2' incorporates:
   *  RelationalOperator: '<S277>/LowerRelop1'
   */
  if (!(rtb_Switch2_k > rtb_thetay_i)) {
    /* Switch: '<S263>/Switch2' incorporates:
     *  Constant: '<S263>/Constant1'
     *  Constant: '<S263>/Constant3'
     *  Switch: '<S263>/Switch4'
     *  UnaryMinus: '<S263>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      u0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S263>/Switch4' incorporates:
       *  Constant: '<S263>/Constant1'
       */
      u0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      u0 = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S263>/Product2' incorporates:
     *  Switch: '<S263>/Switch2'
     */
    rtb_rx_nr = u0 * rtb_Switch4;

    /* Switch: '<S277>/Switch' incorporates:
     *  RelationalOperator: '<S277>/UpperRelop'
     */
    if (rtb_Switch2_k < rtb_rx_nr) {
      rtb_thetay_i = rtb_rx_nr;
    } else {
      rtb_thetay_i = rtb_Switch2_k;
    }

    /* End of Switch: '<S277>/Switch' */
  }

  /* End of Switch: '<S277>/Switch2' */

  /* Sum: '<S276>/Sum' */
  rtb_Switch4 = rtb_thetay_i + rtb_rx_g;

  /* Signum: '<S262>/Sign2' incorporates:
   *  UnitDelay: '<S262>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    u0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S262>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S262>/Product1' incorporates:
   *  Signum: '<S262>/Sign1'
   *  Signum: '<S262>/Sign2'
   */
  u0 *= rtb_Add_du;
  if (rtIsNaN(u0)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S262>/Switch' incorporates:
   *  Constant: '<S262>/Constant'
   *  Constant: '<S265>/Constant'
   *  Constant: '<S266>/Constant'
   *  Logic: '<S262>/or'
   *  Product: '<S262>/Product1'
   *  RelationalOperator: '<S265>/Compare'
   *  RelationalOperator: '<S266>/Compare'
   *  UnitDelay: '<S262>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_thetay_i = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_thetay_i = 0.0;
  }

  /* End of Switch: '<S262>/Switch' */

  /* RelationalOperator: '<S267>/Compare' incorporates:
   *  Constant: '<S267>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_thetay_i == 0.0);

  /* RelationalOperator: '<S268>/Compare' incorporates:
   *  Constant: '<S268>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_thetay_i > 0.0);

  /* Abs: '<S262>/Abs' incorporates:
   *  Sum: '<S262>/Subtract'
   *  UnitDelay: '<S262>/Unit Delay'
   */
  rtb_Switch2_k = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                       Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S262>/Switch5' incorporates:
   *  Constant: '<S262>/Constant1'
   *  Switch: '<S262>/Switch1'
   *  UnaryMinus: '<S262>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S262>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S262>/Constant4'
     *  Constant: '<S262>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S262>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S262>/Constant2'
     *  Constant: '<S262>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S262>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S262>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Akxhatkk1[0],
                         rtb_Switch2_k, &rtb_Minus_n[0], 1U);
    rtb_Switch2_k = rtb_LookupTableDynamic_p;
    u0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S262>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S262>/Constant10'
     *  Constant: '<S262>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S262>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S262>/Constant7'
     *  Constant: '<S262>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S262>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S262>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Akxhatkk1[0],
                         rtb_Switch2_k, &rtb_Minus_n[0], 1U);
    rtb_Switch2_k = rtb_LookupTableDynamic1_g;

    /* Switch: '<S262>/Switch3' incorporates:
     *  Constant: '<S262>/Constant1'
     *  Constant: '<S262>/Constant3'
     *  UnaryMinus: '<S262>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      u0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S262>/Switch3' */
  }

  /* End of Switch: '<S262>/Switch5' */

  /* Product: '<S262>/Product' incorporates:
   *  Switch: '<S262>/Switch1'
   */
  rtb_rx_g = u0 * rtb_Switch2_k;

  /* Switch: '<S271>/Init' incorporates:
   *  UnitDelay: '<S271>/FixPt Unit Delay1'
   *  UnitDelay: '<S271>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_rx_nr = rtb_thetay_i;
  } else {
    rtb_rx_nr = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S271>/Init' */

  /* Sum: '<S269>/Sum1' */
  rtb_Sum1_p = rtb_thetay_i - rtb_rx_nr;

  /* Switch: '<S270>/Switch2' incorporates:
   *  RelationalOperator: '<S270>/LowerRelop1'
   */
  if (!(rtb_Sum1_p > rtb_rx_g)) {
    /* Switch: '<S262>/Switch2' incorporates:
     *  Constant: '<S262>/Constant1'
     *  Constant: '<S262>/Constant3'
     *  Switch: '<S262>/Switch4'
     *  UnaryMinus: '<S262>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      u0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S262>/Switch4' incorporates:
       *  Constant: '<S262>/Constant1'
       */
      u0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      u0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S262>/Product2' incorporates:
     *  Switch: '<S262>/Switch2'
     */
    rtb_Product2_e = u0 * rtb_Switch2_k;

    /* Switch: '<S270>/Switch' incorporates:
     *  RelationalOperator: '<S270>/UpperRelop'
     */
    if (rtb_Sum1_p < rtb_Product2_e) {
      rtb_rx_g = rtb_Product2_e;
    } else {
      rtb_rx_g = rtb_Sum1_p;
    }

    /* End of Switch: '<S270>/Switch' */
  }

  /* End of Switch: '<S270>/Switch2' */

  /* Sum: '<S269>/Sum' */
  rtb_Switch2_k = rtb_rx_g + rtb_rx_nr;

  /* Switch: '<S252>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S252>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4;
  } else {
    /* Switch: '<S252>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_k;
  }

  /* End of Switch: '<S252>/Switch' */

  /* Outputs for Atomic SubSystem: '<S165>/Initialize Function' */
  /* Sum: '<S251>/Add' incorporates:
   *  Constant: '<S251>/Constant'
   *  Constant: '<S251>/Constant4'
   *  Constant: '<S251>/Constant5'
   *  Trigonometry: '<S251>/Atan2'
   */
  rtb_rx_nr = rt_atan2d_snf(Distance_FL_y, 0.2619375) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S165>/Initialize Function' */

  /* Fcn: '<S293>/r->x' incorporates:
   *  Fcn: '<S298>/r->x'
   *  Fcn: '<S303>/r->x'
   *  Fcn: '<S308>/r->x'
   */
  rtb_rx_d = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S287>/Add' incorporates:
   *  Fcn: '<S293>/r->x'
   *  Fcn: '<S294>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_rx_nr))
    + rtb_rx_d;

  /* Fcn: '<S293>/theta->y' incorporates:
   *  Fcn: '<S298>/theta->y'
   *  Fcn: '<S303>/theta->y'
   *  Fcn: '<S308>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S287>/Add' incorporates:
   *  Fcn: '<S293>/theta->y'
   *  Fcn: '<S294>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_rx_nr))
    + rtb_Add_oh;

  /* Fcn: '<S292>/x->r' */
  rtb_rx_nr = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S295>/Compare' incorporates:
   *  Constant: '<S295>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_nr == 0.0);

  /* Switch: '<S291>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S291>/Switch' incorporates:
     *  Fcn: '<S292>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S291>/Switch' */

  /* Trigonometry: '<S179>/Cos4' incorporates:
   *  Switch: '<S168>/Angle_Switch'
   *  Trigonometry: '<S178>/Cos4'
   */
  rtb_Sum1_p = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S157>/Add1' incorporates:
   *  Constant: '<S157>/Constant3'
   *  Constant: '<S157>/Constant4'
   *  Gain: '<S12>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S157>/Math Function'
   *  Sum: '<S12>/Add'
   *  Sum: '<S157>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S179>/Sin5' incorporates:
   *  UnaryMinus: '<S177>/Unary Minus'
   */
  rtb_rx_c = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S179>/Sin4' incorporates:
   *  Switch: '<S168>/Angle_Switch'
   *  Trigonometry: '<S178>/Sin4'
   */
  rtb_Product2_e = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S179>/Cos5' incorporates:
   *  UnaryMinus: '<S177>/Unary Minus'
   */
  rtb_rx_g = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S179>/Subtract1' incorporates:
   *  Product: '<S179>/Product2'
   *  Product: '<S179>/Product3'
   *  Trigonometry: '<S179>/Cos4'
   *  Trigonometry: '<S179>/Sin4'
   */
  rtb_Subtract1 = (rtb_Sum1_p * rtb_rx_c) + (rtb_Product2_e * rtb_rx_g);

  /* Sum: '<S179>/Subtract' incorporates:
   *  Product: '<S179>/Product'
   *  Product: '<S179>/Product1'
   *  Trigonometry: '<S179>/Cos4'
   *  Trigonometry: '<S179>/Sin4'
   */
  rtb_rx_c = (rtb_Sum1_p * rtb_rx_g) - (rtb_Product2_e * rtb_rx_c);

  /* Math: '<S179>/Hypot' */
  rtb_rx_g = rt_hypotd_snf(rtb_rx_c, rtb_Subtract1);

  /* Switch: '<S179>/Switch' incorporates:
   *  Constant: '<S179>/Constant'
   *  Constant: '<S179>/Constant1'
   *  Constant: '<S180>/Constant'
   *  Product: '<S179>/Divide'
   *  Product: '<S179>/Divide1'
   *  RelationalOperator: '<S180>/Compare'
   *  Switch: '<S179>/Switch1'
   */
  if (rtb_rx_g > 1.0E-6) {
    rtb_thetay_i = rtb_Subtract1 / rtb_rx_g;
    rtb_rx_g = rtb_rx_c / rtb_rx_g;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_g = 1.0;
  }

  /* End of Switch: '<S179>/Switch' */

  /* RelationalOperator: '<S176>/Compare' incorporates:
   *  Abs: '<S168>/Abs'
   *  Constant: '<S176>/Constant'
   *  Trigonometry: '<S179>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_g)) >
    1.5707963267948966);

  /* Switch: '<S168>/Angle_Switch' incorporates:
   *  Trigonometry: '<S178>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S178>/Subtract1' incorporates:
     *  Product: '<S178>/Product2'
     *  Product: '<S178>/Product3'
     */
    rtb_rx_c = (rtb_Sum1_p * Code_Gen_Model_ConstB.Sin5) + (rtb_Product2_e *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S178>/Subtract' incorporates:
     *  Product: '<S178>/Product'
     *  Product: '<S178>/Product1'
     */
    rtb_Product2_e = (rtb_Sum1_p * Code_Gen_Model_ConstB.Cos5) - (rtb_Product2_e
      * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S178>/Hypot' */
    rtb_Sum1_p = rt_hypotd_snf(rtb_Product2_e, rtb_rx_c);

    /* Switch: '<S178>/Switch1' incorporates:
     *  Constant: '<S178>/Constant'
     *  Constant: '<S178>/Constant1'
     *  Constant: '<S181>/Constant'
     *  Product: '<S178>/Divide'
     *  Product: '<S178>/Divide1'
     *  RelationalOperator: '<S181>/Compare'
     *  Switch: '<S178>/Switch'
     */
    if (rtb_Sum1_p > 1.0E-6) {
      rtb_Product2_e /= rtb_Sum1_p;
      rtb_Sum1_p = rtb_rx_c / rtb_Sum1_p;
    } else {
      rtb_Product2_e = 1.0;
      rtb_Sum1_p = 0.0;
    }

    /* End of Switch: '<S178>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_Sum1_p, rtb_Product2_e);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S170>/Sum' incorporates:
   *  Sum: '<S169>/Add'
   */
  rtb_FeedForward = rtb_thetay_i - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S183>/Add1' incorporates:
   *  Constant: '<S183>/Constant3'
   *  Constant: '<S183>/Constant4'
   *  Math: '<S183>/Math Function'
   *  Sum: '<S170>/Sum'
   *  Sum: '<S183>/Add2'
   */
  rtb_rx_g = rt_modd_snf(rtb_FeedForward + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S185>/Sum1' incorporates:
   *  Constant: '<S170>/Constant2'
   *  Product: '<S185>/Product'
   *  Sum: '<S185>/Sum'
   *  UnitDelay: '<S185>/Unit Delay1'
   */
  rtb_Sum1_p = ((rtb_rx_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S170>/Product' incorporates:
   *  Constant: '<S170>/Constant3'
   */
  rtb_Product2_e = rtb_Sum1_p * Steering_Motor_Control_D;

  /* Sum: '<S184>/Diff' incorporates:
   *  UnitDelay: '<S184>/UD'
   *
   * Block description for '<S184>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S184>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product2_e - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S170>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S170>/Add' incorporates:
   *  Gain: '<S170>/Gain1'
   *  Saturate: '<S170>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_rx_g) + u0;

  /* Sum: '<S170>/Subtract' incorporates:
   *  Constant: '<S170>/Constant'
   */
  rtb_rx_c = 1.0 - rtb_Subtract1;

  /* Sum: '<S170>/Sum2' incorporates:
   *  Gain: '<S170>/Gain2'
   *  UnitDelay: '<S170>/Unit Delay'
   */
  rtb_rx_g = (Steering_Motor_Control_I * rtb_rx_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S186>/Switch2' incorporates:
   *  Constant: '<S170>/Constant'
   *  RelationalOperator: '<S186>/LowerRelop1'
   *  Sum: '<S170>/Subtract'
   */
  if (!(rtb_rx_g > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S170>/Subtract1' incorporates:
     *  Constant: '<S170>/Constant1'
     */
    rtb_rx_c = -1.0 - rtb_Subtract1;

    /* Switch: '<S186>/Switch' incorporates:
     *  Constant: '<S170>/Constant1'
     *  RelationalOperator: '<S186>/UpperRelop'
     *  Sum: '<S170>/Subtract1'
     */
    if (!(rtb_rx_g < (-1.0 - rtb_Subtract1))) {
      rtb_rx_c = rtb_rx_g;
    }

    /* End of Switch: '<S186>/Switch' */
  }

  /* End of Switch: '<S186>/Switch2' */

  /* Saturate: '<S170>/Saturation1' */
  if (rtb_rx_c > Steering_Motor_Control_I_UL) {
    rtb_rx_c = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_c < Steering_Motor_Control_I_LL) {
    rtb_rx_c = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S170>/Saturation1' */

  /* Sum: '<S170>/Add1' */
  u0 = rtb_Subtract1 + rtb_rx_c;

  /* Saturate: '<S170>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S170>/Saturation2' */

  /* Switch: '<S291>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S291>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S291>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_rx_nr;
  }

  /* End of Switch: '<S291>/Switch1' */

  /* Sum: '<S288>/Add' incorporates:
   *  Fcn: '<S299>/r->x'
   *  Fcn: '<S299>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_rx_d;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S297>/x->r' */
  rtb_rx_g = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S300>/Compare' incorporates:
   *  Constant: '<S300>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_g == 0.0);

  /* Switch: '<S296>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S296>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S296>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_rx_g;
  }

  /* End of Switch: '<S296>/Switch1' */

  /* Sum: '<S289>/Add' incorporates:
   *  Fcn: '<S304>/r->x'
   *  Fcn: '<S304>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_rx_d;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S302>/x->r' */
  rtb_thetay_l = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S305>/Compare' incorporates:
   *  Constant: '<S305>/Constant'
   */
  rtb_FixPtRelationalOperator = (rtb_thetay_l == 0.0);

  /* Switch: '<S301>/Switch1' */
  if (rtb_FixPtRelationalOperator) {
    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S301>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S301>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_thetay_l;
  }

  /* End of Switch: '<S301>/Switch1' */

  /* Sum: '<S290>/Add' incorporates:
   *  Fcn: '<S309>/r->x'
   *  Fcn: '<S309>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_rx_d;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S307>/x->r' */
  rtb_rx_d = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S310>/Compare' incorporates:
   *  Constant: '<S310>/Constant'
   */
  rtb_FixPtRelationalOperator_ea = (rtb_rx_d == 0.0);

  /* Switch: '<S306>/Switch1' */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S306>/Switch1' incorporates:
     *  Constant: '<S306>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S306>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_rx_d;
  }

  /* End of Switch: '<S306>/Switch1' */

  /* Product: '<S286>/Divide' incorporates:
   *  Abs: '<S286>/Abs'
   *  Abs: '<S286>/Abs1'
   *  Abs: '<S286>/Abs2'
   *  Abs: '<S286>/Abs3'
   *  Constant: '<S286>/Constant'
   *  MinMax: '<S286>/Max'
   */
  rtb_rx_nr = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S286>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S168>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S168>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    u0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S171>/Product2' incorporates:
   *  Constant: '<S171>/Constant'
   *  Switch: '<S168>/Speed_Switch'
   */
  rtb_rx_d = u0 * 1150.4247703785388;

  /* Signum: '<S166>/Sign' */
  if (rtIsNaN(rtb_rx_d)) {
    u0 = (rtNaN);
  } else if (rtb_rx_d < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_rx_d > 0.0);
  }

  /* Signum: '<S166>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S161>/Product' incorporates:
   *  Abs: '<S166>/Abs'
   *  Abs: '<S169>/Abs'
   *  Constant: '<S172>/Constant'
   *  Constant: '<S182>/Constant3'
   *  Constant: '<S182>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S166>/OR'
   *  Lookup_n-D: '<S169>/1-D Lookup Table'
   *  Math: '<S182>/Math Function'
   *  RelationalOperator: '<S166>/Equal1'
   *  RelationalOperator: '<S172>/Compare'
   *  Signum: '<S166>/Sign'
   *  Signum: '<S166>/Sign1'
   *  Sum: '<S182>/Add1'
   *  Sum: '<S182>/Add2'
   */
  rtb_rx_d = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_d) * look1_binlcpw(fabs
    (rt_modd_snf(rtb_FeedForward + 1.5707963267948966, 3.1415926535897931) -
     1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
    Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S167>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_rx_d;

  /* Sum: '<S167>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_rx_d -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S174>/Sum1' incorporates:
   *  Constant: '<S167>/Constant2'
   *  Product: '<S174>/Product'
   *  Sum: '<S174>/Sum'
   *  UnitDelay: '<S174>/Unit Delay1'
   */
  rtb_rx_g = ((rtb_rx_d - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S167>/Product' incorporates:
   *  Constant: '<S167>/Constant3'
   */
  rtb_Subtract1 = rtb_rx_g * Drive_Motor_Control_D;

  /* Sum: '<S173>/Diff' incorporates:
   *  UnitDelay: '<S173>/UD'
   *
   * Block description for '<S173>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S173>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S167>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S167>/Add' incorporates:
   *  Gain: '<S167>/Gain1'
   *  Saturate: '<S167>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_rx_d) + rtb_FeedForward) + u0;

  /* Sum: '<S167>/Subtract' incorporates:
   *  Constant: '<S167>/Constant'
   */
  rtb_thetay_l = 1.0 - rtb_Add_oh;

  /* Sum: '<S167>/Sum2' incorporates:
   *  Gain: '<S167>/Gain2'
   *  UnitDelay: '<S167>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_rx_d) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S175>/Switch2' incorporates:
   *  Constant: '<S167>/Constant'
   *  RelationalOperator: '<S175>/LowerRelop1'
   *  Sum: '<S167>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S175>/Switch' incorporates:
     *  Constant: '<S167>/Constant1'
     *  RelationalOperator: '<S175>/UpperRelop'
     *  Sum: '<S167>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_thetay_l = -1.0 - rtb_Add_oh;
    } else {
      rtb_thetay_l = rtb_FeedForward;
    }

    /* End of Switch: '<S175>/Switch' */
  }

  /* End of Switch: '<S175>/Switch2' */

  /* Saturate: '<S167>/Saturation1' */
  if (rtb_thetay_l > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_l < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_thetay_l;
  }

  /* End of Saturate: '<S167>/Saturation1' */

  /* Sum: '<S167>/Add1' */
  u0 = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S167>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S167>/Saturation2' */

  /* Switch: '<S296>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S296>/Switch' incorporates:
     *  Fcn: '<S297>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S296>/Switch' */

  /* Trigonometry: '<S200>/Cos4' incorporates:
   *  Switch: '<S189>/Angle_Switch'
   *  Trigonometry: '<S199>/Cos4'
   */
  rtb_Sum1_k5 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S158>/Add1' incorporates:
   *  Constant: '<S158>/Constant3'
   *  Constant: '<S158>/Constant4'
   *  Gain: '<S12>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S158>/Math Function'
   *  Sum: '<S12>/Add1'
   *  Sum: '<S158>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S200>/Sin5' incorporates:
   *  UnaryMinus: '<S198>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S200>/Sin4' incorporates:
   *  Switch: '<S189>/Angle_Switch'
   *  Trigonometry: '<S199>/Sin4'
   */
  rtb_Product_pz = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S200>/Cos5' incorporates:
   *  UnaryMinus: '<S198>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S200>/Subtract1' incorporates:
   *  Product: '<S200>/Product2'
   *  Product: '<S200>/Product3'
   *  Trigonometry: '<S200>/Cos4'
   *  Trigonometry: '<S200>/Sin4'
   */
  rtb_Add_oh = (rtb_Sum1_k5 * rtb_thetay_i) + (rtb_Product_pz * rtb_thetay_l);

  /* Sum: '<S200>/Subtract' incorporates:
   *  Product: '<S200>/Product'
   *  Product: '<S200>/Product1'
   *  Trigonometry: '<S200>/Cos4'
   *  Trigonometry: '<S200>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Sum1_k5 * rtb_thetay_l) - (rtb_Product_pz *
    rtb_thetay_i);

  /* Math: '<S200>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S200>/Switch' incorporates:
   *  Constant: '<S200>/Constant'
   *  Constant: '<S200>/Constant1'
   *  Constant: '<S201>/Constant'
   *  Product: '<S200>/Divide'
   *  Product: '<S200>/Divide1'
   *  RelationalOperator: '<S201>/Compare'
   *  Switch: '<S200>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_rx_d = rtb_Add_oh / rtb_Hypot_bl;
    rtb_thetay_l = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S200>/Switch' */

  /* RelationalOperator: '<S197>/Compare' incorporates:
   *  Abs: '<S189>/Abs'
   *  Constant: '<S197>/Constant'
   *  Trigonometry: '<S200>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S189>/Angle_Switch' incorporates:
   *  Trigonometry: '<S199>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S199>/Subtract1' incorporates:
     *  Product: '<S199>/Product2'
     *  Product: '<S199>/Product3'
     */
    rtb_Add_oh = (rtb_Sum1_k5 * Code_Gen_Model_ConstB.Sin5_m) + (rtb_Product_pz *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S199>/Subtract' incorporates:
     *  Product: '<S199>/Product'
     *  Product: '<S199>/Product1'
     */
    rtb_Hypot_bl = (rtb_Sum1_k5 * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Product_pz * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S199>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S199>/Switch1' incorporates:
     *  Constant: '<S199>/Constant'
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S202>/Constant'
     *  Product: '<S199>/Divide'
     *  Product: '<S199>/Divide1'
     *  RelationalOperator: '<S202>/Compare'
     *  Switch: '<S199>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S199>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_rx_d = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S191>/Sum' incorporates:
   *  Sum: '<S190>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S204>/Add1' incorporates:
   *  Constant: '<S204>/Constant3'
   *  Constant: '<S204>/Constant4'
   *  Math: '<S204>/Math Function'
   *  Sum: '<S191>/Sum'
   *  Sum: '<S204>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S206>/Sum1' incorporates:
   *  Constant: '<S191>/Constant2'
   *  Product: '<S206>/Product'
   *  Sum: '<S206>/Sum'
   *  UnitDelay: '<S206>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S191>/Product' incorporates:
   *  Constant: '<S191>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S205>/Diff' incorporates:
   *  UnitDelay: '<S205>/UD'
   *
   * Block description for '<S205>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S205>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S191>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S191>/Add' incorporates:
   *  Gain: '<S191>/Gain1'
   *  Saturate: '<S191>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_thetay_l) + u0;

  /* Sum: '<S191>/Subtract' incorporates:
   *  Constant: '<S191>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_i;

  /* Sum: '<S191>/Sum2' incorporates:
   *  Gain: '<S191>/Gain2'
   *  UnitDelay: '<S191>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S207>/Switch2' incorporates:
   *  Constant: '<S191>/Constant'
   *  RelationalOperator: '<S207>/LowerRelop1'
   *  Sum: '<S191>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S207>/Switch' incorporates:
     *  Constant: '<S191>/Constant1'
     *  RelationalOperator: '<S207>/UpperRelop'
     *  Sum: '<S191>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_thetay_i = -1.0 - rtb_Add_i;
    } else {
      rtb_thetay_i = rtb_Hypot_bl;
    }

    /* End of Switch: '<S207>/Switch' */
  }

  /* End of Switch: '<S207>/Switch2' */

  /* Saturate: '<S191>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_thetay_i;
  }

  /* End of Saturate: '<S191>/Saturation1' */

  /* Sum: '<S191>/Add1' */
  u0 = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S191>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S191>/Saturation2' */

  /* Product: '<S286>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S189>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S189>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    u0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S192>/Product2' incorporates:
   *  Constant: '<S192>/Constant'
   *  Switch: '<S189>/Speed_Switch'
   */
  rtb_thetay_l = u0 * 1150.4247703785388;

  /* Signum: '<S187>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    u0 = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S187>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S162>/Product' incorporates:
   *  Abs: '<S187>/Abs'
   *  Abs: '<S190>/Abs'
   *  Constant: '<S193>/Constant'
   *  Constant: '<S203>/Constant3'
   *  Constant: '<S203>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S187>/OR'
   *  Lookup_n-D: '<S190>/1-D Lookup Table'
   *  Math: '<S203>/Math Function'
   *  RelationalOperator: '<S187>/Equal1'
   *  RelationalOperator: '<S193>/Compare'
   *  Signum: '<S187>/Sign'
   *  Signum: '<S187>/Sign1'
   *  Sum: '<S203>/Add1'
   *  Sum: '<S203>/Add2'
   */
  rtb_thetay_l = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S188>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S188>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S195>/Sum1' incorporates:
   *  Constant: '<S188>/Constant2'
   *  Product: '<S195>/Product'
   *  Sum: '<S195>/Sum'
   *  UnitDelay: '<S195>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S188>/Product' incorporates:
   *  Constant: '<S188>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

  /* Sum: '<S194>/Diff' incorporates:
   *  UnitDelay: '<S194>/UD'
   *
   * Block description for '<S194>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S194>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S188>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S188>/Add' incorporates:
   *  Gain: '<S188>/Gain1'
   *  Saturate: '<S188>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_FeedForward_n) + u0;

  /* Sum: '<S188>/Subtract' incorporates:
   *  Constant: '<S188>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Add_o2;

  /* Sum: '<S188>/Sum2' incorporates:
   *  Gain: '<S188>/Gain2'
   *  UnitDelay: '<S188>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S196>/Switch2' incorporates:
   *  Constant: '<S188>/Constant'
   *  RelationalOperator: '<S196>/LowerRelop1'
   *  Sum: '<S188>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S196>/Switch' incorporates:
     *  Constant: '<S188>/Constant1'
     *  RelationalOperator: '<S196>/UpperRelop'
     *  Sum: '<S188>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_rx_d = -1.0 - rtb_Add_o2;
    } else {
      rtb_rx_d = rtb_FeedForward_n;
    }

    /* End of Switch: '<S196>/Switch' */
  }

  /* End of Switch: '<S196>/Switch2' */

  /* Saturate: '<S188>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_rx_d;
  }

  /* End of Saturate: '<S188>/Saturation1' */

  /* Sum: '<S188>/Add1' */
  u0 = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S188>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S188>/Saturation2' */

  /* Switch: '<S301>/Switch' */
  if (!rtb_FixPtRelationalOperator) {
    /* Switch: '<S301>/Switch' incorporates:
     *  Fcn: '<S302>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S301>/Switch' */

  /* Trigonometry: '<S221>/Cos4' incorporates:
   *  Switch: '<S210>/Angle_Switch'
   *  Trigonometry: '<S220>/Cos4'
   */
  rtb_Sum1_k5 = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S159>/Add1' incorporates:
   *  Constant: '<S159>/Constant3'
   *  Constant: '<S159>/Constant4'
   *  Gain: '<S12>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S159>/Math Function'
   *  Sum: '<S12>/Add2'
   *  Sum: '<S159>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S221>/Sin5' incorporates:
   *  UnaryMinus: '<S219>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S221>/Sin4' incorporates:
   *  Switch: '<S210>/Angle_Switch'
   *  Trigonometry: '<S220>/Sin4'
   */
  rtb_Product_pz = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S221>/Cos5' incorporates:
   *  UnaryMinus: '<S219>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S221>/Subtract1' incorporates:
   *  Product: '<S221>/Product2'
   *  Product: '<S221>/Product3'
   *  Trigonometry: '<S221>/Cos4'
   *  Trigonometry: '<S221>/Sin4'
   */
  rtb_Add_o2 = (rtb_Sum1_k5 * rtb_thetay_i) + (rtb_Product_pz * rtb_thetay_l);

  /* Sum: '<S221>/Subtract' incorporates:
   *  Product: '<S221>/Product'
   *  Product: '<S221>/Product1'
   *  Trigonometry: '<S221>/Cos4'
   *  Trigonometry: '<S221>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Sum1_k5 * rtb_thetay_l) - (rtb_Product_pz *
    rtb_thetay_i);

  /* Math: '<S221>/Hypot' */
  rtb_thetay_i = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S221>/Switch' incorporates:
   *  Constant: '<S221>/Constant'
   *  Constant: '<S221>/Constant1'
   *  Constant: '<S222>/Constant'
   *  Product: '<S221>/Divide'
   *  Product: '<S221>/Divide1'
   *  RelationalOperator: '<S222>/Compare'
   *  Switch: '<S221>/Switch1'
   */
  if (rtb_thetay_i > 1.0E-6) {
    rtb_rx_d = rtb_Add_o2 / rtb_thetay_i;
    rtb_thetay_l = rtb_Subtract1_do / rtb_thetay_i;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S221>/Switch' */

  /* RelationalOperator: '<S218>/Compare' incorporates:
   *  Abs: '<S210>/Abs'
   *  Constant: '<S218>/Constant'
   *  Trigonometry: '<S221>/Atan1'
   */
  rtb_FixPtRelationalOperator = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S210>/Angle_Switch' incorporates:
   *  Trigonometry: '<S220>/Atan1'
   */
  if (rtb_FixPtRelationalOperator) {
    /* Sum: '<S220>/Subtract1' incorporates:
     *  Product: '<S220>/Product2'
     *  Product: '<S220>/Product3'
     */
    rtb_Add_o2 = (rtb_Sum1_k5 * Code_Gen_Model_ConstB.Sin5_e) + (rtb_Product_pz *
      Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S220>/Subtract' incorporates:
     *  Product: '<S220>/Product'
     *  Product: '<S220>/Product1'
     */
    rtb_thetay_i = (rtb_Sum1_k5 * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Product_pz * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S220>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_thetay_i, rtb_Add_o2);

    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S220>/Constant'
     *  Constant: '<S220>/Constant1'
     *  Constant: '<S223>/Constant'
     *  Product: '<S220>/Divide'
     *  Product: '<S220>/Divide1'
     *  RelationalOperator: '<S223>/Compare'
     *  Switch: '<S220>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_thetay_i /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_thetay_i = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S220>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_o2, rtb_thetay_i);
  } else {
    rtb_rx_d = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S212>/Sum' incorporates:
   *  Sum: '<S211>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S225>/Add1' incorporates:
   *  Constant: '<S225>/Constant3'
   *  Constant: '<S225>/Constant4'
   *  Math: '<S225>/Math Function'
   *  Sum: '<S212>/Sum'
   *  Sum: '<S225>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S227>/Sum1' incorporates:
   *  Constant: '<S212>/Constant2'
   *  Product: '<S227>/Product'
   *  Sum: '<S227>/Sum'
   *  UnitDelay: '<S227>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S212>/Product' incorporates:
   *  Constant: '<S212>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S226>/Diff' incorporates:
   *  UnitDelay: '<S226>/UD'
   *
   * Block description for '<S226>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S226>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S212>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S212>/Add' incorporates:
   *  Gain: '<S212>/Gain1'
   *  Saturate: '<S212>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_thetay_l) + u0;

  /* Sum: '<S212>/Subtract' incorporates:
   *  Constant: '<S212>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_gj;

  /* Sum: '<S212>/Sum2' incorporates:
   *  Gain: '<S212>/Gain2'
   *  UnitDelay: '<S212>/Unit Delay'
   */
  rtb_Sum2_m = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S228>/Switch2' incorporates:
   *  Constant: '<S212>/Constant'
   *  RelationalOperator: '<S228>/LowerRelop1'
   *  Sum: '<S212>/Subtract'
   */
  if (!(rtb_Sum2_m > (1.0 - rtb_Add_gj))) {
    /* Sum: '<S212>/Subtract1' incorporates:
     *  Constant: '<S212>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_gj;

    /* Switch: '<S228>/Switch' incorporates:
     *  Constant: '<S212>/Constant1'
     *  RelationalOperator: '<S228>/UpperRelop'
     *  Sum: '<S212>/Subtract1'
     */
    if (!(rtb_Sum2_m < (-1.0 - rtb_Add_gj))) {
      rtb_thetay_i = rtb_Sum2_m;
    }

    /* End of Switch: '<S228>/Switch' */
  }

  /* End of Switch: '<S228>/Switch2' */

  /* Saturate: '<S212>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Sum2_m = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Sum2_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_m = rtb_thetay_i;
  }

  /* End of Saturate: '<S212>/Saturation1' */

  /* Sum: '<S212>/Add1' */
  u0 = rtb_Add_gj + rtb_Sum2_m;

  /* Saturate: '<S212>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S212>/Saturation2' */

  /* Product: '<S286>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S210>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S210>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator) {
    u0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S213>/Product2' incorporates:
   *  Constant: '<S213>/Constant'
   *  Switch: '<S210>/Speed_Switch'
   */
  rtb_thetay_l = u0 * 1150.4247703785388;

  /* Signum: '<S208>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    u0 = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S208>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S163>/Product' incorporates:
   *  Abs: '<S208>/Abs'
   *  Abs: '<S211>/Abs'
   *  Constant: '<S214>/Constant'
   *  Constant: '<S224>/Constant3'
   *  Constant: '<S224>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S208>/OR'
   *  Lookup_n-D: '<S211>/1-D Lookup Table'
   *  Math: '<S224>/Math Function'
   *  RelationalOperator: '<S208>/Equal1'
   *  RelationalOperator: '<S214>/Compare'
   *  Signum: '<S208>/Sign'
   *  Signum: '<S208>/Sign1'
   *  Sum: '<S224>/Add1'
   *  Sum: '<S224>/Add2'
   */
  rtb_thetay_l = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S209>/Gain' */
  rtb_thetay_i = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S209>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S216>/Sum1' incorporates:
   *  Constant: '<S209>/Constant2'
   *  Product: '<S216>/Product'
   *  Sum: '<S216>/Sum'
   *  UnitDelay: '<S216>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S209>/Product' incorporates:
   *  Constant: '<S209>/Constant3'
   */
  rtb_Product_oy = rtb_Add_gj * Drive_Motor_Control_D;

  /* Sum: '<S215>/Diff' incorporates:
   *  UnitDelay: '<S215>/UD'
   *
   * Block description for '<S215>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S215>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_oy - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S209>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S209>/Add' incorporates:
   *  Gain: '<S209>/Gain1'
   *  Saturate: '<S209>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_thetay_i) + u0;

  /* Sum: '<S209>/Subtract' incorporates:
   *  Constant: '<S209>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_thetay_i;

  /* Sum: '<S209>/Sum2' incorporates:
   *  Gain: '<S209>/Gain2'
   *  UnitDelay: '<S209>/Unit Delay'
   */
  rtb_Sum2_a = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S217>/Switch2' incorporates:
   *  Constant: '<S209>/Constant'
   *  RelationalOperator: '<S217>/LowerRelop1'
   *  Sum: '<S209>/Subtract'
   */
  if (!(rtb_Sum2_a > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S209>/Subtract1' incorporates:
     *  Constant: '<S209>/Constant1'
     */
    rtb_rx_d = -1.0 - rtb_thetay_i;

    /* Switch: '<S217>/Switch' incorporates:
     *  Constant: '<S209>/Constant1'
     *  RelationalOperator: '<S217>/UpperRelop'
     *  Sum: '<S209>/Subtract1'
     */
    if (!(rtb_Sum2_a < (-1.0 - rtb_thetay_i))) {
      rtb_rx_d = rtb_Sum2_a;
    }

    /* End of Switch: '<S217>/Switch' */
  }

  /* End of Switch: '<S217>/Switch2' */

  /* Saturate: '<S209>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_Sum2_a = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_Sum2_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_Sum2_a = rtb_rx_d;
  }

  /* End of Saturate: '<S209>/Saturation1' */

  /* Sum: '<S209>/Add1' */
  u0 = rtb_thetay_i + rtb_Sum2_a;

  /* Saturate: '<S209>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S209>/Saturation2' */

  /* Switch: '<S306>/Switch' */
  if (!rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S306>/Switch' incorporates:
     *  Fcn: '<S307>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S306>/Switch' */

  /* Trigonometry: '<S242>/Cos4' incorporates:
   *  Switch: '<S231>/Angle_Switch'
   *  Trigonometry: '<S241>/Cos4'
   */
  rtb_Sum1_k5 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S160>/Add1' incorporates:
   *  Constant: '<S160>/Constant3'
   *  Constant: '<S160>/Constant4'
   *  Gain: '<S12>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S160>/Math Function'
   *  Sum: '<S12>/Add3'
   *  Sum: '<S160>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S242>/Sin5' incorporates:
   *  UnaryMinus: '<S240>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S242>/Sin4' incorporates:
   *  Switch: '<S231>/Angle_Switch'
   *  Trigonometry: '<S241>/Sin4'
   */
  rtb_Product_pz = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S242>/Cos5' incorporates:
   *  UnaryMinus: '<S240>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S242>/Subtract1' incorporates:
   *  Product: '<S242>/Product2'
   *  Product: '<S242>/Product3'
   *  Trigonometry: '<S242>/Cos4'
   *  Trigonometry: '<S242>/Sin4'
   */
  rtb_rx_d = (rtb_Sum1_k5 * rtb_thetay_i) + (rtb_Product_pz * rtb_thetay_l);

  /* Sum: '<S242>/Subtract' incorporates:
   *  Product: '<S242>/Product'
   *  Product: '<S242>/Product1'
   *  Trigonometry: '<S242>/Cos4'
   *  Trigonometry: '<S242>/Sin4'
   */
  rtb_thetay_i = (rtb_Sum1_k5 * rtb_thetay_l) - (rtb_Product_pz * rtb_thetay_i);

  /* Math: '<S242>/Hypot' */
  rtb_thetay_l = rt_hypotd_snf(rtb_thetay_i, rtb_rx_d);

  /* Switch: '<S242>/Switch' incorporates:
   *  Constant: '<S242>/Constant'
   *  Constant: '<S242>/Constant1'
   *  Constant: '<S243>/Constant'
   *  Product: '<S242>/Divide'
   *  Product: '<S242>/Divide1'
   *  RelationalOperator: '<S243>/Compare'
   *  Switch: '<S242>/Switch1'
   */
  if (rtb_thetay_l > 1.0E-6) {
    rtb_rx_d /= rtb_thetay_l;
    rtb_thetay_l = rtb_thetay_i / rtb_thetay_l;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S242>/Switch' */

  /* RelationalOperator: '<S239>/Compare' incorporates:
   *  Abs: '<S231>/Abs'
   *  Constant: '<S239>/Constant'
   *  Trigonometry: '<S242>/Atan1'
   */
  rtb_FixPtRelationalOperator_ea = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S231>/Angle_Switch' incorporates:
   *  Trigonometry: '<S241>/Atan1'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Sum: '<S241>/Subtract1' incorporates:
     *  Product: '<S241>/Product2'
     *  Product: '<S241>/Product3'
     */
    rtb_thetay_i = (rtb_Sum1_k5 * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Product_pz * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S241>/Subtract' incorporates:
     *  Product: '<S241>/Product'
     *  Product: '<S241>/Product1'
     */
    rtb_thetay_l = (rtb_Sum1_k5 * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Product_pz * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S241>/Hypot' */
    rtb_rx_d = rt_hypotd_snf(rtb_thetay_l, rtb_thetay_i);

    /* Switch: '<S241>/Switch1' incorporates:
     *  Constant: '<S241>/Constant'
     *  Constant: '<S241>/Constant1'
     *  Constant: '<S244>/Constant'
     *  Product: '<S241>/Divide'
     *  Product: '<S241>/Divide1'
     *  RelationalOperator: '<S244>/Compare'
     *  Switch: '<S241>/Switch'
     */
    if (rtb_rx_d > 1.0E-6) {
      rtb_thetay_l /= rtb_rx_d;
      rtb_thetay_i /= rtb_rx_d;
    } else {
      rtb_thetay_l = 1.0;
      rtb_thetay_i = 0.0;
    }

    /* End of Switch: '<S241>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_thetay_i, rtb_thetay_l);
  } else {
    rtb_rx_d = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S233>/Sum' incorporates:
   *  Sum: '<S232>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S246>/Add1' incorporates:
   *  Constant: '<S246>/Constant3'
   *  Constant: '<S246>/Constant4'
   *  Math: '<S246>/Math Function'
   *  Sum: '<S233>/Sum'
   *  Sum: '<S246>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S248>/Sum1' incorporates:
   *  Constant: '<S233>/Constant2'
   *  Product: '<S248>/Product'
   *  Sum: '<S248>/Sum'
   *  UnitDelay: '<S248>/Unit Delay1'
   */
  rtb_Sum1_k5 = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                 Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S233>/Product' incorporates:
   *  Constant: '<S233>/Constant3'
   */
  rtb_Product_pz = rtb_Sum1_k5 * Steering_Motor_Control_D;

  /* Sum: '<S247>/Diff' incorporates:
   *  UnitDelay: '<S247>/UD'
   *
   * Block description for '<S247>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S247>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_pz - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S233>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S233>/Add' incorporates:
   *  Gain: '<S233>/Gain1'
   *  Saturate: '<S233>/Saturation'
   */
  rtb_Add_du = (Steering_Motor_Control_P * rtb_thetay_l) + u0;

  /* Sum: '<S233>/Subtract' incorporates:
   *  Constant: '<S233>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_du;

  /* Sum: '<S233>/Sum2' incorporates:
   *  Gain: '<S233>/Gain2'
   *  UnitDelay: '<S233>/Unit Delay'
   */
  rtb_thetay_l = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S249>/Switch2' incorporates:
   *  Constant: '<S233>/Constant'
   *  RelationalOperator: '<S249>/LowerRelop1'
   *  Sum: '<S233>/Subtract'
   */
  if (!(rtb_thetay_l > (1.0 - rtb_Add_du))) {
    /* Sum: '<S233>/Subtract1' incorporates:
     *  Constant: '<S233>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_du;

    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S233>/Constant1'
     *  RelationalOperator: '<S249>/UpperRelop'
     *  Sum: '<S233>/Subtract1'
     */
    if (!(rtb_thetay_l < (-1.0 - rtb_Add_du))) {
      rtb_thetay_i = rtb_thetay_l;
    }

    /* End of Switch: '<S249>/Switch' */
  }

  /* End of Switch: '<S249>/Switch2' */

  /* Saturate: '<S233>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Add2_k_idx_0 = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Add2_k_idx_0 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Add2_k_idx_0 = rtb_thetay_i;
  }

  /* End of Saturate: '<S233>/Saturation1' */

  /* Sum: '<S233>/Add1' */
  u0 = rtb_Add_du + rtb_Add2_k_idx_0;

  /* Saturate: '<S233>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S233>/Saturation2' */

  /* Product: '<S286>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S231>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S231>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    u0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S234>/Product2' incorporates:
   *  Constant: '<S234>/Constant'
   *  Switch: '<S231>/Speed_Switch'
   */
  rtb_thetay_l = u0 * 1150.4247703785388;

  /* Signum: '<S229>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    u0 = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S229>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S164>/Product' incorporates:
   *  Abs: '<S229>/Abs'
   *  Abs: '<S232>/Abs'
   *  Constant: '<S235>/Constant'
   *  Constant: '<S245>/Constant3'
   *  Constant: '<S245>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S229>/OR'
   *  Lookup_n-D: '<S232>/1-D Lookup Table'
   *  Math: '<S245>/Math Function'
   *  RelationalOperator: '<S229>/Equal1'
   *  RelationalOperator: '<S235>/Compare'
   *  Signum: '<S229>/Sign'
   *  Signum: '<S229>/Sign1'
   *  Sum: '<S245>/Add1'
   *  Sum: '<S245>/Add2'
   */
  rtb_thetay_l = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S230>/Gain' */
  rtb_thetay_i = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S230>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S237>/Sum1' incorporates:
   *  Constant: '<S230>/Constant2'
   *  Product: '<S237>/Product'
   *  Sum: '<S237>/Sum'
   *  UnitDelay: '<S237>/Unit Delay1'
   */
  rtb_rx_nr = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S230>/Product' incorporates:
   *  Constant: '<S230>/Constant3'
   */
  rtb_Add_du = rtb_rx_nr * Drive_Motor_Control_D;

  /* Sum: '<S236>/Diff' incorporates:
   *  UnitDelay: '<S236>/UD'
   *
   * Block description for '<S236>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S236>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Add_du - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S230>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S230>/Add' incorporates:
   *  Gain: '<S230>/Gain1'
   *  Saturate: '<S230>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_thetay_i) + u0;

  /* Sum: '<S230>/Subtract' incorporates:
   *  Constant: '<S230>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_thetay_i;

  /* Sum: '<S230>/Sum2' incorporates:
   *  Gain: '<S230>/Gain2'
   *  UnitDelay: '<S230>/Unit Delay'
   */
  rtb_thetay_l = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S238>/Switch2' incorporates:
   *  Constant: '<S230>/Constant'
   *  RelationalOperator: '<S238>/LowerRelop1'
   *  Sum: '<S230>/Subtract'
   */
  if (!(rtb_thetay_l > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S230>/Subtract1' incorporates:
     *  Constant: '<S230>/Constant1'
     */
    rtb_rx_d = -1.0 - rtb_thetay_i;

    /* Switch: '<S238>/Switch' incorporates:
     *  Constant: '<S230>/Constant1'
     *  RelationalOperator: '<S238>/UpperRelop'
     *  Sum: '<S230>/Subtract1'
     */
    if (!(rtb_thetay_l < (-1.0 - rtb_thetay_i))) {
      rtb_rx_d = rtb_thetay_l;
    }

    /* End of Switch: '<S238>/Switch' */
  }

  /* End of Switch: '<S238>/Switch2' */

  /* Saturate: '<S230>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_rx_d = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_rx_d = Drive_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S230>/Saturation1' */

  /* Sum: '<S230>/Add1' */
  u0 = rtb_thetay_i + rtb_rx_d;

  /* Saturate: '<S230>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S230>/Saturation2' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_thetay;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_rx;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_thetay_n;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* SignalConversion: '<S5>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S9>/Trigonometric Function1' */
  rtb_rx = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S9>/Trigonometric Function'
   */
  rtb_Add2_k_idx_1 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Rotationmatrixfromlocalto_1 = rtb_rx;

  /* SignalConversion generated from: '<S9>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S9>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_0 = -rtb_rx;

  /* Sum: '<S84>/Diff' incorporates:
   *  UnitDelay: '<S84>/UD'
   *
   * Block description for '<S84>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S84>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S9>/Subtract2' incorporates:
   *  Constant: '<S9>/Constant3'
   *  Gain: '<S9>/Gain7'
   *  Math: '<S9>/Square'
   */
  rtb_rx = 1.0 - ((rtb_thetay_n * rtb_thetay_n) * 0.16666666666666666);

  /* Gain: '<S9>/Gain6' */
  rtb_thetay_n *= 0.5;

  /* SignalConversion generated from: '<S9>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_0 = rtb_thetay_n;

  /* SignalConversion generated from: '<S9>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S9>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_1 = -rtb_thetay_n;

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S85>/Diff'
   *  UnitDelay: '<S85>/UD'
   *
   * Block description for '<S85>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S85>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S9>/Product1' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S86>/Diff'
   *  UnitDelay: '<S86>/UD'
   *
   * Block description for '<S86>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S86>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S9>/Product2' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S87>/Diff'
   *  UnitDelay: '<S87>/UD'
   *
   * Block description for '<S87>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S87>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S9>/Product3' incorporates:
   *  Constant: '<S9>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S88>/Diff'
   *  UnitDelay: '<S88>/UD'
   *
   * Block description for '<S88>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S88>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S9>/Product7' incorporates:
   *  Fcn: '<S89>/r->x'
   *  Fcn: '<S89>/theta->y'
   *  Fcn: '<S90>/r->x'
   *  Fcn: '<S90>/theta->y'
   *  Fcn: '<S91>/r->x'
   *  Fcn: '<S91>/theta->y'
   *  Fcn: '<S92>/r->x'
   *  Fcn: '<S92>/theta->y'
   */
  rtb_thetay_n_0[0] = rtb_thetay_n * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[1] = rtb_thetay_n * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[2] = rtb_thetay * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[3] = rtb_thetay * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[4] = rtb_thetay_l * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[5] = rtb_thetay_l * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[6] = rtb_thetay_i * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n_0[7] = rtb_thetay_i * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S9>/Product7' incorporates:
   *  Constant: '<S9>/Constant4'
   */
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
    u0 = 0.0;
    tmp = 0;
    for (i = 0; i < 8; i++) {
      u0 += Code_Gen_Model_ConstP.Constant4_Value[tmp + rtb_Num_Segments] *
        rtb_thetay_n_0[i];
      tmp += 2;
    }

    rtb_Akxhatkk1[rtb_Num_Segments] = u0;
  }

  /* End of Product: '<S9>/Product7' */

  /* Product: '<S9>/Product6' incorporates:
   *  Concatenate: '<S9>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S9>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay = (rtb_rx * rtb_Akxhatkk1[0]) + (rtb_POSEexponentialmatrixfori_1 *
    rtb_Akxhatkk1[1]);
  rtb_thetay_n = (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[0]) + (rtb_rx *
    rtb_Akxhatkk1[1]);

  /* Product: '<S9>/Product6' incorporates:
   *  Concatenate: '<S9>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Add2_k_idx_1 * rtb_thetay) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_thetay_n);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 * rtb_thetay)
    + (rtb_Add2_k_idx_1 * rtb_thetay_n);

  /* Outputs for Enabled SubSystem: '<S50>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S81>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S81>/D[k]*u[k]' incorporates:
     *  Constant: '<S30>/D'
     */
    rtb_thetay = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S81>/Sum' incorporates:
     *  Constant: '<S30>/C'
     *  Delay: '<S30>/MemoryX'
     *  Product: '<S81>/C[k]*xhat[k|k-1]'
     *  Product: '<S81>/D[k]*u[k]'
     *  Sum: '<S81>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_thetay;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_thetay;

    /* Product: '<S81>/Product3' incorporates:
     *  Constant: '<S31>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S81>/Product3' incorporates:
     *  Outport: '<S81>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S50>/MeasurementUpdate' */

  /* RelationalOperator: '<S94>/Compare' incorporates:
   *  Constant: '<S93>/Constant'
   *  Constant: '<S94>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S93>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S93>/Switch' incorporates:
   *  UnitDelay: '<S93>/Unit Delay'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S93>/Switch' */

  /* Sum: '<S93>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay;

  /* Gain: '<S93>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S93>/Switch1' incorporates:
   *  UnitDelay: '<S93>/Unit Delay1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay_n = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_thetay_n = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S93>/Switch1' */

  /* Sum: '<S93>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_thetay_n;

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  u0 = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(u0)) || (rtIsInf(u0))) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  rtb_GameState = (uint8_T)((u0 < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-u0)))))) : ((int32_T)((uint8_T)u0)));

  /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

  /* Chart: '<S10>/Chart' */
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

  /* End of Chart: '<S10>/Chart' */

  /* Update for UnitDelay: '<S27>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S28>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S29>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' incorporates:
     *  Bias: '<S124>/Bias'
     *  Merge: '<S98>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' incorporates:
     *  Bias: '<S124>/Bias'
     *  Merge: '<S98>/Merge1'
     *  S-Function (sfix_udelay): '<S7>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S7>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S30>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S50>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S30>/A'
   *  Delay: '<S30>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S30>/MemoryX' incorporates:
   *  Constant: '<S30>/B'
   *  Product: '<S50>/A[k]*xhat[k|k-1]'
   *  Product: '<S50>/B[k]*u[k]'
   *  Sum: '<S50>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S9>/Accumulator2' incorporates:
   *  Constant: '<S9>/Constant'
   *  DiscreteIntegrator: '<S9>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S9>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S9>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S17>/Delay Input1' incorporates:
   *  Constant: '<S4>/Constant3'
   *
   * Block description for '<S17>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S4>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S261>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S261>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S283>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S282>/UD'
   *
   * Block description for '<S282>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_p2;

  /* Update for UnitDelay: '<S280>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S263>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4;

  /* Update for UnitDelay: '<S278>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S278>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S278>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4;

  /* Update for UnitDelay: '<S262>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Switch2_k;

  /* Update for UnitDelay: '<S271>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S271>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S271>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Switch2_k;

  /* Update for UnitDelay: '<S185>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Sum1_p;

  /* Update for UnitDelay: '<S184>/UD'
   *
   * Block description for '<S184>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_e;

  /* Update for UnitDelay: '<S170>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_c;

  /* Update for UnitDelay: '<S174>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_rx_g;

  /* Update for UnitDelay: '<S173>/UD'
   *
   * Block description for '<S173>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S167>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S206>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S205>/UD'
   *
   * Block description for '<S205>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S191>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S195>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S194>/UD'
   *
   * Block description for '<S194>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S188>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S227>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S226>/UD'
   *
   * Block description for '<S226>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S212>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Sum2_m;

  /* Update for UnitDelay: '<S216>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S215>/UD'
   *
   * Block description for '<S215>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_oy;

  /* Update for UnitDelay: '<S209>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Sum2_a;

  /* Update for UnitDelay: '<S248>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Sum1_k5;

  /* Update for UnitDelay: '<S247>/UD'
   *
   * Block description for '<S247>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_pz;

  /* Update for UnitDelay: '<S233>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S237>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_rx_nr;

  /* Update for UnitDelay: '<S236>/UD'
   *
   * Block description for '<S236>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Add_du;

  /* Update for UnitDelay: '<S230>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_d;

  /* Update for UnitDelay: '<S84>/UD'
   *
   * Block description for '<S84>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S85>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S85>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S86>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S86>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S87>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S87>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S88>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S88>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S93>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_thetay;

  /* Update for UnitDelay: '<S93>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_thetay_n;
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

    /* Start for If: '<S11>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S30>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S261>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S278>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S271>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S330>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S11>/Spline Path Following Enabled' */
    /* Start for If: '<S102>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S98>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S102>/Robot_Index_Is_Valid' */
    /* Start for If: '<S105>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S105>/Circle_Check_Valid' */
    /* Start for If: '<S107>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S105>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S102>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S11>/Spline Path Following Enabled' */
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
