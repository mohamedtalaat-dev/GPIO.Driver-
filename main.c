

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include  "MGPIO_Interface.h"
#include  "MGPIO_Interface.h"
#include "MRCC_Interface.h"
#include  "MRCC_Config.h"

int
main(void)
{

	MRCC_voidInit();
	MRCC_voidPeripheralEnable(AHB_1,GPIOA);
	MGPIO_voidSetPinMode(PORTA,PIN1,OUTPUT);


	MGPIO_voidSetPullType(PORTA,PIN1,PULL_UP );
	MGPIO_voidSetOutputType(PORTA,PIN1 , PUSH_PULL);
	MGPIO_voidSetOutputSpeed(PORTA,PIN1 , LOW_SPEED);

	while (1)
	{

		// Add your code here.
	}
}

