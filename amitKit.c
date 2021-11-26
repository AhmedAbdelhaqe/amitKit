#include<avr/io.h>
#include"amitKit.h"

void initPins(void){
 
    //port A pin 3 set to o/p Buzzer
    SET_BIT(DDRA , PIN3)
    
    //port C pin 7 set to o/p LED1
    SET_BIT(DDRC , PIN7)
    //port C pin 2 set to o/p LED0
    SET_BIT(DDRC , PIN2)
    
    //port D pin 3 set to o/p LED2
    SET_BIT(DDRD , PIN3)
    
    //port D pin 2 set to I/p BTN2
    RESET_BIT(DDRD , BTN2)
    
    //port D pin 6 set to I/p BTN1
    RESET_BIT(DDRD , BTN1)

    //port D pin 0 set to I/p BTN0
    RESET_BIT(DDRB , BTN0)
 
}

void setLED0OnOff(u8 turn_on_off){
    if(turn_on_off/*passing HIGH(1)*/){
       //turn LED0 ON
       SET_BIT(PORTC , PIN2) 
    }else{
       //turn LED0 OFF
       RESET_BIT(PORTC , PIN2) 
    }
}

void setLED1OnOff(u8 turn_on_off){
    if(turn_on_off/*passing HIGH(1)*/){
       //turn LED1 ON
       SET_BIT(PORTC , PIN7) 
    }else{
       //turn LED1 OFF
       RESET_BIT(PORTC , PIN7) 
    }
}

void setLED2OnOff(u8 turn_on_off){
    if(turn_on_off/*passing HIGH(1)*/){
       //turn LED2 ON
       SET_BIT(PORTD , PIN3)
    }else{
       //turn LED2 OFF
       RESET_BIT(PORTD , PIN3)
    }
}

void setBUZZEROnOff(u8 turn_on_off){
    if(turn_on_off/*passing HIGH(1)*/){
       //turn BUZZER ON
       SET_BIT(PORTA , PIN3) 
    }else{
       //turn BUZZER OFF
       RESET_BIT(PORTA , PIN3) 
    }
}

u8 isPressed(u8 btn_number_status){
    
    switch(btn_number_status){
        
        case BTN0:
            btn_number_status = GET_BIT(PINB,BTN0);
            break;
        
        case BTN1:
            btn_number_status = GET_BIT(PIND,BTN1);
            break;
            
        case BTN2:
            btn_number_status = GET_BIT(PIND,BTN2);
            break;
        
        default:
            btn_number_status = 0;
    }
    
    return btn_number_status ? 1 : 0;
    
}

void setAllOnOff(u8 interface , u8 turn_on_off){
    switch(interface){
        case LED0:
            if(turn_on_off/*passing HIGH(1)*/){
                  //turn LED0 ON
                    SET_BIT(PORTC , PIN2) 
            }else{
                 //turn LED0 OFF
                    RESET_BIT(PORTC , PIN2) 
            }
            break;

        case LED1:
            if(turn_on_off/*passing HIGH(1)*/){
                  //turn LED1 ON
                    SET_BIT(PORTC , PIN7) 
            }else{
                 //turn LED1 OFF
                    RESET_BIT(PORTC , PIN7) 
            }
            break;

        case LED2:
            if(turn_on_off/*passing HIGH(1)*/){
                  //turn LED2 ON
                    SET_BIT(PORTD , PIN3) 
            }else{
                 //turn LED2 OFF
                    RESET_BIT(PORTD , PIN3) 
            }
            break;
            
        case BUZZER:
            if(turn_on_off/*passing HIGH(1)*/){
                  //turn BUZZER ON
                    SET_BIT(PORTA , PIN3) 
            }else{
                 //turn BUZZER OFF
                    RESET_BIT(PORTA , PIN3) 
            }
            break;
        
//        default:
//            //should replay a message wrong state
            
    }
}