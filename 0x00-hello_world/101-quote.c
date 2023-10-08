#include <stdio.h>
#include <unistd.h>
/**
<<<<<<< HEAD
 * main - write code without printf and put command
=======
 * main - prints without using printf or puts
>>>>>>> b3b4b4e827374db870130c95eedee13cd63de4f2
 * Return: 0
 */

int main(void)
{
<<<<<<< HEAD
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
=======
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n",
>>>>>>> b3b4b4e827374db870130c95eedee13cd63de4f2
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
