#include <stdio.h>
/**
 * main - printing numbers followed by comma
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar('0' + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
