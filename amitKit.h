/* 
 * File:   amitKit.h
 * Author: Engs
 *
 * Created on 26 November 2021, 10:58
 */

#ifndef AMITKIT_H
    #define	AMITKIT_H

    #define PIN0 0
    #define PIN1 1
    #define PIN2 2
    #define PIN3 3
    #define PIN4 4
    #define PIN5 5
    #define PIN6 6
    #define PIN7 7

    #define HIGH 1
    #define LOW  0

    #define TURN_ON  HIGH
    #define TURN_OFF LOW

    #define LED0 0
    #define LED1 1
    #define LED2 2
    #define BUZZER 3
    
    #define BTN0 PIN0
    #define BTN1 PIN6
    #define BTN2 PIN2


    #define DELAY_IN_MLLSEC 500

    //setting bit_position in U8_REG to HIGH(1)
    #define SET_BIT(U8_REG , BIT_POSITION)    U8_REG |= HIGH << BIT_POSITION;

    //reset bit_position in U8_REG to LOW(0)
    #define RESET_BIT(U8_REG , BIT_POSITION)  U8_REG &= ~(HIGH << BIT_POSITION);

    //toggle bit_position in U8_REG
    #define TOGGLE_BIT(U8_REG , BIT_POSITION) U8_REG ^= HIGH << BIT_POSITION;

    //get/read bit_position in U8_REG
    #define GET_BIT(U8_REG , BIT_POSITION)    U8_REG &= HIGH << BIT_POSITION

    typedef unsigned char u8;

    void initPins(void);
    
    u8 isPressed(u8);  
    void setLED0OnOff(u8);
    void setLED1OnOff(u8);
    void setLED2OnOff(u8);
    
    void setBUZZEROnOff(u8);
      
    void setAllOnOff(u8 ,u8);

#endif	/* AMITKIT_H */
 