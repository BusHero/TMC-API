/*
 * TMC2590.h
 *
 *  Created on: 09.01.2019
 *      Author: LK
 */

#ifndef TMC_IC_TMC2590_H_
#define TMC_IC_TMC2590_H_

#include "../../helpers/API_Header.h"
#include "TMC2590_Constants.h"
#include "TMC2590_Fields.h"
#include "TMC2590_Macros.h"
#include "TMC2590_Register.h"

#define TMC2590_FIELD_READ(tdef, address, mask, shift) \
	FIELD_GET(tmc2590_readInt(tdef, address), mask, shift)
#define TMC2590_FIELD_UPDATE(tdef, address, mask, shift, value) \
	(tmc2590_writeInt(tdef, address, FIELD_SET(tmc2590_readInt(tdef, address), mask, shift, value)))

// Usage note: use 1 TypeDef per IC
typedef struct {
	ConfigurationTypeDef *config;
	uint8 standStillCurrentScale;
	uint32 standStillTimeout;
	uint8 isStandStillOverCurrent;
	uint8 isStandStillCurrentLimit;
	uint8 continuousModeEnable;
	uint8 runCurrentScale;
	uint8 coolStepInactiveValue;
	uint8 coolStepActiveValue;
	uint32 coolStepThreshold;
	int velocity;
	int oldX;
	uint32 oldTick;
	u8 registerAccess[TMC2590_REGISTER_COUNT];
	int32 registerResetState[TMC2590_REGISTER_COUNT];
} TMC2590TypeDef;

static const uint8 tmc2590_defaultRegisterAccess[TMC2590_REGISTER_COUNT] =
{
	0x02,  // 0: DRVCTRL
	0x00,  // 1: UNUSED
	0x00,  // 2: UNUSED
	0x00,  // 3: UNUSED
	0x02,  // 4: CHOPCONF
	0x02,  // 5: SMARTEN
	0x02,  // 6: SGCSCONF
	0x02   // 7: DRVCONF
};

static const int32 tmc2590_defaultRegisterResetState[TMC2590_REGISTER_COUNT] =
{
	0x10000000,  // 0: DRVCTRL
	0x00000000,  // 1: UNUSED
	0x00000000,  // 2: UNUSED
	0x00000000,  // 3: UNUSED
	0x00091935,  // 4: CHOPCONF
	0x000A0000,  // 5: SMARTEN
	0x000D0505,  // 6: SGCSCONF
	0x000EF040   // 7: DRVCONF
};

void tmc2590_init(TMC2590TypeDef *tmc2590, uint8 channel, ConfigurationTypeDef *tmc2590_config, const int32 *registerResetState);
void tmc2590_periodicJob(TMC2590TypeDef *tmc2590, uint32 tick);
void tmc2590_writeInt(TMC2590TypeDef *tmc2590, uint8 address, int32 value);
uint32 tmc2590_readInt(TMC2590TypeDef *tmc2590, uint8 address);
uint8 tmc2590_reset(TMC2590TypeDef *tmc2590);
uint8 tmc2590_restore(TMC2590TypeDef *tmc2590);

#endif /* TMC_IC_TMC2590_H_ */
