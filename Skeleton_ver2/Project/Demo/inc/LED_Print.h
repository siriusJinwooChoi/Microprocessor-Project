#ifndef __LED_PRINT_H__
#define __LED_PRINT_H__


//void copyToTemp(int * arr);			// int 형 배열 temp 에 arr을 복사해 넣는다.
void print_Temp();					// temp를 Dot Matrix에 표시한다.
void Clear_Temp();
void addTemp(int * temp);

void copyToString(int num,...);
void makeStringTemp_H(int (*arr)[16], int x);
void makeStringTemp_V(int (*arr)[16], int x);

void makePointTemp(int x, int y); 	// x,y좌표를 이용해서 점하나를 찍음
void makeCircleTemp(int r, int x, int y); // 원

#endif
