#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of a string
 * @s: string length
 * Return: 0
 */
int _strlen(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
		count++;
	return (count);
}
