
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

int Coordinate(char *pch)
{
	int x,y;
	int L1=0;
					x=strlen(pch)-1;
					for(y=x;y>=0;y--)
				{
					//UARTprintf ("Y : %d\n",y);
					if(y==9)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",x,pch[x],pch[x]);
						if(pch[y]==48)
						{
							L1=L1+(0*1);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*1);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*1);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*1);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*1);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*1);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*1);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*1);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*1);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*1);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
					if(y==8)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",x,pch[x],pch[x]);
						if(pch[y]==48)
						{
							L1=L1+(0*10);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*10);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*10);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*10);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*10);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*10);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*10);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*10);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*10);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*10);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
					if(y==7)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",x,pch[x],pch[x]);
						if(pch[y]==48)
						{
							L1=L1+(0*100);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*100);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*100);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*100);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*100);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*100);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*100);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*100);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*100);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*100);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
					if(y==6)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",x,pch[x],pch[x]);
						if(pch[y]==48)
						{
							L1=L1+(0*1000);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*1000);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*1000);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*1000);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*1000);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*1000);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*1000);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*1000);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*1000);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*1000);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
					if(y==5)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",x,pch[x],pch[x]);
						if(pch[y]==48)
						{
							L1=L1+(0*10000);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*10000);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*10000);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*10000);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*10000);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*10000);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*10000);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*10000);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*10000);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*10000);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
					if(y==3)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",x,pch[x],pch[x]);
						if(pch[y]==48)
						{
							L1=L1+(0*100000);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*100000);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*100000);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*100000);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*100000);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*100000);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*100000);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*100000);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*100000);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*100000);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
					if(y==2)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",x,pch[x],pch[x]);
						if(pch[y]==48)
						{
							L1=L1+(0*1000000);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*1000000);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*1000000);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*1000000);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*1000000);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*1000000);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*1000000);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*1000000);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*1000000);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*1000000);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
					if(y==1)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",x,pch[x],pch[x]);
						if(pch[y]==48)
						{
							L1=L1+(0*10000000);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*10000000);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*10000000);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*10000000);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*10000000);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*10000000);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*10000000);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*10000000);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*10000000);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*10000000);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
					if(y==0)
					{
						//UARTprintf ("pch[%d] : %c : %d\n",y,pch[y],pch[y]);
						if(pch[y]==48)
						{
							L1=L1+(0*100000000);
						}
						if(pch[y]==49)
						{
							L1=L1+(1*100000000);
						}
						if(pch[y]==50)
						{
							L1=L1+(2*100000000);
						}
						if(pch[y]==51)
						{
							L1=L1+(3*100000000);
						}
						if(pch[y]==52)
						{
							L1=L1+(4*100000000);
						}
						if(pch[y]==53)
						{
							L1=L1+(5*100000000);
						}
						if(pch[y]==54)
						{
							L1=L1+(6*100000000);
						}
						if(pch[y]==55)
						{
							L1=L1+(7*100000000);
						}
						if(pch[y]==56)
						{
							L1=L1+(8*100000000);
						}
						if(pch[y]==57)
						{
							L1=L1+(9*100000000);
						}
						//UARTprintf ("L : %d\n",L1);
					}
					
				}
				return L1;
			}
