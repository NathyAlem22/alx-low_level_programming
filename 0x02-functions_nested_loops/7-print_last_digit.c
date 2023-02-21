#include "main.h"

/**
 * print_last_digit - prints the last digit of a numer.
 * @i: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int i)
{
	int last;

	last = i % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
