#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 16
 * @void: Empty parameter list for main.
 *
 * Description: Prints all hexadecimals
 *
 * Return: 0 for success
*/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	num = 'a';

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
