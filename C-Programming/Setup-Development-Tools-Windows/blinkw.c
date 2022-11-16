/* 
 * Onboard LED blink example in C/C++  
 * for Raspberry Pi Pico W board only 
 * Nov 2022 
 * 
 */
#include <stdio.h> 
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main() { 
	
	// set the led pin  
	const uint led  = CYW43_WL_GPIO_LED_PIN ;
	
    // Initialize serial port
    stdio_init_all();
 
    if (cyw43_arch_init()) {
        printf("WiFi init failed");
        return -1;
    }
	
    while (true) {
         
        cyw43_arch_gpio_put(led , 1);
        sleep_ms(500);
         
        cyw43_arch_gpio_put(led , 0);
        sleep_ms(500);
    }
}
