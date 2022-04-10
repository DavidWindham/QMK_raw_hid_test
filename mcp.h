#ifndef VCC_H
#define VCC_H

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#define KEYMAP( \
	L00, L02, R00, R01, \
	L10, L11, R10, R11  \
) { \
	{ L00, L02, R00, R01 }, \
	{	L10, L11, R10, R11 }  \
}


#endif
