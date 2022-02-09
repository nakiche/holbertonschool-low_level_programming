#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet_x10 - This is a description
 *
 * Return: 0 always
 */

#include "main.h"

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 97; a < 123; a++)
		{
		putchar(a);
		}
	putchar (012);
	}
}
