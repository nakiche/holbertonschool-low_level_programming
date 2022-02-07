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
	int c = 48;
	int d = 48;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (a != b || b != c || c != d || d != b || a != c || a != d)
					{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a < 58)
					{
						putchar(44);
						putchar(32);
					}
					}
				}
			}
		}
	}
	putchar (012);
	return (0);
}
