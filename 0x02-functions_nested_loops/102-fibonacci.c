#include <stdio.h>
/**
 * main - print fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int sum = i + j;

	for (i = 0; i <= 7041; i++)
	{
		j = 1;
		while (j <= 100)
			printf("%d, ", j);
		printf("%d, ", i);
		j++;
	}
	return (sum);
}
