#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads the text file and prints it to the POSIX.
 * @filename: name of a file to read
 * @letters: The number of letters it should read and print
 *
 * Return: actual number of letters either read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdr;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fdr = open(filename, O_RDONLY);
	if (fdr == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fdr);
		return (0);
	}
	lenr = read(fdr, buffer, letters);
	close(fdr);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
