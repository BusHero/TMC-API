/*
 *  TMCMinion_Fields.h
 *  Author: LK
 *  Generated by MaskShiftConverter (unchecked)
 */

#ifndef TMCMINION_FIELDS_H
#define TMCMINION_FIELDS_H

#define TMCMINION_PWM_DIRECT_MASK 0x01 // GCONF // PWM_direct (Reset default=0)
#define TMCMINION_PWM_DIRECT_SHIFT 0 // PWM_direct (Reset default=0)
#define TMCMINION_EXTCAP_MASK 0x02 // GCONF // extcap (Reset default=0)
#define TMCMINION_EXTCAP_SHIFT 1 // extcap (Reset default=0)
#define TMCMINION_EN_SPREADCYCLE_MASK 0x04 // GCONF // par_mode (Reset default=0)
#define TMCMINION_EN_SPREADCYCLE_SHIFT 2 // par_mode (Reset default=0)
#define TMCMINION_SHAFT_MASK 0x08 // GCONF // Inverse motor direction
#define TMCMINION_SHAFT_SHIFT 3 // Inverse motor direction
#define TMCMINION_DIAG_INDEX_MASK 0x10 // GCONF // diag_index
#define TMCMINION_DIAG_INDEX_SHIFT 4 // diag_index
#define TMCMINION_DIAG_STEP_MASK 0x20 // GCONF // diag_step
#define TMCMINION_DIAG_STEP_SHIFT 5 // diag_step
#define TMCMINION_PDN_DISABLE_MASK 0x40 // GCONF // pdn_disable
#define TMCMINION_PDN_DISABLE_SHIFT 6 // pdn_disable
#define TMCMINION_MSTEP_REG_SELECT_MASK 0x80 // GCONF // mstep_reg_select
#define TMCMINION_MSTEP_REG_SELECT_SHIFT 7 // mstep_reg_select
#define TMCMINION_MULTISTEP_FILT_MASK 0x100 // GCONF // multistep_filt (Reset default=1)
#define TMCMINION_MULTISTEP_FILT_SHIFT 8 // multistep_filt (Reset default=1)
#define TMCMINION_TEST_MODE_MASK 0x200 // GCONF // test_mode 0
#define TMCMINION_TEST_MODE_SHIFT 9 // test_mode 0
#define TMCMINION_RESET_MASK 0x01 // GSTAT // reset
#define TMCMINION_RESET_SHIFT 0 // reset
#define TMCMINION_DRV_ERR_MASK 0x02 // GSTAT // drv_err
#define TMCMINION_DRV_ERR_SHIFT 1 // drv_err
#define TMCMINION_U3V5_MASK 0x04 // GSTAT // Actual state of the supply voltage comparator
#define TMCMINION_U3V5_SHIFT 2 // Actual state of the supply voltage comparator
#define TMCMINION_IFCNT_MASK 0xFF // IFCNT // Interface transmission counter
#define TMCMINION_IFCNT_SHIFT 0 // Interface transmission counter
#define TMCMINION_SLAVECONF_MASK 0xF00 // SLAVECONF // SENDDELAY for read access
#define TMCMINION_SLAVECONF_SHIFT 8 // SENDDELAY for read access
#define TMCMINION_EN_MASK 0x01 // IOIN // EN
#define TMCMINION_EN_SHIFT 0 // EN
#define TMCMINION_NSTDBY_MASK 0x02 // IOIN // NSTDBY
#define TMCMINION_NSTDBY_SHIFT 1 // NSTDBY
#define TMCMINION_MS1_MASK 0x04 // IOIN // MS1
#define TMCMINION_MS1_SHIFT 2 // MS1
#define TMCMINION_MS2_MASK 0x08 // IOIN // MS2
#define TMCMINION_MS2_SHIFT 3 // MS2
#define TMCMINION_DIAG_MASK 0x10 // IOIN // DIAG
#define TMCMINION_DIAG_SHIFT 4 // DIAG
#define TMCMINION_STEPPERCLK_INPUT_MASK 0x20 // IOIN // STEPPER/CLK Input
#define TMCMINION_STEPPERCLK_INPUT_SHIFT 5 // STEPPER/CLK Input
#define TMCMINION_PDN_UART_MASK 0x40 // IOIN // PDN_UART
#define TMCMINION_PDN_UART_SHIFT 6 // PDN_UART
#define TMCMINION_MODE_INPUT_MASK 0x80 // IOIN // MODE Input
#define TMCMINION_MODE_INPUT_SHIFT 7 // MODE Input
#define TMCMINION_STEP_MASK 0x100 // IOIN // STEP
#define TMCMINION_STEP_SHIFT 8 // STEP
#define TMCMINION_DIR_MASK 0x200 // IOIN // DIR
#define TMCMINION_DIR_SHIFT 9 // DIR
#define TMCMINION_COMP_A1A2_MASK 0x400 // IOIN // COMP_A1A2
#define TMCMINION_COMP_A1A2_SHIFT 10 // COMP_A1A2
#define TMCMINION_COMP_B1B2_MASK 0x800 // IOIN // COMP_B1B2
#define TMCMINION_COMP_B1B2_SHIFT 7 // COMP_B1B2
#define TMCMINION_VERSION_MASK 0xFF000000 // IOIN // VERSION: 0x40=first version of the IC Identical numbers mean full digital compatibility.
#define TMCMINION_VERSION_SHIFT 24 // VERSION: 0x40=first version of the IC Identical numbers mean full digital compatibility.
#define TMCMINION_IHOLD_MASK 0x1F // IHOLD_IRUN // Standstill current
#define TMCMINION_IHOLD_SHIFT 0 // Standstill current
#define TMCMINION_IRUN_MASK 0x1F00 // IHOLD_IRUN // Motor run current
#define TMCMINION_IRUN_SHIFT 8 // Motor run current
#define TMCMINION_IHOLDDELAY_MASK 0xF0000 // IHOLD_IRUN // Controls the number of clock cycles for motor power down after standstill is detected
#define TMCMINION_IHOLDDELAY_SHIFT 16 // Controls the number of clock cycles for motor power down after standstill is detected
#define TMCMINION_TPOWERDOWN_MASK 0xFF // TPOWERDOWN // Delay time from stand still (stst) detection to motor current power down
#define TMCMINION_TPOWERDOWN_SHIFT 0 // Delay time from stand still (stst) detection to motor current power down
#define TMCMINION_TSTEP_MASK 0xFFFFF // TSTEP // Actual measured time between two 1/256 microsteps
#define TMCMINION_TSTEP_SHIFT 0 // Actual measured time between two 1/256 microsteps
#define TMCMINION_TCOOLTHRS_MASK 0xFFFFFFFF // TCOOLTHRS // This is the lower threshold velocity for switching on smart energy coolStep and stallGuard feature.
#define TMCMINION_TCOOLTHRS_SHIFT 0 // This is the lower threshold velocity for switching on smart energy coolStep and stallGuard feature.
#define TMCMINION_VACTUAL_MASK 0xFFFFFF // VACTUAL // VACTUAL allows moving the motor by UART control
#define TMCMINION_VACTUAL_SHIFT 0 // VACTUAL allows moving the motor by UART control
#define TMCMINION_SGTHRS_MASK 0xFF // SGTHRS // Detection threshold for stall.
#define TMCMINION_SGTHRS_SHIFT 0 // Detection threshold for stall.
#define TMCMINION_SG_VALUE_MASK 0x3FF // SG_VALUE // SG_VALUE result.
#define TMCMINION_SG_VALUE_SHIFT 0 // SG_VALUE result.
#define TMCMINION_SEMIN_MASK 0x0F // COOLCONF // minimum stallGuard2 value - If the stallGuard2 result falls below SEMIN*32, the motor current becomes increased to reduce motor load angle. 0: smart current control coolStep off
#define TMCMINION_SEMIN_SHIFT 0 // minimum stallGuard2 value - If the stallGuard2 result falls below SEMIN*32, the motor current becomes increased to reduce motor load angle. 0: smart current control coolStep off
#define TMCMINION_SEUP_MASK 0x60 // COOLCONF // Current increment steps per measured stallGuard2 value
#define TMCMINION_SEUP_SHIFT 5 // Current increment steps per measured stallGuard2 value
#define TMCMINION_SEMAX_MASK 0xF00 // COOLCONF // stallGuard2 hysteresis value - If the stallGuard2 result is equal to or above (SEMIN+SEMAX+1)*32, the motor current becomes decreased to save energy.
#define TMCMINION_SEMAX_SHIFT 8 // stallGuard2 hysteresis value - If the stallGuard2 result is equal to or above (SEMIN+SEMAX+1)*32, the motor current becomes decreased to save energy.
#define TMCMINION_SEDN_MASK 0x6000 // COOLCONF // Current down step speed; For each n stallGuard2 values decrease by one
#define TMCMINION_SEDN_SHIFT 13 // Current down step speed; For each n stallGuard2 values decrease by one
#define TMCMINION_SEIMIN_MASK 0x8000 // COOLCONF // minimum current for smart current control
#define TMCMINION_SEIMIN_SHIFT 15 // minimum current for smart current control
#define TMCMINION_MSCNT_MASK 0x3FF // MSCNT // Microstep counter
#define TMCMINION_MSCNT_SHIFT 0 // Microstep counter
#define TMCMINION_CUR_A_MASK 0x1FF // MSCURACT // Actual  microstep current for motor phase A
#define TMCMINION_CUR_A_SHIFT 0 // Actual  microstep current for motor phase A
#define TMCMINION_CUR_B_MASK 0x1FF0000 // MSCURACT // Actual  microstep current for motor phase B
#define TMCMINION_CUR_B_SHIFT 16 // Actual  microstep current for motor phase B
#define TMCMINION_ENABLEDRV_MASK 0x01 // CHOPCONF // driver enable
#define TMCMINION_ENABLEDRV_SHIFT 0 // driver enable
#define TMCMINION_TBL_MASK 0x18000 // CHOPCONF // blank time select
#define TMCMINION_TBL_SHIFT 15 // blank time select
#define TMCMINION_MRES_MASK 0xF000000 // CHOPCONF // MRES micro step resolution
#define TMCMINION_MRES_SHIFT 24 // MRES micro step resolution
#define TMCMINION_INTPOL_MASK 0x10000000 // CHOPCONF // interpolation to 256 microsteps
#define TMCMINION_INTPOL_SHIFT 28 // interpolation to 256 microsteps
#define TMCMINION_DEDGE_MASK 0x20000000 // CHOPCONF // enable double edge step pulses
#define TMCMINION_DEDGE_SHIFT 29 // enable double edge step pulses
#define TMCMINION_DISS2G_MASK 0x40000000 // CHOPCONF // short to GND protection disable
#define TMCMINION_DISS2G_SHIFT 30 // short to GND protection disable
#define TMCMINION_DISS2VS_MASK 0x80000000 // CHOPCONF // Low side short protection disable
#define TMCMINION_DISS2VS_SHIFT 31 // Low side short protection disable
#define TMCMINION_OTPW_MASK 0x01 // DRV_STATUS // overtemperature prewarning flag
#define TMCMINION_OTPW_SHIFT 0 // overtemperature prewarning flag
#define TMCMINION_OT_MASK 0x02 // DRV_STATUS // overtemperature flag
#define TMCMINION_OT_SHIFT 1 // overtemperature flag
#define TMCMINION_S2GA_MASK 0x04 // DRV_STATUS // short to ground indicator phase A
#define TMCMINION_S2GA_SHIFT 2 // short to ground indicator phase A
#define TMCMINION_S2GB_MASK 0x08 // DRV_STATUS // short to ground indicator phase B
#define TMCMINION_S2GB_SHIFT 3 // short to ground indicator phase B
#define TMCMINION_S2VSA_MASK 0x10 // DRV_STATUS // low side short indicator phase A
#define TMCMINION_S2VSA_SHIFT 4 // low side short indicator phase A
#define TMCMINION_S2VSB_MASK 0x20 // DRV_STATUS // low side short indicator phase B
#define TMCMINION_S2VSB_SHIFT 5 // low side short indicator phase B
#define TMCMINION_OLA_MASK 0x40 // DRV_STATUS // open load indicator phase A
#define TMCMINION_OLA_SHIFT 6 // open load indicator phase A
#define TMCMINION_OLB_MASK 0x80 // DRV_STATUS // open load indicator phase B
#define TMCMINION_OLB_SHIFT 7 // open load indicator phase B
#define TMCMINION_T120_MASK 0x100 // DRV_STATUS // 120�C comparator
#define TMCMINION_T120_SHIFT 8 // 120�C comparator
#define TMCMINION_T143_MASK 0x200 // DRV_STATUS // 143�C comparator
#define TMCMINION_T143_SHIFT 9 // 143�C comparator
#define TMCMINION_T150_MASK 0x400 // DRV_STATUS // 150�C comparator
#define TMCMINION_T150_SHIFT 10 // 150�C comparator
#define TMCMINION_T157_MASK 0x800 // DRV_STATUS // 157�C comparator
#define TMCMINION_T157_SHIFT 11 // 157�C comparator
#define TMCMINION_CS_ACTUAL_MASK 0x1F0000 // DRV_STATUS // actual motor current
#define TMCMINION_CS_ACTUAL_SHIFT 16 // actual motor current
#define TMCMINION_STST_MASK 0x80000000 // DRV_STATUS // standstill indicator
#define TMCMINION_STST_SHIFT 31 // standstill indicator
#define TMCMINION_PWM_OFS_MASK 0xFF // PWMCONF // User defined PWM amplitude offset (0-255)
#define TMCMINION_PWM_OFS_SHIFT 0 // User defined PWM amplitude offset (0-255)
#define TMCMINION_PWM_GRAD_MASK 0xFF00 // PWMCONF // Velocity dependent gradient for PWM amplitude
#define TMCMINION_PWM_GRAD_SHIFT 8 // Velocity dependent gradient for PWM amplitude
#define TMCMINION_PWM_FREQ_MASK 0x30000 // PWMCONF // %00: fPWM=2/1024 fCLK; %01: fPWM=2/683 fCLK; %10: fPWM=2/512 fCLK; %11: fPWM=2/410 fCLK;
#define TMCMINION_PWM_FREQ_SHIFT 16 // %00: fPWM=2/1024 fCLK; %01: fPWM=2/683 fCLK; %10: fPWM=2/512 fCLK; %11: fPWM=2/410 fCLK;
#define TMCMINION_PWM_AUTOSCALE_MASK 0x40000 // PWMCONF //
#define TMCMINION_PWM_AUTOSCALE_SHIFT 18 //
#define TMCMINION_PWM_AUTOGRAD_MASK 0x80000 // PWMCONF //
#define TMCMINION_PWM_AUTOGRAD_SHIFT 19 //
#define TMCMINION_FREEWHEEL_MASK 0x300000 // PWMCONF // Stand still option when motor current setting is zero (I_HOLD=0)
#define TMCMINION_FREEWHEEL_SHIFT 20 // Stand still option when motor current setting is zero (I_HOLD=0)
#define TMCMINION_PWM_REG_MASK 0xF000000 // PWMCONF // User defined maximum PWM amplitude change per half wave when using pwm_autoscale=1
#define TMCMINION_PWM_REG_SHIFT 24 // User defined maximum PWM amplitude change per half wave when using pwm_autoscale=1
#define TMCMINION_PWM_LIM_MASK 0xF0000000 // PWMCONF // Limit  for  PWM_SCALE_AUTO  when  switching  back  from spreadCycle to stealthChop
#define TMCMINION_PWM_LIM_SHIFT 28 // Limit  for  PWM_SCALE_AUTO  when  switching  back  from spreadCycle to stealthChop
#define TMCMINION_PWM_SCALE_SUM_MASK 0xFF // PWM_SCALE // Actual  PWM  duty  cycle.  This value  is  used  for  scaling  the values  CUR_A  and  CUR_B  read from the sine wave table.
#define TMCMINION_PWM_SCALE_SUM_SHIFT 0 // Actual  PWM  duty  cycle.  This value  is  used  for  scaling  the values  CUR_A  and  CUR_B  read from the sine wave table.
#define TMCMINION_PWM_SCALE_AUTO_MASK 0x1FF0000 // PWM_SCALE // 9 Bit signed offset added to the calculated  PWM  duty  cycle.  This is  the  result  of  the  automatic amplitude  regulation  based  on current measurement.
#define TMCMINION_PWM_SCALE_AUTO_SHIFT 16 // 9 Bit signed offset added to the calculated  PWM  duty  cycle.  This is  the  result  of  the  automatic amplitude  regulation  based  on current measurement.
#define TMCMINION_PWM_OFS_AUTO_MASK 0xFF // PWM_AUTO // Automatically  determined  offset value
#define TMCMINION_PWM_OFS_AUTO_SHIFT 0 // Automatically  determined  offset value
#define TMCMINION_PWM_GRAD_AUTO_MASK 0xFF0000 // PWM_AUTO // Automatically  determined gradient value
#define TMCMINION_PWM_GRAD_AUTO_SHIFT 16 // Automatically  determined gradient value

#endif /* TMCMINION_FIELDS_H */
