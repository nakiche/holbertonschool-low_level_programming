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
	int a = 48;
	int b = 48;

	for (a = 48; a < 58; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			if (a < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar (012);
	return (0);
}
