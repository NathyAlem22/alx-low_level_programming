#include "main.h"
/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 * Return: void for sucess
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		print_alphabet(i);
	}
	_putchar('\n');
}
