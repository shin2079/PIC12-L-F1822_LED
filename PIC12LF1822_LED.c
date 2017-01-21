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
#pragma config IESO = ONenabled)
#pragma config FCMEN = ON

// CONFIG2
#pragma config WRT = OFF
#pragma config PLLEN = ON
#pragma config STVREN = ON
#pragma config BORV = LO
#pragma config LVP = ON

// クロック周波数指定　(下記の__delay_ms()関数が必要としているため)
#define _XTAL_FREQ 16000000

#include <xc.h>

void main(void) {
//pic init
OSCCON = 0b01111010; //クロック設定 16MHz
ANSELA = 0x00; //すべてのピンをデジタルモードに設定
TRISA = 0b00001000; //I/O設定　0出力 1入力　RA3は入力専用なので1

while(1) {
    LATAbits.LATA4 = 0; //LED点灯 RA4をLow
    //PORTA = 0b00010000;
    __delay_ms(100);    //100ms待つ
    
    LATAbits.LATA4 = 1; //LED消灯 RA4をHi
   //PORTA = 0b00000000;
    __delay_ms(100);    //100ms待つ
}
return;
}
