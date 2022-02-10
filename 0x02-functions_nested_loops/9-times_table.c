#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"

/**
 *times_table- This is a description
 *
 * Return: 0
 */



void times_table(void)
{
	int f;
	int c;
	int k;
	int a;
	int b;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 9; c++)
		{
			k = f * c;
			if (k > 9)
			{
				a = (k / 10);
				b = (k % 10);
				_putchar(' ');
				_putchar(a + 48);
				_putchar(b + 48);
			}
			if (k <= 9 && c != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			else if (c == 0)
			{
				_putchar(k + 48);
			}
			if (c < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
