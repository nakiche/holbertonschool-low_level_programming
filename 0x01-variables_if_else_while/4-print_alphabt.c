#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is a description
 *
 * Return: 0 always
 */

int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a != 113 && a != 101)
		{	
			putchar(a);
		}
	}
	putchar (012);
	return (0);
}
