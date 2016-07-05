#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

#include "SetPORT.h"

#define SQUARE(X)		((X)*(X))

extern int Temp[16];
extern int String[10][16];
int StringTemp[16];
int PointTemp[16];
int CircleTemp[16];

int numOfChar;
int Lines;

void print_Temp(){					// temp를 Dot Matrix에 표시한다. 한번호출되면 아주 짧은 시간 Dot Matrix에 한번 표시된다.
	//static int cnt_P = 0;			// Dot Matrix 좌,우측 가장 자리로 갈수록 약간씩 어두뤄 지는 효과를 주기 위한 변수
	int i;

	for(i=0; i<16; i++){
		ROW = i;
		_delay_us(3);
		COLUMN1 = (Temp[i] >> 8)/* & (~(0xFE << cnt_P))*/;			//가장자리 어두워지는 효과
		COLUMN2 = (Temp[i] & 0x00FF)/* & (0xFF80 >> cnt_P)*/;
		_delay_us(97);
		COLUMN1 = COLUMN2 = 0x00;
	}
//	cnt_P++;
//	if(cnt_P == 8)
//		cnt_P = 0;
}

void Clear_Temp(){
	int i;

	for(i=0; i<16; i++){
		Temp[i] = 0;
	}
}

void copyToString(int num,...){		//문자들을 가변인자로 받아 들여 StringTemp 변수에 저장, 가변인자들은 int형 16개짜리 배열
	int i, j;
	int * buf;
	
	numOfChar = num;					//num은 문자의 갯수를 나타냄
	Lines = numOfChar * 16;	
	va_list ap;							// 보이드형 포인터

	va_start(ap, num);					//ap가 매개 인자로 전달된 num의 바로 뒤에 오는 인자를 가리키게 된다.
	for(i=0; i<num; i++){	
		buf = va_arg(ap, int*);			//va_arg함수는 ap가 가리는 값을 int형 포인터로 값을 buf로 반환한다.
		for(j=0; j<16; j++){
			String[i][j] = *buf;	//buf 가 가리키는 값을 차례대로 StringTemp변수에 복사한다.
			if(i==0){
				StringTemp[j] = *buf;
			}
			buf++;
		}
	}
	va_end(ap);							//ap를 헤제한다.
}

void makeStringTemp_H(int (*arr)[16], int x){
	int i, j, k;
	
	j = x/16;
	k = x%16;

	if(x <= Lines-16){
		for(i=0; i<16; i++){
			StringTemp[i] = (arr[j][i] << k) | (arr[j+1][i] >> (16-k));
		}
	}else if(x < Lines){
		for(i=0; i<16; i++){
			StringTemp[i] = (arr[j][i] << k) | (arr[0][i] >> (16-k));
		}
	}
}

void makeStringTemp_V(int (*arr)[16], int y){
	int i, j, k;
	
	j = y/16;
	k = y%16;

	if(y < Lines-16){
		for(i=0; i<16-k; i++){
			StringTemp[i] = arr[j][i+k];
		}
		for(i=0; i<k; i++){
			StringTemp[16-k+i] = arr[j+1][i];
		}
	}else if(y < Lines){
		for(i=0; i<16-k; i++){
			StringTemp[i] = arr[j][i+k];
		}
		for(i=0; i<k; i++){
			StringTemp[16-k+i] = arr[0][i];
		}
	}
}

void makePointTemp(int x, int y){
	int i;

	for(i =0; i<16; i++){
		if(i==y)
			PointTemp[i] = 0x8000 >> x;
		else 
			PointTemp[i] = 0;
	}
}

void makeCircleTemp(int r, int x, int y){
	int i, j;

	for(j=0; j<16; j++){
		CircleTemp[j] = 0;
		for(i=0; i<16; i++){
			if((SQUARE(i-x) + SQUARE(j-y) < SQUARE(r+1)) && (SQUARE(i-x) + SQUARE(j-y) >= SQUARE(r-1))){
				CircleTemp[j] |= 0x8000 >> i;
			}
		}
	}
}

void addTemp(int * temp){
	int i;

	for(i=0; i<16; i++){
		Temp[i] |= temp[i];
	}
}
