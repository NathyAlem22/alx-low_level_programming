#include "main.h"

/**
 * _isdigit - checks if the input is digit or not
 * Return: 0 for sucess
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
