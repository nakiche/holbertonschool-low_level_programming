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
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if (a == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else if (a < 6 && a != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
