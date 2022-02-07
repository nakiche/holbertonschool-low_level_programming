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
	int a = 0, c = 0, c2 = 0, b = 48, d = 49, e = 50, f = 51, g = 52, h = 53, i = 54, j = 55;

	for (a = 48 ; a < 58; a++)
	{
		if (c < 9)
		{
			a = 49;
			c++;
			a--;
		}
		else if (c > 8 && c < 17)
		{
			a = 50;
			c++;
			a--;
		}
		else if (c >= 17 && c < 24)
		{
			a = 51;
			c++;
			a--;
		}
		else if (c >= 24 && c < 30)
		{
			a = 52;
			c++;
			a--;
		}
		else if (c >= 30 && c < 35)
		{
			a = 53;
			c++;
			a--;
		}
		else if (c >= 35 && c < 39)
		{
			a = 54;
			c++;
			a--;
		}
		else if (c >= 39 && c < 42)
		{
			a = 55;
			c++;
			a--;
		}
		else if (c >= 42 && c < 44)
		{
			a = 56;
			c++;
			a--;
		}
		else if (c >= 44 && c < 45)
		{
			a = 57;
			c++;
			a--;
		}
		if (a < 57)
			putchar(a);
		if (c2 < 9)
		{
			b++;
			c2++;
		}
		else if (c2 >= 9 && c2 < 17)
		{
			d++;
			c2++;
			b = d;
		}
		else if (c2 >= 17 && c2 < 24)
		{
			e++;
			c2++;
			b = e;
		}
		else if (c2 >= 24 && c2 < 30)
		{
			f++;
			c2++;
			b = f;
		}
		else if (c2 >= 30 && c2 < 35)
		{
			g++;
			c2++;
			b = g;
		}
		else if (c2 >= 35 && c2 < 39)
		{
			h++;
			c2++;
			b = h;
		}
		else if (c2 >= 39 && c2 < 42)
		{
			i++;
			c2++;
			b = i;
		}
		else if (c2 >= 42 && c2 < 44)
		{
			j++;
			c2++;
			b = j;
		}
		else if (c2 >= 44)
		{
			b = 57;
		}
		if (c2 <= 44 && a < 57)
			putchar (b);
		if (a < 56)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar (012);
	return (0);
}
