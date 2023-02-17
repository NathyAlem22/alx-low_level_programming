#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 for succes
 */
int main(void)
{
	int i, j, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if ((i < j) & (j < z) & (z <= '9'))
				{
					putchar(i);
					putchar(j);
					putchar(z);
					if ((i + j + z) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
