#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>

#include "TIMER_defines.h"
#include "CHAR_16x16.h"
#include "LED_Actions.h"
#include "LED_Print.h"
#include "SetPORT.h"
#include "USART0_defines.h"
#include "USART0_Function.h"

#define UP			'w'
#define DOWN		's'
#define LEFT		'a'
#define RIGHT		'd'

#define START		1
#define STOP		0



volatile int count;		//TIMER 카운트 변수
volatile unsigned char count2;
int Temp[16];			//Dot Matrix에 출력시키기 위한 변수 - temp에 저장된 값은 print_Temp함수에 의해 출력이된다.
int String[10][16];	//문자열을 저장하기 위한 함수 - 문자열의 특정 부분을 Temp 변수에 복사하면 그대로 출력된다.
extern int numOfChar;			//문자열의 갯수를 저장하기 위한 함수
extern int Lines;
extern int StringTemp[16];
extern int CircleTemp[16];
extern int PointTemp[16];
int RoadTemp[16];

volatile int pX = 7;
volatile int pY = 14;

int road = 0b1111000000011111;

volatile int sw_Road = STOP;

void makeRoadTemp(){
	static int pos=3;
	int i;
	int a =  0b1000000011111111;
	
	for(i=15; i>0; i--){
		RoadTemp[i] = RoadTemp[i-1];
	}
	
	srand(count2);
	switch(rand()%5){
	case 0:
		break;
	case 1:
		if(pos<7)
			pos += 1;
		break;
	case 2:
		if(pos<6)
			pos += 2;
		break;
	case 3:
		if(pos>0)
			pos -= 1;
		break;
	case 4:
		if(pos>1)
			pos -= 2;
		break;
	}
	
	road = a >> pos;
	RoadTemp[0] = road;
}

int main(){

	int r = 0;
	int i;
//	int sw=1;
//	int cnt_sw=0;
	
	ROW_SET = COLUMN1_SET = COLUMN2_SET = 0xFF;
	
	ROW = COLUMN1 = COLUMN2 = 0x00;

	TIMER0_CTC_8MS;
	TIMER2_CTC_1MS;

	DOUBLESPEED_CLEAR;
	RX_INTERRUPT_ENABLE;
	RECEIVER_ENABLE;
	TRANSMITTER_ENABLE;
	BAUD_RATE_9600;
	
	makePointTemp(pX, pY);	
	makeCircleTemp(r, 7, 7);
	sei();

	while(1){
		
		addTemp(CircleTemp);
		addTemp(PointTemp);
		addTemp(RoadTemp);
		
		print_Temp();
		Clear_Temp();
		if(count > 6){
			count = 0;
			if(sw_Road==START){
				makeRoadTemp();
			}else{
				r++;
				if(r>10)
					r = 0;
				makeCircleTemp(r, 7, 7);	
			}
		}
		if(sw_Road == START){
			if(RoadTemp[pY] & (0b1000000000000000 >> pX)){
				sw_Road = STOP;
				for(i=0; i<16; i++){
					RoadTemp[i] = 0;
					pX = 7, pY = 14;
					addTemp(CircleTemp);	
				}
			}
		}
		
	}
}

SIGNAL(SIG_OUTPUT_COMPARE0){
	count++;
}

ISR(TIMER2_COMP_vect){
	count2++;
}

ISR(USART0_RX_vect){
	char ch;
	int i;
	
	ch = UDR0;
	switch(ch){
	case UP:
		if(pY>0){
			pY--;
		}
		break;
	case DOWN:
		if(pY<15){
			pY++;
		}
		break;
	case LEFT:
		if(pX>0){
			pX--;
		}
		break;
	case RIGHT:
		if(pX<15){
			pX++;
		}
		break;
	case 'r':
		for(i=0; i<16; i++){
			CircleTemp[i] = 0;
		}
		sw_Road = START;
		break;
	}
	USART0_PutChar(ch);
	makePointTemp(pX, pY);

}

