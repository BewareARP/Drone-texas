#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "inc/hw_memmap.h"
#include "inc/hw_ints.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"
#include "utils/uartstdio1.h"
#include "utils/uartstdio2.h"

#define GPIO_PD6_U2RX           0x00031801
#define GPIO_PD7_U2TX           0x00031C01
int z;
char *phat;
char pch;
			int x,y,z;	
char g_cInput[128];
char g_cInput1[128];
static int m[2];
void initGPS(void)
{
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);	//Enable peripheral of GPIOD port.
	SysCtlDelay(2);
	GPIOPinConfigure(GPIO_PD6_U2RX);	//Set RX port
	GPIOPinConfigure(GPIO_PD7_U2TX);	//Set TX port
	GPIOPinTypeUART(GPIO_PORTD_BASE, GPIO_PIN_6 | GPIO_PIN_7);	//Set type of UART to each port.
	UARTStdioConfig2(2, 9600, SysCtlClockGet());	//Set baud rate to UART2. 

}


/*void UARTIntHandler(void)
{

	
	//if(UARTCharsAvail(UART2_BASE))
	//{
		//UARTprintf1("Thai\n");
			//if(UARTCharsAvail(UART2_BASE))
	   pch=UARTCharGetNonBlocking(UART2_BASE);	//Get character form GPS module.
			UARTprintf1("Pee :%c\n",pch);
			if(pch=='R') //Find character 'R'
			{
			
			for(x=0;x<=62;x++)
			{
					//if(UARTCharsAvail(UART2_BASE))
				g_cInput[x]=UARTCharGetNonBlocking(UART2_BASE); //Get character from GPS module and save in string.
			}
			UARTprintf1("Phat :%s\n",g_cInput);
			phat = strtok (g_cInput,",");	//Get string behind ',' and save in phat.
					phat = strtok (NULL,",");
					phat = strtok (NULL,",");
					phat = strtok (NULL,",");
					y=Coordinate(phat);				//Get Longtitude from GPS module and save in m.
					phat = strtok (NULL,",");
					phat = strtok (NULL,",");
					z=Coordinate(phat); //Get Latitude from GPS module and save in n.
			UARTprintf1("\n");
			UARTprintf1 ("Longitude : %d\n",y/100);
			UARTprintf1 ("Latitude  : %d\n",z/100);
			UARTprintf1("\n");
		m[0]=y;
		m[1]=z;
}
			//}
	//UARTprintf1("Phat\n");
			}*/
