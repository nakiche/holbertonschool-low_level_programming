#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * print_last_digit - This is a description
 *@c: Description of parameter c
 *
 * Return: c
 */

#include "main.h"

int print_last_digit(int c)
{
	

	c= c % 10;
	_putchar (c);
	return (c);
}
