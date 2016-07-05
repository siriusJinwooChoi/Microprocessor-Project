#include "LED_Print.h"

/* ___________________ LED 동작을 위한 함수 _____________________ */
int cnt_S=0;
int cnt_UD=0;
extern int Temp[16];
extern int numOfChar;
extern int Lines;

/* __________________________________________________________________ 1.문자 순서는 오른쪽-> 왼쪽 이고 좌 우로 이동하는 함수 */


//문자의 순서는 오른쪽->왼쪽이고 움직이는 방향은 왼쪽이다.

void shift_Left_String(int (*arr)[16]){
	cnt_S++;			//좌측은 증가로 표시한다.
	if(cnt_S >= Lines){	//끝까지 이동하면 0으로 리셋하여 뒤이어 따라오는 듯한 효과를 준다.
		cnt_S = 0;
	}
	makeStringTemp_H(arr, cnt_S);
}

//글자의 순서는 오른쪽->왼쪽이고 움직이는 방향은 오른쪽이다. - 제일 첫 글자가 보이고 그다음 마지막 글자가 따라온다.

void shift_Right_String(int (*arr)[16]){
	cnt_S--;			//우측은 감소로 표시한다.
	if(cnt_S < 0){		//0까지 이동한 다음에는 63으로 리셋하여 맨 뒷글자가 따라오는 듯한 효과를 준다.
		cnt_S = Lines-1;
	}
	makeStringTemp_H(arr, cnt_S);
}



/* __________________________________________________________________ 1.문자 순서는 위쪽 -> 아래쪽 이고 위 아래로 이동하는 함수 */

void go_Up_String(int (*arr)[16]){
	cnt_UD++;

	if(cnt_UD >= Lines){
		cnt_UD = 0;
	}

	makeStringTemp_V(arr, cnt_UD);
	/*
	if(j < numOfChar-1){
		for(i=0; i<16-k; i++){
			Temp[i] = arr[j][i+k];
		}
		for(i=0; i<k; i++){
			Temp[16-k+i] = arr[j+1][i];
		}
	}else if(j < numOfChar){
		for(i=0; i<16-k; i++){
			Temp[i] = arr[j][i+k];
		}
		for(i=0; i<k; i++){
			Temp[16-k+i] = arr[0][i];
		}
	}
	*/
}
void go_down_String(int (*arr)[16]){

}
