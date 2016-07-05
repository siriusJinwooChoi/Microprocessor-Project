#include "MyFunc.h"
#include "BMP.h"
#include "stm3210b_lcd.h"
#include "main.h"

extern int c;
extern int d;
extern int score;

int a = 0;
int b = 340;
void map1() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(sideblk, a, b-100, 40, 40);
    LCD_DrawArray(noblk, a, b-140, 40, 40);
    LCD_DrawArray(noblk, a, b-180, 40, 40);
    LCD_DrawArray(noblk, a, b-220, 40, 40);
    LCD_DrawArray(sideblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(noblk, a+40, b-100, 40, 40);
    LCD_DrawArray(noblk, a+40, b-140, 40, 40);
    LCD_DrawArray(noblk, a+40, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(noblk, a+80, b-60, 40, 40);
    LCD_DrawArray(noblk, a+80, b-100, 40, 40);
    LCD_DrawArray(noblk, a+80, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(noblk, a+120, b-100, 40, 40);
    LCD_DrawArray(noblk, a+120, b-140, 40, 40);
    LCD_DrawArray(noblk, a+120, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-100, 40, 40);
    LCD_DrawArray(noblk, a+160, b-140, 40, 40);
    LCD_DrawArray(noblk, a+160, b-180, 40, 40);
    LCD_DrawArray(noblk, a+160, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(noblk, a+200, b-100, 40, 40);
    LCD_DrawArray(noblk, a+200, b-140, 40, 40);
    LCD_DrawArray(noblk, a+200, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();  
    LCD_DrawArray(minor, c, d, 15, 15);
    if(d >= 260 || d <= 120) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
    //Uart_SendString(string);
}// It is map(1)


void map2() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(sideblk, a, b-100, 40, 40);
    LCD_DrawArray(sideblk, a, b-140, 40, 40);
    LCD_DrawArray(noblk, a, b-180, 40, 40);
    LCD_DrawArray(noblk, a, b-220, 40, 40);
    LCD_DrawArray(noblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-100, 40, 40);
    LCD_DrawArray(noblk, a+40, b-140, 40, 40);
    LCD_DrawArray(noblk, a+40, b-180, 40, 40);
    LCD_DrawArray(noblk, a+40, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(noblk, a+80, b-100, 40, 40);
    LCD_DrawArray(noblk, a+80, b-140, 40, 40);
    LCD_DrawArray(noblk, a+80, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(noblk, a+120, b-60, 40, 40);
    LCD_DrawArray(noblk, a+120, b-100, 40, 40);
    LCD_DrawArray(noblk, a+120, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(noblk, a+160, b-100, 40, 40);
    LCD_DrawArray(noblk, a+160, b-140, 40, 40);
    LCD_DrawArray(noblk, a+160, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-100, 40, 40);
    LCD_DrawArray(noblk, a+200, b-140, 40, 40);
    LCD_DrawArray(noblk, a+200, b-180, 40, 40);
    LCD_DrawArray(noblk, a+200, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 200 || d <= 80) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(2)

void map3() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(sideblk, a, b-100, 40, 40);
    LCD_DrawArray(sideblk, a, b-140, 40, 40);
    LCD_DrawArray(sideblk, a, b-180, 40, 40);
    LCD_DrawArray(noblk, a, b-220, 40, 40);
    LCD_DrawArray(noblk, a, b-260, 40, 40);
    LCD_DrawArray(noblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-140, 40, 40);
    LCD_DrawArray(noblk, a+40, b-180, 40, 40);
    LCD_DrawArray(noblk, a+40, b-220, 40, 40);
    LCD_DrawArray(noblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-100, 40, 40);
    LCD_DrawArray(noblk, a+80, b-140, 40, 40);
    LCD_DrawArray(noblk, a+80, b-180, 40, 40);
    LCD_DrawArray(noblk, a+80, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(noblk, a+120, b-100, 40, 40);
    LCD_DrawArray(noblk, a+120, b-140, 40, 40);
    LCD_DrawArray(noblk, a+120, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(noblk, a+160, b-60, 40, 40);
    LCD_DrawArray(noblk, a+160, b-100, 40, 40);
    LCD_DrawArray(noblk, a+160, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(noblk, a+200, b-100, 40, 40);
    LCD_DrawArray(noblk, a+200, b-140, 40, 40);
    LCD_DrawArray(noblk, a+200, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 240 || d <= 120) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(3)

void map4() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(sideblk, a, b-100, 40, 40);
    LCD_DrawArray(sideblk, a, b-140, 40, 40);
    LCD_DrawArray(noblk, a, b-180, 40, 40);
    LCD_DrawArray(noblk, a, b-220, 40, 40);
    LCD_DrawArray(noblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-180, 40, 40);
    LCD_DrawArray(noblk, a+40, b-220, 40, 40);
    LCD_DrawArray(noblk, a+40, b-260, 40, 40);
    LCD_DrawArray(noblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-140, 40, 40);
    LCD_DrawArray(noblk, a+80, b-180, 40, 40);
    LCD_DrawArray(noblk, a+80, b-220, 40, 40);
    LCD_DrawArray(noblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-100, 40, 40);
    LCD_DrawArray(noblk, a+120, b-140, 40, 40);
    LCD_DrawArray(noblk, a+120, b-180, 40, 40);
    LCD_DrawArray(noblk, a+120, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(noblk, a+160, b-100, 40, 40);
    LCD_DrawArray(noblk, a+160, b-140, 40, 40);
    LCD_DrawArray(noblk, a+160, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(noblk, a+200, b-60, 40, 40);
    LCD_DrawArray(noblk, a+200, b-100, 40, 40);
    LCD_DrawArray(noblk, a+200, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 280 || d <= 160) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(4)

void map5() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(sideblk, a, b-100, 40, 40);
    LCD_DrawArray(noblk, a, b-140, 40, 40);
    LCD_DrawArray(noblk, a, b-180, 40, 40);
    LCD_DrawArray(noblk, a, b-220, 40, 40);
    LCD_DrawArray(sideblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-140, 40, 40);
    LCD_DrawArray(noblk, a+40, b-180, 40, 40);
    LCD_DrawArray(noblk, a+40, b-220, 40, 40);
    LCD_DrawArray(noblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-180, 40, 40);
    LCD_DrawArray(noblk, a+80, b-220, 40, 40);
    LCD_DrawArray(noblk, a+80, b-260, 40, 40);
    LCD_DrawArray(noblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-140, 40, 40);
    LCD_DrawArray(noblk, a+120, b-180, 40, 40);
    LCD_DrawArray(noblk, a+120, b-220, 40, 40);
    LCD_DrawArray(noblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-100, 40, 40);
    LCD_DrawArray(noblk, a+160, b-140, 40, 40);
    LCD_DrawArray(noblk, a+160, b-180, 40, 40);
    LCD_DrawArray(noblk, a+160, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(noblk, a+200, b-100, 40, 40);
    LCD_DrawArray(noblk, a+200, b-140, 40, 40);
    LCD_DrawArray(noblk, a+200, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 240 || d <= 120) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(5)

void map6() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(noblk, a, b-100, 40, 40);
    LCD_DrawArray(noblk, a, b-140, 40, 40);
    LCD_DrawArray(noblk, a, b-180, 40, 40);
    LCD_DrawArray(sideblk, a, b-220, 40, 40);
    LCD_DrawArray(sideblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-100, 40, 40);
    LCD_DrawArray(noblk, a+40, b-140, 40, 40);
    LCD_DrawArray(noblk, a+40, b-180, 40, 40);
    LCD_DrawArray(noblk, a+40, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-140, 40, 40);
    LCD_DrawArray(noblk, a+80, b-180, 40, 40);
    LCD_DrawArray(noblk, a+80, b-220, 40, 40);
    LCD_DrawArray(noblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-180, 40, 40);
    LCD_DrawArray(noblk, a+120, b-220, 40, 40);
    LCD_DrawArray(noblk, a+120, b-260, 40, 40);
    LCD_DrawArray(noblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-140, 40, 40);
    LCD_DrawArray(noblk, a+160, b-180, 40, 40);
    LCD_DrawArray(noblk, a+160, b-220, 40, 40);
    LCD_DrawArray(noblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-100, 40, 40);
    LCD_DrawArray(noblk, a+200, b-140, 40, 40);
    LCD_DrawArray(noblk, a+200, b-180, 40, 40);
    LCD_DrawArray(noblk, a+200, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 200 || d <= 80) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(6)


void map7() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(sideblk, a, b-100, 40, 40);
    LCD_DrawArray(noblk, a, b-140, 40, 40);
    LCD_DrawArray(noblk, a, b-180, 40, 40);
    LCD_DrawArray(noblk, a, b-220, 40, 40);
    LCD_DrawArray(sideblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(noblk, a+40, b-100, 40, 40);
    LCD_DrawArray(noblk, a+40, b-140, 40, 40);
    LCD_DrawArray(noblk, a+40, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-100, 40, 40);
    LCD_DrawArray(noblk, a+80, b-140, 40, 40);
    LCD_DrawArray(noblk, a+80, b-180, 40, 40);
    LCD_DrawArray(noblk, a+80, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-140, 40, 40);
    LCD_DrawArray(noblk, a+120, b-180, 40, 40);
    LCD_DrawArray(noblk, a+120, b-220, 40, 40);
    LCD_DrawArray(noblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-180, 40, 40);
    LCD_DrawArray(noblk, a+160, b-220, 40, 40);
    LCD_DrawArray(noblk, a+160, b-260, 40, 40);
    LCD_DrawArray(noblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-140, 40, 40);
    LCD_DrawArray(noblk, a+200, b-180, 40, 40);
    LCD_DrawArray(noblk, a+200, b-220, 40, 40);
    LCD_DrawArray(noblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 160 || d <= 40) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(7)

void map8() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(noblk, a, b-100, 40, 40);
    LCD_DrawArray(noblk, a, b-140, 40, 40);
    LCD_DrawArray(noblk, a, b-180, 40, 40);
    LCD_DrawArray(sideblk, a, b-220, 40, 40);
    LCD_DrawArray(sideblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-100, 40, 40);
    LCD_DrawArray(noblk, a+40, b-140, 40, 40);
    LCD_DrawArray(noblk, a+40, b-180, 40, 40);
    LCD_DrawArray(noblk, a+40, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(noblk, a+80, b-100, 40, 40);
    LCD_DrawArray(noblk, a+80, b-140, 40, 40);
    LCD_DrawArray(noblk, a+80, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-100, 40, 40);
    LCD_DrawArray(noblk, a+120, b-140, 40, 40);
    LCD_DrawArray(noblk, a+120, b-180, 40, 40);
    LCD_DrawArray(noblk, a+120, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-140, 40, 40);
    LCD_DrawArray(noblk, a+160, b-180, 40, 40);
    LCD_DrawArray(noblk, a+160, b-220, 40, 40);
    LCD_DrawArray(noblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-180, 40, 40);
    LCD_DrawArray(noblk, a+200, b-220, 40, 40);
    LCD_DrawArray(noblk, a+200, b-260, 40, 40);
    LCD_DrawArray(noblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 120 || d < 0) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(8)

void map9() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(noblk, a, b-60, 40, 40);
    LCD_DrawArray(noblk, a, b-100, 40, 40);
    LCD_DrawArray(noblk, a, b-140, 40, 40);
    LCD_DrawArray(sideblk, a, b-180, 40, 40);
    LCD_DrawArray(sideblk, a, b-220, 40, 40);
    LCD_DrawArray(sideblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-60, 40, 40);
    LCD_DrawArray(noblk, a+40, b-100, 40, 40);
    LCD_DrawArray(noblk, a+40, b-140, 40, 40);
    LCD_DrawArray(noblk, a+40, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-100, 40, 40);
    LCD_DrawArray(noblk, a+80, b-140, 40, 40);
    LCD_DrawArray(noblk, a+80, b-180, 40, 40);
    LCD_DrawArray(noblk, a+80, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(noblk, a+120, b-100, 40, 40);
    LCD_DrawArray(noblk, a+120, b-140, 40, 40);
    LCD_DrawArray(noblk, a+120, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-100, 40, 40);
    LCD_DrawArray(noblk, a+160, b-140, 40, 40);
    LCD_DrawArray(noblk, a+160, b-180, 40, 40);
    LCD_DrawArray(noblk, a+160, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-100, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-140, 40, 40);
    LCD_DrawArray(noblk, a+200, b-180, 40, 40);
    LCD_DrawArray(noblk, a+200, b-220, 40, 40);
    LCD_DrawArray(noblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 160 || d <= 40) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(9)

void map10() {
    LCD_DrawArray(sideblk, a, b-20, 40, 40);
    LCD_DrawArray(sideblk, a, b-60, 40, 40);
    LCD_DrawArray(noblk, a, b-100, 40, 40);
    LCD_DrawArray(noblk, a, b-140, 40, 40);
    LCD_DrawArray(noblk, a, b-180, 40, 40);
    LCD_DrawArray(sideblk, a, b-220, 40, 40);
    LCD_DrawArray(sideblk, a, b-260, 40, 40);
    LCD_DrawArray(sideblk, a, b-300, 40, 40);
    //first line
    
    LCD_DrawArray(sideblk, a+40, b-20, 40, 40);
    LCD_DrawArray(noblk, a+40, b-60, 40, 40);
    LCD_DrawArray(noblk, a+40, b-100, 40, 40);
    LCD_DrawArray(noblk, a+40, b-140, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+40, b-300, 40, 40);
    //second line
    
    LCD_DrawArray(sideblk, a+80, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-60, 40, 40);
    LCD_DrawArray(noblk, a+80, b-100, 40, 40);
    LCD_DrawArray(noblk, a+80, b-140, 40, 40);
    LCD_DrawArray(noblk, a+80, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+80, b-300, 40, 40);
    //third line
    
    LCD_DrawArray(sideblk, a+120, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-100, 40, 40);
    LCD_DrawArray(noblk, a+120, b-140, 40, 40);
    LCD_DrawArray(noblk, a+120, b-180, 40, 40);
    LCD_DrawArray(noblk, a+120, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+120, b-300, 40, 40);
    //fourth line
    
    LCD_DrawArray(sideblk, a+160, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-60, 40, 40);
    LCD_DrawArray(noblk, a+160, b-100, 40, 40);
    LCD_DrawArray(noblk, a+160, b-140, 40, 40);
    LCD_DrawArray(noblk, a+160, b-180, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+160, b-300, 40, 40);
    //fifth line
    
    LCD_DrawArray(sideblk, a+200, b-20, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-60, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-100, 40, 40);
    LCD_DrawArray(noblk, a+200, b-140, 40, 40);
    LCD_DrawArray(noblk, a+200, b-180, 40, 40);
    LCD_DrawArray(noblk, a+200, b-220, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-260, 40, 40);
    LCD_DrawArray(sideblk, a+200, b-300, 40, 40);
    //sixth line
    
    MyLcdTest();
    
    LCD_DrawArray(minor, c, d, 15, 15);
    
    if(d >= 200 || d <= 80) {
        dieWave();
        dieblock();
    }
    score += 100;
    Delay(30);
    Uartprint();
}//It is map(10)