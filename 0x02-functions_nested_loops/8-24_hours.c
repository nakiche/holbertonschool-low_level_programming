#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"

/**
 *jack_bauer - This is a description
 *@a: Description of parameter a
 *@b: Description of parameter b
 * Return: 0
 */



void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0;h < 24;h++)
	{
		for (m = 0;m < 60;m++)
		{
			_putchar((h/10) + '0');		
			_putchar((h%10) + '0');
			_putchar(':');
			_putchar((m/10) + '0');
			_putchar((m%10) + '0');
			_putchar('\n');
		}
	}	

	

}
