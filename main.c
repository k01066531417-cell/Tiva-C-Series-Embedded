#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"

/**
 * Tiva C Series - System Clock & GPIO Configuration
 * Target: TM4C123GXL
 */
int main(void) {
    uint32_t ui32SysClock;

    // 1. System Clock 설정 (120MHz 또는 80MHz)
    ui32SysClock = SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |
                                       SYSCTL_OSC_MAIN |
                                       SYSCTL_USE_PLL |
                                       SYSCTL_CFG_VCO_480), 120000000);

    // 2. GPIO Port A 활성화
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOA));

    // 3. GPIO Pin 설정 (예: PA2를 출력으로 설정)
    GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_2);

    while(1) {
        // LED 점멸 로직 또는 하드웨어 제어 로직 작성
        GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_2, GPIO_PIN_2);
        SysCtlDelay(ui32SysClock / 3);
        GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_2, 0);
        SysCtlDelay(ui32SysClock / 3);
    }
}
