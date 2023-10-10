#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char lowercase;
	int k;

	k = 0;
	while (k < 10)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
			_putchar(lowercase);
	_putchar('\n');
	k++;
	}
}
