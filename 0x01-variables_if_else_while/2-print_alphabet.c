#include <stdio.h>

/**
 * main - entry point
 * Return:0 if exited properly
 */
int main(void)
{
	char alp = 'a';

	while (alp < 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
