#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - This is a description
 *
 * Return: 0 always
 */

#include "main.h"

void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	putchar (012);
}
