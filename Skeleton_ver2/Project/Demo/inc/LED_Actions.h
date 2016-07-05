#ifndef __LED_ACTIONS_H__
#define __LED_ACTIONS_H__

/* ___________________ LED_Actions.c _____________________ */

void shift_Left_String(int (*arr)[16]);		//호출될때 마다 cnt_S값을 증가시키고 shift_String함수를 호출하여 좌측으로 한칸 이동
void shift_Right_String(int (*arr)[16]);	//호출될때 마다 cnt_S값을 감소시키고 shift_String함수를 호출하여 우측으로 한칸 이동
void shift_String(int (*arr)[16], int line);	//현재 위치에서 cnt_S의 값으로 이동
void go_Up_String(int (*arr)[16]);			//문자열 위로 이동 (문자 방향은 위->아래)
void go_down_String(int (*arr)[16]);		//문자열 아래로 이동 (문자 방향은 위->아래)

#endif
