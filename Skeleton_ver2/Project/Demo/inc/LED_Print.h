#ifndef __LED_PRINT_H__
#define __LED_PRINT_H__


//void copyToTemp(int * arr);			// int �� �迭 temp �� arr�� ������ �ִ´�.
void print_Temp();					// temp�� Dot Matrix�� ǥ���Ѵ�.
void Clear_Temp();
void addTemp(int * temp);

void copyToString(int num,...);
void makeStringTemp_H(int (*arr)[16], int x);
void makeStringTemp_V(int (*arr)[16], int x);

void makePointTemp(int x, int y); 	// x,y��ǥ�� �̿��ؼ� ���ϳ��� ����
void makeCircleTemp(int r, int x, int y); // ��

#endif
