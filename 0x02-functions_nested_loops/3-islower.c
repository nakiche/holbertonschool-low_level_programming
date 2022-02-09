#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * _islower - This is a description
 *@c: Description of parameter c
 *
 * Return: c
 */

#include "main.h"

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
