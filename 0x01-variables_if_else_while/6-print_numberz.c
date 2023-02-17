#include <stdio.h>

/**
 * main - prints all numbers from 0 to 10 with out using any char varibale
 * Return: 0 for success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9';  num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
