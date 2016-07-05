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

void print_Temp(){					// temp�� Dot Matrix�� ǥ���Ѵ�. �ѹ�ȣ��Ǹ� ���� ª�� �ð� Dot Matrix�� �ѹ� ǥ�õȴ�.
	//static int cnt_P = 0;			// Dot Matrix ��,���� ���� �ڸ��� ������ �ణ�� ��η� ���� ȿ���� �ֱ� ���� ����
	int i;

	for(i=0; i<16; i++){
		ROW = i;
		_delay_us(3);
		COLUMN1 = (Temp[i] >> 8)/* & (~(0xFE << cnt_P))*/;			//�����ڸ� ��ο����� ȿ��
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

void copyToString(int num,...){		//���ڵ��� �������ڷ� �޾� �鿩 StringTemp ������ ����, �������ڵ��� int�� 16��¥�� �迭
	int i, j;
	int * buf;
	
	numOfChar = num;					//num�� ������ ������ ��Ÿ��
	Lines = numOfChar * 16;	
	va_list ap;							// ���̵��� ������

	va_start(ap, num);					//ap�� �Ű� ���ڷ� ���޵� num�� �ٷ� �ڿ� ���� ���ڸ� ����Ű�� �ȴ�.
	for(i=0; i<num; i++){	
		buf = va_arg(ap, int*);			//va_arg�Լ��� ap�� ������ ���� int�� �����ͷ� ���� buf�� ��ȯ�Ѵ�.
		for(j=0; j<16; j++){
			String[i][j] = *buf;	//buf �� ����Ű�� ���� ���ʴ�� StringTemp������ �����Ѵ�.
			if(i==0){
				StringTemp[j] = *buf;
			}
			buf++;
		}
	}
	va_end(ap);							//ap�� �����Ѵ�.
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
