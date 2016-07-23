#ifndef __HAL_LED__H_
#define __HAL_LED__H_

//use helper macros to do expansion to *DIR etc
//LEDS
#define LED_GREEN_DIR PORT2DIR(LED_GREEN_PORT)
#define LED_RED_DIR   PORT2DIR(LED_RED_PORT)
#define LED_RED_BIT PORT2BIT(LED_RED_PORT, LED_RED_PIN)
#define LED_GREEN_BIT PORT2BIT(LED_GREEN_PORT, LED_GREEN_PIN)

#define hal_led_green_init() { LED_GREEN_DIR |= (1<<LED_GREEN_PIN); LED_GREEN_OFF(); }
#define hal_led_green_on()  { LED_GREEN_BIT = 1; } 
#define hal_led_green_off() { LED_GREEN_BIT = 0; } 

#define hal_led_red_init()  { LED_RED_DIR |= (1<<LED_RED_PIN); LED_RED_OFF(); }
#define hal_led_red_on()    { LED_RED_BIT = 1; } 
#define hal_led_red_off()   { LED_RED_BIT = 0; } 

#endif // __HAL_LED__H_
