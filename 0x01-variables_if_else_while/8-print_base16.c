#include <stdio.h>
/**
 * main - printing hexadecimal numbers
 * Return: 0
 */

int main(void)
{
	char h;
	char b;

	for (h = 0; h < 10; h++)
		putchar('0' + h);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
