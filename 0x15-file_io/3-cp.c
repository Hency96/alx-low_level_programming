#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if the files can be opened.
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for alx  School students.
 * @argc: number of arguments.
 * @argv: arguments of vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_f, file_t, err_c;
	ssize_t nchar, nw;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_f = open(argv[1], O_RDONLY);
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_f, file_t, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_f, buf, 1024);
		if (nchar == -1)
			error_file(-1, 0, argv);
		nw = write(file_t, buf, nchar);
		if (nw == -1)
			error_file(0, -1, argv);
	}

	err_c = close(file_f);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}

	err_c = close(file_t);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	return (0);
}
