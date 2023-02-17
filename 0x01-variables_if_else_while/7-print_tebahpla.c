#include <stdio.h>

/**
 * main - prints lower case alphabet in reverse order
 * Return: 0 for success
 */
int main(void)
{
	char re_alph;

	for (re_alph = 'z'; re_alph >= 'a' ; re_alph--)
	{
		putchar(re_alph);
	}
	putchar('\n');
	return (0);
}
