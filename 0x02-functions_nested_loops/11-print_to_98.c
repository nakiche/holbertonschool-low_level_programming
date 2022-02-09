#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * print_to_98 - This is a description
 *@n: this is de description of n
 *
 * Return: 0 always
 */

void  print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
		printf("%d\n", a);
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}
		printf("%d\n", a);
	}
}
