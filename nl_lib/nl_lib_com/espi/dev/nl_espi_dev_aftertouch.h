#ifndef NL_ESPI_DEV_AFTERTOUCH_H_
#define NL_ESPI_DEV_AFTERTOUCH_H_

#include "stdint.h"

void 	 ESPI_DEV_Aftertouch_Init(void);
void 	 ESPI_DEV_Aftertouch_EspiPull(void);
uint32_t ESPI_DEV_Aftertouch_EspiPullRet(void);
uint16_t ESPI_DEV_Aftertouch_GetValue(void);

#endif
