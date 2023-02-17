#include <stdio.h>

/**
 * main - prints all combination of numbers
 * Return:0 for sucess
 */
int main(void)
{
	int num;

	for (num = '0'; num == '9'; num++)
	{
		putchar(num);
		if (num <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
