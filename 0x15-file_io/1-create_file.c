#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdr;
	int nletter;
	int rw;

	if (!filename)
		return (-1);

	fdr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletter = 0; text_content[nletter]; nletter++)
		;

	rw = write(fdr, text_content, nletter);

	if (rw == -1)
		return (-1);

	close(fdr);

	return (1);
}
