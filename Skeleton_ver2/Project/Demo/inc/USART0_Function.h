
//-------------------------------------------------------------------------- USART FUNCTIONS

#ifndef __USART0_Function_h__
#define __USART0_Function_h__

/* ���� ���� �Լ�  */
void USART0_PutChar(char ch);

/*  ���Ĺ��ڸ� ������ ���ڿ� ���� �Լ� */
void USART0_FputStr(char * Format,...);

/*  ���ڿ� ���� �Լ� */
void USART0_PutStr(char * str);

/*  ���� �Է¹޴� �Լ� */
char USART0_GetChar();

/*  ���ڿ� �Է� �޴� �Լ� */
void USART0_GetStr(char * str);

#endif
