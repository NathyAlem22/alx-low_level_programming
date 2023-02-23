#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @x: The number to be checked
 *       *
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else if (c >= 65  && c <= 90)
	{
		return (1);
	}
	return (0);
}
