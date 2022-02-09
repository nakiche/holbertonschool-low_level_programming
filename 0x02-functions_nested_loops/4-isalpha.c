#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * _isalpha - This is a description
 *@c: Description of parameter c
 *
 * Return: c
 */

#include "main.h"

int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
