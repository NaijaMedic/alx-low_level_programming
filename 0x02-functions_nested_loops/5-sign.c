#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: number to be printed
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
		printf("\n");
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
		printf("\n");
	}
	else
	{
		printf("0");
		return (0);
		printf("\n");
	}
}
