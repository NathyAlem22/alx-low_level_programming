#include <unistd.h>
/**
 * main - entry point
 * write
 * Return:1 if it runs correctly
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
