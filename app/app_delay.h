#ifndef __APP_DELAY_H
#define __APP_DELAY_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stdio.h"
#include "at32f403a_407.h"


/* delay function */
void delay_init(void);
void delay_us(uint32_t nus);
void delay_ms(uint16_t nms);
void delay_sec(uint16_t sec);


#ifdef __cplusplus
}
#endif

#endif

