#include "main.h"
#include "MyFunc.h"
#include "myuart.h"
#include "stm3210b_lcd.h"
//#include "myregmap.h"
//#include "spi_flash.h"
#include "BMP.h"
#include "waveplayer.h"

int c = 220;
int d = 175;
int score = 0;
char meg[100];
char Score_display[30];
char *string = Score_display;

void MyTest(){
  SetupUART();
  //MyFlashInit();
  StartGame();
}

void StartGame() {
    STM3210B_LCD_Init();
    LCD_Clear(White);
    SPI_FLASH_Init();
 
    Intro();
    JWWaveTest();
    LCD_DrawArray(minor, c, d, 15, 15);
    LevelOne();
    LCD_DisplayStringLine( 120, "    It's Level up!    " );
    Delay(100);
    Uart_Printf("------------It is Level Two!!-------------\n");
    LevelTwo();
    LCD_DisplayStringLine( 120, "      Game Clear!      " );
    Delay(100);
    sprintf(Score_display, "%d\n", score);
    Uart_Printf("Total Score : ");
    Uart_Printf(string);
    scoreview();
}//Game start.

void Intro()
{
  LCD_DrawArray(menu, 50, 230, 126, 109);
  while(ReadKey() != SEL ){ }
  
  LCD_Clear(Brown);
  LCD_SetTextColor(White);
  LCD_SetBackColor(MaBlue);
  LCD_DisplayStringLine( 60, "  It's Booting.....  " );
  LCD_DisplayStringLine( 80, "                     " );
  LCD_DisplayStringLine( 100, "   Waiting Time....." );
  Delay(100);
} //처음 들어가는 화면


/// block is die ///
void dieblock() {
  LCD_SetTextColor(White);
  LCD_SetBackColor(Black);
  LCD_DisplayStringLine( 80, "Game over.             " );
  LCD_DisplayStringLine( 100, "                      " );
  LCD_DisplayStringLine( 120, "Waiting Time.........    " );
  Uart_Printf("------------Your Die!-------------\n");
  sprintf(Score_display, "%d\n", score);
  Uart_Printf("Total Score : ");
  Uart_Printf(string);
  Delay(150);
  scoreview();
}

/// Uart printing ///
void Uartprint(){
    sprintf(Score_display, "%d\n", score);
    Uart_Printf("Present Score : ");
    Uart_Printf(string);
}

/// Score ///

void scoreview()
{
  LCD_Clear(Brown); 
  LCD_SetTextColor(White); 
  LCD_SetBackColor(DeepGrey);
  
  sprintf((char*)meg, " TotalSocre : %d   ", score);
  LCD_DisplayStringLine( 40, meg ); 
  LCD_DisplayStringLine( 60, "                       " );
  if(score < 1000)
  {
    LCD_DisplayStringLine( 80, " Score : F           "); 
    LCD_DisplayStringLine( 120," Grade : Beast      "); 
  }
  else if(score < 2000)
  {
    LCD_DisplayStringLine( 80, " Score : C           ");
    LCD_DisplayStringLine( 120," Grade : Slave      "); 
  }
  else if(score < 3000)
  {
    LCD_DisplayStringLine( 80, " Score : B           ");
    LCD_DisplayStringLine( 120," Grade : General Human "); 
  }
  else if(score < 5000)
  {
    LCD_DisplayStringLine( 80, " Score : A           ");
    LCD_DisplayStringLine( 120," Grade : Super Hero   "); 
  }
  else 
  {
    LCD_DisplayStringLine( 80, " Score : S           ");
    LCD_DisplayStringLine( 120," Grade : God man.... "); 
  }
  LCD_DisplayStringLine( 100, "                      ");
  LCD_DisplayStringLine( 140, "                      ");
  LCD_DisplayStringLine( 160, "                      ");
  LCD_DisplayStringLine( 180, "Try again->Press SEL"); 
  
  score = 0;
  c = 220;
  d = 175;
  while(ReadKey() != SEL ){ }
  StartGame();
}

/// Music ///

void MyWaveTest() {       //music file play(sound)- moving sound!
  SPI_FLASH_Init();
  WavePlayer_Init();
  
  IntExtOnOffConfig(ENABLE);
  if(Get_WaveFileStatus() == Valid_WAVE_File)
  {
    WavePlayer_Start();
  }  
  WavePlayer_RePlay();
  //IntExtOnOffConfig(DISABLE);
}

void dieWave() {
  SPI_FLASH_Init();
  WavePlayer_Init2();
  
  IntExtOnOffConfig(ENABLE);
  if(Get_WaveFileStatus2() == Valid_WAVE_File)
  {
    WavePlayer_Start2();
  }
  WavePlayer_RePlay2();
  //IntExtOnOffConfig(DISABLE);
}

void JWWaveTest() {       //music file play(sound)- moving sound!
  //STM3210B_LCD_Init();
  SPI_FLASH_Init();
  WavePlayer_Init3();
  
  IntExtOnOffConfig(ENABLE);
  if(Get_WaveFileStatus3() == Valid_WAVE_File)
  {
      WavePlayer_Start3();
  }  
  WavePlayer_RePlay3();
  //IntExtOnOffConfig(DISABLE);
}

void MyFlashInit()  //memory 지워주는 function
{
  SPI_FLASH_Init();
  STM3210B_LCD_Init();
  LCD_Clear(White);
  
  LCD_DisplayStringLine(Line1, " Bulk Erase Start ");
  SPI_FLASH_BulkErase();
  LCD_DisplayStringLine(Line2, " Bulk Erase End ");
  
  while(1) {};
}

///Level///

/// Map ///