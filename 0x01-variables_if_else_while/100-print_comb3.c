#include <stdio.h>

/**
 * main - prints every combination of a number
 * Return: 0 for sucess
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if ((i < j) & (j <= '9'))
			{
				if ((j < '9') | (i < '8'))
				{
					putchar(i);
					putchar(j);
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
