#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

/**
 * print_last_digit - This is a description
 *@c: Description of parameter c
 *
 * Return: c
 */

#include "main.h"

int print_last_digit(int c)
{
	int a;
	int d = 0;

	if (c < 0)
	{
		c = c * -1;
	}
	if (c < 0)
	{
		c = c * -1;
		a = ((c % 10) + 64);
	}
	else
	{
		a = ((c % 10) + 48);
	}
	_putchar (a);
	d = c % 10;
	if (d < 0)
		d = d * -1;
	return (d);
}
