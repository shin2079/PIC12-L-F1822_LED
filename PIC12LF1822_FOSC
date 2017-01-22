// PIC12F1822 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTOSC
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config MCLRE = ON
#pragma config CP = OFF
#pragma config CPD = OFF
#pragma config BOREN = ON
#pragma config CLKOUTEN = OFF
#pragma config IESO = ON
#pragma config FCMEN = ON

// CONFIG2
#pragma config WRT = OFF
#pragma config PLLEN = ON
#pragma config STVREN = ON
#pragma config BORV = LO
#pragma config LVP = ON

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

void main(void) {
    //pic init
    OSCCON = 0b11110000;    //クロック設定 32MHz
    //OSCCON = 0b01111010;    //クロック設定 16MHz
    //OSCCON = 0b01110010;    //クロック設定 8MHz
    //OSCCON = 0b01101010;    //クロック設定 4MHz
    //OSCCON = 0b01011010;    //クロック設定 1MHz
    //OSCCON = 0b00010010;    //クロック設定 31.25kHz
    
    ANSELA = 0x00;          //すべてのピンをデジタルモードに設定
    TRISA = 0b00001000;     //I/O設定　0出力 1入力　RA3は入力専用なので1
    
    while(1) {
        LATAbits.LATA4 = 0; //LED点灯 RA4をLow
        LATAbits.LATA4 = 1; //LED消灯 RA4をHi
    }
    return;
}
