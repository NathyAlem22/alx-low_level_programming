#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         s/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s, k, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	s = open(filename, O_RDONLY);
	k = read(s, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (s == -1 || k == -1 || w == -1 || w != k)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(s);

	return (w);
}
