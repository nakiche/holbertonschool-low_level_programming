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

	for (a = 48; a < 58; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			for (c = b + 1 ; c < 58; c++)
			{
				if (a != b && b != c && a != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a < 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar (012);
	return (0);
}
