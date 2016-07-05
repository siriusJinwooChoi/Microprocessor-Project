
//-------------------------------------------------------------------------- USART0 (Serial Communication)

#ifndef __USART0_DEFINES_H__
#define __USART0_DEFINES_H__

// ..............................UCSR0A
#define DOUBLESPEED_SET					UCSR0A |= (1<<U2X0)		//통신속도 2배
#define DOUBLESPEED_CLEAR				UCSR0A &= ~(1<<U2X0)	//통신속도 보통
#define MULTIPROCESS_SET				UCSR0A |= (1<<MPCM0)	//멀티프로세서 모드
#define MULTIPROCESS_CLEAR				UCSR0A &= ~(1<<MPCM0)

// ..............................UCSR0B
#define RX_INTERRUPT_ENABLE				UCSR0B |= 0x80		//수신완료 인터럽트 활성화 RXCIE0
#define RX_INTERRUPT_DISABLE			UCSR0B &= ~0x80
#define TX_INTERRUPT_ENABLE				UCSR0B |= 0x40		//송신완료 인터럽트 활성화 TXCIE0
#define TX_INTERRUPT_DISABLE			UCSR0B &= ~0x40

#define USART_EMPTY_INTERRUPT_ENABLE	UCSR0B |= 0x20		//USART Register Empty Interrupt 활성화	UDRIE0
#define USART_EMPTY_INTERRUPT_DISABLE	UCSR0B &= ~0x20

#define RECEIVER_ENABLE					UCSR0B |= 0x10		// 수신기 활성화 RXEN0
#define RECEIVER_DISABLE				UCSR0B &= ~0x10
#define TRANSMITTER_ENABLE				UCSR0B |= 0x08		// 송신기 활성화 TXEN0
#define TRANSMITTER_DISABLE				UCSR0B &= ~0x08

// 2 배속이 아닐때................UBRR
#define BAUD_RATE_2400					UBRR0L = 160, UBRR0H = 256
#define BAUD_RATE_4800					UBRR0L = 207, UBRR0H = 0
#define BAUD_RATE_9600					UBRR0L = 103, UBRR0H = 0
#define BAUD_RATE_14400					UBRR0L = 68, UBRR0H = 0
#define BAUD_RATE_19200					UBRR0L = 51, UBRR0H = 0
#define BAUD_RATE_28800					UBRR0L = 34, UBRR0H = 0
#define BAUD_RATE_38400					UBRR0L = 25, UBRR0H = 0
#define BAUD_RATE_57600					UBRR0L = 16, UBRR0H = 0
#define BAUD_RATE_76800					UBRR0L = 12, UBRR0H = 0
#define BAUD_RATE_115200				UBRR0L = 8, UBRR0H = 0
#define BAUD_RATE_230400				UBRR0L = 3, UBRR0H = 0
#define BAUD_RATE_250000				UBRR0L = 3, UBRR0H = 0
//__________________________________________________________________________

#endif
