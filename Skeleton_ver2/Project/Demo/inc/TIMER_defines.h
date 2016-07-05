#ifndef __TIMER_DEFINES_H__
#define __TIMER_DEFINES_H__

//-------------------------------------------------------------------------- TIMER 0
#define TIMER0_NOMAL_10US				TCCR0 = 0x02, TIMSK |= 0x01
#define TCNT0_10US						TCNT0 = 236
#define TIMER0_NOMAL_100US				TCCR0 = 0x02, TIMSK |= 0x01
#define TCNT0_100US						TCNT0 = 56
#define TIMER0_NOMAL_1MS				TCCR0 = 0x04, TIMSK |= 0x01
#define TCNT0_1MS						TCNT0 = 6
#define TIMER0_NOMAL_8MS				TCCR0 = 0x07, TIMSK |= 0x01
#define TCNT0_8MS						TCNT0 = 131

#define TIMER0_CTC_10US					TCCR0 = 0x0A, OCR0 = 19,	TIMSK |= 0x02
#define TIMER0_CTC_100US				TCCR0 = 0x0A, OCR0 = 199,	TIMSK |= 0x02
#define TIMER0_CTC_1MS					TCCR0 = 0x0C, OCR0 = 249,	TIMSK |= 0x02
#define TIMER0_CTC_8MS					TCCR0 = 0x0F, OCR0 = 124,	TIMSK |= 0x02

#define TIMER0_FASTPWM_NONINVERT		TCCR0 = 0x69
#define TIMER0_FASTPWM_INVERT			TCCR0 = 0x79

//-------------------------------------------------------------------------- TIMER 2
#define TIMER2_NOMAL_10US				TCCR2 = 0x02, TIMSK |= 0x40
#define TCNT2_10US						TCNT2 = 236
#define TIMER2_NOMAL_100US				TCCR2 = 0x02, TIMSK |= 0x40
#define TCNT2_100US						TCNT2 = 56
#define TIMER2_NOMAL_1MS				TCCR2 = 0x03, TCNT2 = 6,	TIMSK |= 0x40
#define TCNT2_1MS						TCNT2 = 6
#define TIMER2_NOMAL_8MS				TCCR2 = 0x05, TIMSK |= 0x40
#define TCNT2_8MS						TCNT2 = 131

#define TIMER2_CTC_10US					TCCR2 = 0x0A, OCR2 = 19,	TIMSK |= 0x80
#define TIMER2_CTC_100US				TCCR2 = 0x0A, OCR2 = 199,	TIMSK |= 0x80
#define TIMER2_CTC_1MS					TCCR2 = 0x0B, OCR2 = 249,	TIMSK |= 0x80
#define TIMER2_CTC_8MS					TCCR2 = 0x0D, OCR2 = 124,	TIMSK |= 0x80

#define TIMER2_FASTPWM_NONINVERT		TCCR2 = 0x69
#define TIMER2_FASTPWM_INVERT			TCCR2 = 0x79

#endif
