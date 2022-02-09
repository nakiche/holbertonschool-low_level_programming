#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * print_sign - This is a description
 *@c: Description of parameter c
 *
 * Return: c
 */

#include "main.h"

int print_sign(int c)
{
	if (c > 0)
	{
		c = 1;
	}
	else if (c == 0)
	{
		c = 0;
	}
	else
	{
		c = -1;
	}
	return (c);
}
