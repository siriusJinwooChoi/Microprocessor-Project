#include <stdio.h>
#include <avr/io.h>

#include "USART0_defines.h"
#include "USART0_Function.h"


//-------------------------------------------------------------------------- USART FUNCTIONS

void USART0_PutChar(char ch){
	while(!(UCSR0A & 0x20));
	UDR0 = ch;
}

void USART0_FputStr(char * Format,...){
	char buff[40];

	va_list ap;
	va_start(ap, Format);
	vsprintf(buff, Format, ap);
	va_end(ap);

	USART0_PutStr(buff);
}

void USART0_PutStr(char * str){
	while(*str){
		USART0_PutChar(*(str++));
	}
}
char USART0_GetChar(){
	while(!(UCSR0A & 0x80));
	return UDR0;
}
void USART0_GetStr(char * str){
	int i=0;

	for(i=0; i<39; i++){
		*str = USART0_GetChar();
		if(*str == '\r' || *str == '\n'){
			break;
		}
		str++;
	}
	*str = '\0';
}

//__________________________________________________________________________
