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

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}

	}	
	putchar (012);
	return (0);
}
