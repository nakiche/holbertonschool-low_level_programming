#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

	if (c < 0)
		c = c * -1;
	a = ((c % 10) + 48);
	_putchar (a);
	return (0);
}
