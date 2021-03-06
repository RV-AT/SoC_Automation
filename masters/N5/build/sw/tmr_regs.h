#include "base_addr.h"
#include "macros.h"

#if APB_TIMER32_BASE_ADDR != INVALID_ADDR
    #define TIMER32_BASE_ADDR APB_TIMER32_BASE_ADDR
#else
    #define TIMER32_BASE_ADDR AHB_TIMER32_BASE_ADDR
#endif

#define     TMR_REG             0x00000000
#define     TMR_PRE_REG         0x00000004
#define     TMR_CMP_REG         0x00000008
#define     TMR_STATUS_REG      0x0000000c
#define     TMR_OVCLR_REG       0x00000010
#define     TMR_EN_REG          0x00000014

// // STATUS register fields
// #define     TMR_OV_BIT          0x0
// #define     TMR_OV_SIZE         0x1

// // CTRL register fields
// #define     TMR_OVCLR_BIT       0x0
// #define     TMR_OVCLR_SIZE      0x1
// #define     TMR_EN_BIT          0x0
// #define     TMR_EN_SIZE         0x1

unsigned int volatile * const TMR_EN = (unsigned int *) (TIMER32_BASE_ADDR + TMR_EN_REG);
unsigned int volatile * const TMR = (unsigned int *) (TIMER32_BASE_ADDR + TMR_REG);
unsigned int volatile * const TMR_STATUS = (unsigned int *) (TIMER32_BASE_ADDR + TMR_STATUS_REG);
unsigned int volatile * const TMR_PRE = (unsigned int *) (TIMER32_BASE_ADDR + TMR_PRE_REG);
unsigned int volatile * const TMR_CMP = (unsigned int *) (TIMER32_BASE_ADDR + TMR_CMP_REG);
unsigned int volatile * const TMR_OVCLR = (unsigned int *) (TIMER32_BASE_ADDR + TMR_OVCLR_REG);