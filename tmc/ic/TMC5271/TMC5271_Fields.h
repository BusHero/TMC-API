/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved. This software is
* proprietary & confidential to Analog Devices, Inc. and its licensors.
*******************************************************************************/


// Autogenerated C header for register fields in TMC5271
// Generator version: 1.0

#ifndef TMC5271_FIELDS
#define TMC5271_FIELDS

#define TMC5271_EN_PWM_MODE_MASK                 0x00000001
#define TMC5271_EN_PWM_MODE_SHIFT                0
#define TMC5271_MULTISTEP_FILT_MASK              0x00000002
#define TMC5271_MULTISTEP_FILT_SHIFT             1
#define TMC5271_SHAFT_MASK                       0x00000004
#define TMC5271_SHAFT_SHIFT                      2
#define TMC5271_DIAG0_ERROR_MASK                 0x00000008
#define TMC5271_DIAG0_ERROR_SHIFT                3
#define TMC5271_DIAG0_OTPW_MASK                  0x00000010
#define TMC5271_DIAG0_OTPW_SHIFT                 4
#define TMC5271_DIAG0_STALL_STEP_MASK            0x00000020
#define TMC5271_DIAG0_STALL_STEP_SHIFT           5
#define TMC5271_DIAG1_STALL_DIR_MASK             0x00000040
#define TMC5271_DIAG1_STALL_DIR_SHIFT            6
#define TMC5271_DIAG1_INDEX_MASK                 0x00000080
#define TMC5271_DIAG1_INDEX_SHIFT                7
#define TMC5271_DIAG0_INT_PUSHPULL_MASK          0x00000100
#define TMC5271_DIAG0_INT_PUSHPULL_SHIFT         8
#define TMC5271_DIAG1_POSCOMP_PUSHPULL_MASK      0x00000200
#define TMC5271_DIAG1_POSCOMP_PUSHPULL_SHIFT     9
#define TMC5271_SMALL_HYSTERESIS_MASK            0x00000400
#define TMC5271_SMALL_HYSTERESIS_SHIFT           10
#define TMC5271_STOP_ENABLE_MASK                 0x00000800
#define TMC5271_STOP_ENABLE_SHIFT                11
#define TMC5271_DIRECT_MODE_MASK                 0x00001000
#define TMC5271_DIRECT_MODE_SHIFT                12
#define TMC5271_SD_MASK                          0x00002000
#define TMC5271_SD_SHIFT                         13
#define TMC5271_DRV_ENN_MASK                     0x00004000
#define TMC5271_DRV_ENN_SHIFT                    14
#define TMC5271_QSC_STS_ENA_MASK                 0x00008000
#define TMC5271_QSC_STS_ENA_SHIFT                15
#define TMC5271_DIAG0_SEL_NERROR_RAMP_MASK       0x20000000
#define TMC5271_DIAG0_SEL_NERROR_RAMP_SHIFT      29
#define TMC5271_RESET_MASK                       0x00000001
#define TMC5271_RESET_SHIFT                      0
#define TMC5271_DRV_ERR_MASK                     0x00000002
#define TMC5271_DRV_ERR_SHIFT                    1
#define TMC5271_UV_LDO_MASK                      0x00000004
#define TMC5271_UV_LDO_SHIFT                     2
#define TMC5271_REGISTER_RESET_MASK              0x00000008
#define TMC5271_REGISTER_RESET_SHIFT             3
#define TMC5271_VM_UVLO_MASK                     0x00000010
#define TMC5271_VM_UVLO_SHIFT                    4
#define TMC5271_IFCNT_MASK                       0x000000FF
#define TMC5271_IFCNT_SHIFT                      0
#define TMC5271_SLAVEADDR_MASK                   0x000000FF
#define TMC5271_SLAVEADDR_SHIFT                  0
#define TMC5271_SENDDELAY_MASK                   0x00000F00
#define TMC5271_SENDDELAY_SHIFT                  8
#define TMC5271_ADC_TEMPERATURE_MASK             0x000001FE
#define TMC5271_ADC_TEMPERATURE_SHIFT            1
#define TMC5271_ADC_EN_MASK                      0x00000200
#define TMC5271_ADC_EN_SHIFT                     9
#define TMC5271_SEL_OSCILLATOR_MASK              0x00000800
#define TMC5271_SEL_OSCILLATOR_SHIFT             11
#define TMC5271_EXT_RES_DET_MASK                 0x00001000
#define TMC5271_EXT_RES_DET_SHIFT                12
#define TMC5271_OUTPUT_MASK                      0x00002000
#define TMC5271_OUTPUT_SHIFT                     13
#define TMC5271_QSC_STATUS_MASK                  0x00008000
#define TMC5271_QSC_STATUS_SHIFT                 15
#define TMC5271_SILICON_RV_MASK                  0x00070000
#define TMC5271_SILICON_RV_SHIFT                 16
#define TMC5271_VERSION_MASK                     0xFF000000
#define TMC5271_VERSION_SHIFT                    24
#define TMC5271_FSR_MASK                         0x00000003
#define TMC5271_FSR_SHIFT                        0
#define TMC5271_FSR_IREF_MASK                    0x0000000C
#define TMC5271_FSR_IREF_SHIFT                   2
#define TMC5271_EN_EMERGENCY_DISABLE_MASK        0x00000010
#define TMC5271_EN_EMERGENCY_DISABLE_SHIFT       4
#define TMC5271_STANDSTILL_TIME_MASK             0x00070000
#define TMC5271_STANDSTILL_TIME_SHIFT            16
#define TMC5271_GLOBALSCALER_A_MASK              0x000000FF
#define TMC5271_GLOBALSCALER_A_SHIFT             0
#define TMC5271_GLOBALSCALER_B_MASK              0x0000FF00
#define TMC5271_GLOBALSCALER_B_SHIFT             8
#define TMC5271_RAMPMODE_MASK                    0x00000003
#define TMC5271_RAMPMODE_SHIFT                   0
#define TMC5271_MSLUT_ADDR_MASK                  0x0000001F
#define TMC5271_MSLUT_ADDR_SHIFT                 0
#define TMC5271_MSLUT_DATA_MASK                  0xFFFFFFFF
#define TMC5271_MSLUT_DATA_SHIFT                 0
#define TMC5271_X_COMPARE_MASK                   0xFFFFFFFF
#define TMC5271_X_COMPARE_SHIFT                  0
#define TMC5271_X_COMPARE_REPEAT_MASK            0x00FFFFFF
#define TMC5271_X_COMPARE_REPEAT_SHIFT           0
#define TMC5271_IHOLD_MASK                       0x0000001F
#define TMC5271_IHOLD_SHIFT                      0
#define TMC5271_IRUN_MASK                        0x00001F00
#define TMC5271_IRUN_SHIFT                       8
#define TMC5271_IHOLDDELAY_MASK                  0x000F0000
#define TMC5271_IHOLDDELAY_SHIFT                 16
#define TMC5271_IRUNDELAY_MASK                   0x0F000000
#define TMC5271_IRUNDELAY_SHIFT                  24
#define TMC5271_TPOWERDOWN_MASK                  0x000000FF
#define TMC5271_TPOWERDOWN_SHIFT                 0
#define TMC5271_TSTEP_MASK                       0x000FFFFF
#define TMC5271_TSTEP_SHIFT                      0
#define TMC5271_TPWMTHRS_MASK                    0x000FFFFF
#define TMC5271_TPWMTHRS_SHIFT                   0
#define TMC5271_TCOOLTHRS_MASK                   0x000FFFFF
#define TMC5271_TCOOLTHRS_SHIFT                  0
#define TMC5271_THIGH_MASK                       0x000FFFFF
#define TMC5271_THIGH_SHIFT                      0
#define TMC5271_XACTUAL_MASK                     0xFFFFFFFF
#define TMC5271_XACTUAL_SHIFT                    0
#define TMC5271_VACTUAL_MASK                     0x00FFFFFF
#define TMC5271_VACTUAL_SHIFT                    0
#define TMC5271_AACTUAL_MASK                     0x00FFFFFF
#define TMC5271_AACTUAL_SHIFT                    0
#define TMC5271_VSTART_MASK                      0x0003FFFF
#define TMC5271_VSTART_SHIFT                     0
#define TMC5271_A1_MASK                          0x0003FFFF
#define TMC5271_A1_SHIFT                         0
#define TMC5271_V1_MASK                          0x000FFFFF
#define TMC5271_V1_SHIFT                         0
#define TMC5271_A2_MASK                          0x0003FFFF
#define TMC5271_A2_SHIFT                         0
#define TMC5271_V2_MASK                          0x000FFFFF
#define TMC5271_V2_SHIFT                         0
#define TMC5271_AMAX_MASK                        0x0003FFFF
#define TMC5271_AMAX_SHIFT                       0
#define TMC5271_VMAX_MASK                        0x007FFFFF
#define TMC5271_VMAX_SHIFT                       0
#define TMC5271_DMAX_MASK                        0x0003FFFF
#define TMC5271_DMAX_SHIFT                       0
#define TMC5271_D2_MASK                          0x0003FFFF
#define TMC5271_D2_SHIFT                         0
#define TMC5271_D1_MASK                          0x0003FFFF
#define TMC5271_D1_SHIFT                         0
#define TMC5271_VSTOP_MASK                       0x0003FFFF
#define TMC5271_VSTOP_SHIFT                      0
#define TMC5271_TVMAX_MASK                       0x0000FFFF
#define TMC5271_TVMAX_SHIFT                      0
#define TMC5271_TZEROWAIT_MASK                   0x0000FFFF
#define TMC5271_TZEROWAIT_SHIFT                  0
#define TMC5271_XTARGET_MASK                     0xFFFFFFFF
#define TMC5271_XTARGET_SHIFT                    0
#define TMC5271_VDCMIN_RESERVED_MASK             0x000000FF
#define TMC5271_VDCMIN_RESERVED_SHIFT            0
#define TMC5271_VDCMIN_VDCMIN_MASK               0x007FFF00
#define TMC5271_VDCMIN_VDCMIN_SHIFT              8
#define TMC5271_SW_MODE_STOP_L_ENABLE_MASK       0x00000001
#define TMC5271_SW_MODE_STOP_L_ENABLE_SHIFT      0
#define TMC5271_SW_MODE_STOP_R_ENABLE_MASK       0x00000002
#define TMC5271_SW_MODE_STOP_R_ENABLE_SHIFT      1
#define TMC5271_SW_MODE_POL_STOP_L_MASK          0x00000004
#define TMC5271_SW_MODE_POL_STOP_L_SHIFT         2
#define TMC5271_SW_MODE_POL_STOP_R_MASK          0x00000008
#define TMC5271_SW_MODE_POL_STOP_R_SHIFT         3
#define TMC5271_SW_MODE_SWAP_LR_MASK             0x00000010
#define TMC5271_SW_MODE_SWAP_LR_SHIFT            4
#define TMC5271_SW_MODE_LATCH_L_ACTIVE_MASK      0x00000020
#define TMC5271_SW_MODE_LATCH_L_ACTIVE_SHIFT     5
#define TMC5271_SW_MODE_LATCH_L_INACTIVE_MASK    0x00000040
#define TMC5271_SW_MODE_LATCH_L_INACTIVE_SHIFT   6
#define TMC5271_SW_MODE_LATCH_R_ACTIVE_MASK      0x00000080
#define TMC5271_SW_MODE_LATCH_R_ACTIVE_SHIFT     7
#define TMC5271_SW_MODE_LATCH_R_INACTIVE_MASK    0x00000100
#define TMC5271_SW_MODE_LATCH_R_INACTIVE_SHIFT   8
#define TMC5271_SW_MODE_EN_LATCH_ENCODER_MASK    0x00000200
#define TMC5271_SW_MODE_EN_LATCH_ENCODER_SHIFT   9
#define TMC5271_SW_MODE_SG_STOP_MASK             0x00000400
#define TMC5271_SW_MODE_SG_STOP_SHIFT            10
#define TMC5271_SW_MODE_EN_SOFTSTOP_MASK         0x00000800
#define TMC5271_SW_MODE_EN_SOFTSTOP_SHIFT        11
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_L_MASK   0x00001000
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_L_SHIFT  12
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_R_MASK   0x00002000
#define TMC5271_SW_MODE_EN_VIRTUAL_STOP_R_SHIFT  13
#define TMC5271_SW_MODE_VIRTUAL_STEP_ENC_MASK    0x00004000
#define TMC5271_SW_MODE_VIRTUAL_STEP_ENC_SHIFT   14
#define TMC5271_STATUS_STOP_L_MASK               0x00000001
#define TMC5271_STATUS_STOP_L_SHIFT              0
#define TMC5271_STATUS_STOP_R_MASK               0x00000002
#define TMC5271_STATUS_STOP_R_SHIFT              1
#define TMC5271_STATUS_LATCH_L_MASK              0x00000004
#define TMC5271_STATUS_LATCH_L_SHIFT             2
#define TMC5271_STATUS_LATCH_R_MASK              0x00000008
#define TMC5271_STATUS_LATCH_R_SHIFT             3
#define TMC5271_EVENT_STOP_L_MASK                0x00000010
#define TMC5271_EVENT_STOP_L_SHIFT               4
#define TMC5271_EVENT_STOP_R_MASK                0x00000020
#define TMC5271_EVENT_STOP_R_SHIFT               5
#define TMC5271_EVENT_STOP_SG_MASK               0x00000040
#define TMC5271_EVENT_STOP_SG_SHIFT              6
#define TMC5271_EVENT_POS_REACHED_MASK           0x00000080
#define TMC5271_EVENT_POS_REACHED_SHIFT          7
#define TMC5271_VELOCITY_REACHED_MASK            0x00000100
#define TMC5271_VELOCITY_REACHED_SHIFT           8
#define TMC5271_POSITION_REACHED_MASK            0x00000200
#define TMC5271_POSITION_REACHED_SHIFT           9
#define TMC5271_VZERO_MASK                       0x00000400
#define TMC5271_VZERO_SHIFT                      10
#define TMC5271_T_ZEROWAIT_ACTIVE_MASK           0x00000800
#define TMC5271_T_ZEROWAIT_ACTIVE_SHIFT          11
#define TMC5271_SECOND_MOVE_MASK                 0x00001000
#define TMC5271_SECOND_MOVE_SHIFT                12
#define TMC5271_STATUS_SG_MASK                   0x00002000
#define TMC5271_STATUS_SG_SHIFT                  13
#define TMC5271_STATUS_VIRTUAL_STOP_L_MASK       0x00004000
#define TMC5271_STATUS_VIRTUAL_STOP_L_SHIFT      14
#define TMC5271_STATUS_VIRTUAL_STOP_R_MASK       0x00008000
#define TMC5271_STATUS_VIRTUAL_STOP_R_SHIFT      15
#define TMC5271_XLATCH_MASK                      0xFFFFFFFF
#define TMC5271_XLATCH_SHIFT                     0
#define TMC5271_P_POSITION_MASK                  0x000003FF
#define TMC5271_P_POSITION_SHIFT                 0
#define TMC5271_TOLERANCE_MASK                   0x00FF0000
#define TMC5271_TOLERANCE_SHIFT                  16
#define TMC5271_TOL_ON_POS_REACHED_MASK          0x10000000
#define TMC5271_TOL_ON_POS_REACHED_SHIFT         28
#define TMC5271_X_ENC_MASK                       0xFFFFFFFF
#define TMC5271_X_ENC_SHIFT                      0
#define TMC5271_POL_A_MASK                       0x00000001
#define TMC5271_POL_A_SHIFT                      0
#define TMC5271_POL_B_MASK                       0x00000002
#define TMC5271_POL_B_SHIFT                      1
#define TMC5271_POL_N_MASK                       0x00000004
#define TMC5271_POL_N_SHIFT                      2
#define TMC5271_IGNORE_AB_MASK                   0x00000008
#define TMC5271_IGNORE_AB_SHIFT                  3
#define TMC5271_CLR_CONT_MASK                    0x00000010
#define TMC5271_CLR_CONT_SHIFT                   4
#define TMC5271_CLR_ONCE_MASK                    0x00000020
#define TMC5271_CLR_ONCE_SHIFT                   5
#define TMC5271_POS_NEG_EDGE_MASK                0x000000C0
#define TMC5271_POS_NEG_EDGE_SHIFT               6
#define TMC5271_CLR_ENC_X_MASK                   0x00000100
#define TMC5271_CLR_ENC_X_SHIFT                  8
#define TMC5271_LATCH_X_ACT_MASK                 0x00000200
#define TMC5271_LATCH_X_ACT_SHIFT                9
#define TMC5271_ENC_SEL_DECIMAL_MASK             0x00000400
#define TMC5271_ENC_SEL_DECIMAL_SHIFT            10
#define TMC5271_NBEMF_ABN_SEL_MASK               0x00000800
#define TMC5271_NBEMF_ABN_SEL_SHIFT              11
#define TMC5271_BEMF_HYST_MASK                   0x00007000
#define TMC5271_BEMF_HYST_SHIFT                  12
#define TMC5271_QSC_ENC_EN_MASK                  0x00008000
#define TMC5271_QSC_ENC_EN_SHIFT                 15
#define TMC5271_BEMF_BLANK_TIME_MASK             0x00FF0000
#define TMC5271_BEMF_BLANK_TIME_SHIFT            16
#define TMC5271_BEMF_FILTER_SEL_MASK             0x30000000
#define TMC5271_BEMF_FILTER_SEL_SHIFT            28
#define TMC5271_ENC_CONST_MASK                   0xFFFFFFFF
#define TMC5271_ENC_CONST_SHIFT                  0
#define TMC5271_N_EVENT_MASK                     0x00000001
#define TMC5271_N_EVENT_SHIFT                    0
#define TMC5271_DEVIATION_WARN_MASK              0x00000002
#define TMC5271_DEVIATION_WARN_SHIFT             1
#define TMC5271_ENC_LATCH_MASK                   0xFFFFFFFF
#define TMC5271_ENC_LATCH_SHIFT                  0
#define TMC5271_ENC_DEVIATION_MASK               0x000FFFFF
#define TMC5271_ENC_DEVIATION_SHIFT              0
#define TMC5271_VIRTUAL_STOP_L_MASK              0xFFFFFFFF
#define TMC5271_VIRTUAL_STOP_L_SHIFT             0
#define TMC5271_VIRTUAL_STOP_R_MASK              0xFFFFFFFF
#define TMC5271_VIRTUAL_STOP_R_SHIFT             0
#define TMC5271_MSCNT_MASK                       0x000003FF
#define TMC5271_MSCNT_SHIFT                      0
#define TMC5271_CUR_A_MASK                       0x000001FF
#define TMC5271_CUR_A_SHIFT                      0
#define TMC5271_CUR_B_MASK                       0x01FF0000
#define TMC5271_CUR_B_SHIFT                      16
#define TMC5271_TOFF_MASK                        0x0000000F
#define TMC5271_TOFF_SHIFT                       0
#define TMC5271_HSTRT_TFD210_MASK                0x00000070
#define TMC5271_HSTRT_TFD210_SHIFT               4
#define TMC5271_HEND_OFFSET_MASK                 0x00000780
#define TMC5271_HEND_OFFSET_SHIFT                7
#define TMC5271_FD3_MASK                         0x00000800
#define TMC5271_FD3_SHIFT                        11
#define TMC5271_DISFDCC_MASK                     0x00001000
#define TMC5271_DISFDCC_SHIFT                    12
#define TMC5271_CHM_MASK                         0x00004000
#define TMC5271_CHM_SHIFT                        14
#define TMC5271_TBL_MASK                         0x00018000
#define TMC5271_TBL_SHIFT                        15
#define TMC5271_VHIGHFS_MASK                     0x00040000
#define TMC5271_VHIGHFS_SHIFT                    18
#define TMC5271_VHIGHCHM_MASK                    0x00080000
#define TMC5271_VHIGHCHM_SHIFT                   19
#define TMC5271_TPFD_MASK                        0x00F00000
#define TMC5271_TPFD_SHIFT                       20
#define TMC5271_MRES_MASK                        0x0F000000
#define TMC5271_MRES_SHIFT                       24
#define TMC5271_INTPOL_MASK                      0x10000000
#define TMC5271_INTPOL_SHIFT                     28
#define TMC5271_DEDGE_MASK                       0x20000000
#define TMC5271_DEDGE_SHIFT                      29
#define TMC5271_DISS2G_MASK                      0x40000000
#define TMC5271_DISS2G_SHIFT                     30
#define TMC5271_DISS2VS_MASK                     0x80000000
#define TMC5271_DISS2VS_SHIFT                    31
#define TMC5271_SEMIN_MASK                       0x0000000F
#define TMC5271_SEMIN_SHIFT                      0
#define TMC5271_SEUP_MASK                        0x00000060
#define TMC5271_SEUP_SHIFT                       5
#define TMC5271_SEMAX_MASK                       0x00000F00
#define TMC5271_SEMAX_SHIFT                      8
#define TMC5271_SEDN_MASK                        0x00006000
#define TMC5271_SEDN_SHIFT                       13
#define TMC5271_SEIMIN_MASK                      0x00008000
#define TMC5271_SEIMIN_SHIFT                     15
#define TMC5271_SGT_MASK                         0x007F0000
#define TMC5271_SGT_SHIFT                        16
#define TMC5271_SFILT_MASK                       0x01000000
#define TMC5271_SFILT_SHIFT                      24
#define TMC5271_DC_TIME_MASK                     0x000003FF
#define TMC5271_DC_TIME_SHIFT                    0
#define TMC5271_DC_SG_MASK                       0x00FF0000
#define TMC5271_DC_SG_SHIFT                      16
#define TMC5271_SG_RESULT_MASK                   0x000003FF
#define TMC5271_SG_RESULT_SHIFT                  0
#define TMC5271_S2VSA_MASK                       0x00001000
#define TMC5271_S2VSA_SHIFT                      12
#define TMC5271_S2VSB_MASK                       0x00002000
#define TMC5271_S2VSB_SHIFT                      13
#define TMC5271_STEALTH_MASK                     0x00004000
#define TMC5271_STEALTH_SHIFT                    14
#define TMC5271_FSACTIVE_MASK                    0x00008000
#define TMC5271_FSACTIVE_SHIFT                   15
#define TMC5271_CS_ACTUAL_MASK                   0x001F0000
#define TMC5271_CS_ACTUAL_SHIFT                  16
#define TMC5271_STALLGUARD_MASK                  0x01000000
#define TMC5271_STALLGUARD_SHIFT                 24
#define TMC5271_OT_MASK                          0x02000000
#define TMC5271_OT_SHIFT                         25
#define TMC5271_OTPW_MASK                        0x04000000
#define TMC5271_OTPW_SHIFT                       26
#define TMC5271_S2GA_MASK                        0x08000000
#define TMC5271_S2GA_SHIFT                       27
#define TMC5271_S2GB_MASK                        0x10000000
#define TMC5271_S2GB_SHIFT                       28
#define TMC5271_OLA_MASK                         0x20000000
#define TMC5271_OLA_SHIFT                        29
#define TMC5271_OLB_MASK                         0x40000000
#define TMC5271_OLB_SHIFT                        30
#define TMC5271_STST_MASK                        0x80000000
#define TMC5271_STST_SHIFT                       31
#define TMC5271_PWM_OFS_MASK                     0x000000FF
#define TMC5271_PWM_OFS_SHIFT                    0
#define TMC5271_PWM_GRAD_MASK                    0x0000FF00
#define TMC5271_PWM_GRAD_SHIFT                   8
#define TMC5271_PWM_FREQ_MASK                    0x00030000
#define TMC5271_PWM_FREQ_SHIFT                   16
#define TMC5271_PWM_AUTOSCALE_MASK               0x00040000
#define TMC5271_PWM_AUTOSCALE_SHIFT              18
#define TMC5271_PWM_AUTOGRAD_MASK                0x00080000
#define TMC5271_PWM_AUTOGRAD_SHIFT               19
#define TMC5271_FREEWHEEL_MASK                   0x00300000
#define TMC5271_FREEWHEEL_SHIFT                  20
#define TMC5271_PWM_MEAS_SD_ENABLE_MASK          0x00400000
#define TMC5271_PWM_MEAS_SD_ENABLE_SHIFT         22
#define TMC5271_PWM_DIS_REG_STST_MASK            0x00800000
#define TMC5271_PWM_DIS_REG_STST_SHIFT           23
#define TMC5271_PWM_REG_MASK                     0x0F000000
#define TMC5271_PWM_REG_SHIFT                    24
#define TMC5271_PWM_LIM_MASK                     0xF0000000
#define TMC5271_PWM_LIM_SHIFT                    28
#define TMC5271_PWM_SCALE_SUM_MASK               0x000003FF
#define TMC5271_PWM_SCALE_SUM_SHIFT              0
#define TMC5271_PWM_SCALE_AUTO_MASK              0x01FF0000
#define TMC5271_PWM_SCALE_AUTO_SHIFT             16
#define TMC5271_PWM_OFS_AUTO_MASK                0x000000FF
#define TMC5271_PWM_OFS_AUTO_SHIFT               0
#define TMC5271_PWM_GRAD_AUTO_MASK               0x00FF0000
#define TMC5271_PWM_GRAD_AUTO_SHIFT              16
#define TMC5271_SG4_THRS_MASK                    0x000000FF
#define TMC5271_SG4_THRS_SHIFT                   0
#define TMC5271_SG4_FILT_EN_MASK                 0x00000100
#define TMC5271_SG4_FILT_EN_SHIFT                8
#define TMC5271_SG_ANGLE_OFFSET_MASK             0x00000200
#define TMC5271_SG_ANGLE_OFFSET_SHIFT            9
#define TMC5271_SG4_RESULT_SG_RESULT_MASK        0x000003FF
#define TMC5271_SG4_RESULT_SG_RESULT_SHIFT       0
#define TMC5271_IND_0_MASK                       0x000000FF
#define TMC5271_IND_0_SHIFT                      0
#define TMC5271_IND_1_MASK                       0x0000FF00
#define TMC5271_IND_1_SHIFT                      8
#define TMC5271_IND_2_MASK                       0x00FF0000
#define TMC5271_IND_2_SHIFT                      16
#define TMC5271_IND_3_MASK                       0xFF000000
#define TMC5271_IND_3_SHIFT                      24

#endif
