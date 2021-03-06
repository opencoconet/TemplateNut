// BlinkLED.c
//
// Blinks LED
//
// Prashant Patil
// 07/31/15
//
// (c) Massachusetts Institute of Technology 2015
// This work may be reproduced, modified, distributed,
// performed, and displayed for any purpose. Copyright is
// retained and must be preserved. The work is provided
// as is; no warranty is provided, and users accept all 
// liability.
//

#include <avr/io.h>
#include <util/delay.h>

#define output(directions,pin) (directions |= pin) // set port direction for output
#define input(directions,pin) (directions &= (~pin)) // set port direction for input 
#define set(port,pin) (port |= pin) // set port pin
#define clear(port,pin) (port &= (~pin)) // clear port pin
#define pin_test(pins,pin) (pins & pin) // test for port pin
#define bit_test(byte,bit) (byte & (1 << bit)) // test for bit set

#define led (1 << PA6)
#define led_port PORTA
#define led_direction DDRA
 

int main(void) {    
   while (1) {

	output(led_direction, led);	
	set(led_port, led);
	_delay_ms(10);
	clear(led_port, led);
	_delay_ms(10);
       
      }
   }
