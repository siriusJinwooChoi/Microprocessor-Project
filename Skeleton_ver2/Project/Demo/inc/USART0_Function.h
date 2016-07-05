
//-------------------------------------------------------------------------- USART FUNCTIONS

#ifndef __USART0_Function_h__
#define __USART0_Function_h__

/* 문자 전송 함수  */
void USART0_PutChar(char ch);

/*  서식문자를 포함한 문자열 전송 함수 */
void USART0_FputStr(char * Format,...);

/*  문자열 전송 함수 */
void USART0_PutStr(char * str);

/*  문자 입력받는 함수 */
char USART0_GetChar();

/*  문자열 입력 받는 함수 */
void USART0_GetStr(char * str);

#endif
