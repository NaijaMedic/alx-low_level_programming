#include <stdio.h>
/**
 * main - print natural numbers that are multiples of 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 = 0) && (i % 5 = 0))
			printf("%d", i);
	}
	return (0);
}
