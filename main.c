/*
 * File:   main.c
 * Author: Engs
 *
 * Created on 20 November 2021, 16:32
 */


#include <avr/io.h>
#define F_CPU 16000000UL /*define F_CPU with freq of cpu for the usage of <util/delay.h>*/
#include<util/delay.h>
#include"amitKit.h"

int main(void) {
    
    initPins();        
            
//    while (!0/*loop for ever or tile a condition is met in the loop body */) {
//        //turn LED0 ON
//        setLED0OnOff(TURN_ON);
//        
//        //turn BUZZER ON
//        setBUZZEROnOff(TURN_ON);
//        
//        //keep LED0 & BUZZER On For DELAY_IN_MLLSEC
//        _delay_ms(DELAY_IN_MLLSEC);
//        
//        //turn LED0 OFF
//        setLED0OnOff(TURN_OFF);
//
//        //turn BUZZER OFF
//        setBUZZEROnOff(TURN_OFF);
//
//        //turn LED1 ON
//        setLED1OnOff(TURN_ON);
//        
//        //keep LED1 On For DELAY_IN_MLLSEC
//        _delay_ms(DELAY_IN_MLLSEC);
//        
//        //turn LED0 OFF
//        setLED1OnOff(TURN_OFF);
//        
//        //turn LED2 ON
//        setLED2OnOff(TURN_ON);
//
//        //turn BUZZER ON
//        setBUZZEROnOff(TURN_ON);
//        
//        //keep LED2 & BUZZER On For DELAY_IN_MLLSEC
//        _delay_ms(DELAY_IN_MLLSEC);
//        
//        //turn LED0 OFF
//        setLED2OnOff(TURN_OFF);
//        
//        //turn BUZZER OFF
//        setBUZZEROnOff(TURN_OFF);
//        
//    }
    
    while(!0){
        setLED0OnOff( isPressed(BTN0) ? TURN_ON : TURN_OFF );
        setLED1OnOff( isPressed(BTN1) ? TURN_ON : TURN_OFF );
        setLED2OnOff( isPressed(BTN2) ? TURN_ON : TURN_OFF );
    }
}