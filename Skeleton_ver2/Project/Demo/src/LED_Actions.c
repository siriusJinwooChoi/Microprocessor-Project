#include "LED_Print.h"

/* ___________________ LED ������ ���� �Լ� _____________________ */
int cnt_S=0;
int cnt_UD=0;
extern int Temp[16];
extern int numOfChar;
extern int Lines;

/* __________________________________________________________________ 1.���� ������ ������-> ���� �̰� �� ��� �̵��ϴ� �Լ� */


//������ ������ ������->�����̰� �����̴� ������ �����̴�.

void shift_Left_String(int (*arr)[16]){
	cnt_S++;			//������ ������ ǥ���Ѵ�.
	if(cnt_S >= Lines){	//������ �̵��ϸ� 0���� �����Ͽ� ���̾� ������� ���� ȿ���� �ش�.
		cnt_S = 0;
	}
	makeStringTemp_H(arr, cnt_S);
}

//������ ������ ������->�����̰� �����̴� ������ �������̴�. - ���� ù ���ڰ� ���̰� �״��� ������ ���ڰ� ����´�.

void shift_Right_String(int (*arr)[16]){
	cnt_S--;			//������ ���ҷ� ǥ���Ѵ�.
	if(cnt_S < 0){		//0���� �̵��� �������� 63���� �����Ͽ� �� �ޱ��ڰ� ������� ���� ȿ���� �ش�.
		cnt_S = Lines-1;
	}
	makeStringTemp_H(arr, cnt_S);
}



/* __________________________________________________________________ 1.���� ������ ���� -> �Ʒ��� �̰� �� �Ʒ��� �̵��ϴ� �Լ� */

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
