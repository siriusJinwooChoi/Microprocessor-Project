#ifndef __LED_ACTIONS_H__
#define __LED_ACTIONS_H__

/* ___________________ LED_Actions.c _____________________ */

void shift_Left_String(int (*arr)[16]);		//ȣ��ɶ� ���� cnt_S���� ������Ű�� shift_String�Լ��� ȣ���Ͽ� �������� ��ĭ �̵�
void shift_Right_String(int (*arr)[16]);	//ȣ��ɶ� ���� cnt_S���� ���ҽ�Ű�� shift_String�Լ��� ȣ���Ͽ� �������� ��ĭ �̵�
void shift_String(int (*arr)[16], int line);	//���� ��ġ���� cnt_S�� ������ �̵�
void go_Up_String(int (*arr)[16]);			//���ڿ� ���� �̵� (���� ������ ��->�Ʒ�)
void go_down_String(int (*arr)[16]);		//���ڿ� �Ʒ��� �̵� (���� ������ ��->�Ʒ�)

#endif
