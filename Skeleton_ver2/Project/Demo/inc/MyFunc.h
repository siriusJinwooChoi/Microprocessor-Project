#ifndef _MY_FUNC_
#define _MY_FUNC_

extern unsigned char gExti[];
extern unsigned int gExNum;
extern unsigned short gColor;
extern unsigned int toggle;
extern unsigned int clockCounter;
extern unsigned int xPos_, yPos_;

extern void MyGpioPollTest();
extern void MyLcdTest();
extern void SysTick_with_LCD();

void StartGame();
void Intro();
void MyFlashInit();
void MyWaveTest();
void JWWaveTest();
void dieWave();
void scoreview();
void dieblock();
void LevelOne();
void LevelTwo();
void Uartprint();
void map1();
void map2();
void map3();
void map4();
void map5();
void map6();
void map7();
void map8();
void map9();
void map10();

extern void MyTest();
#endif
