#include <stdio.h>
/**
 * main - entry point
 * The sizeof operator gives the amount of storage, in bytes
 * Return: 0 if run properly
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n ", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}