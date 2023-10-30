#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: filename.
 * @text_content: added content some context
 *
 * Return: 1 if the file exists. -1 if the fails doesnt exist
 * or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdr;
	int nletter;
	int rw;

	if (!filename)
		return (-1);

	fdr = open(filename, O_WRONLY | O_APPEND);

	if (fdr == -1)
		return (-1);

	if (text_content)
	{
		for (nletter = 0; text_content[nletter]; nletter++)
			;

		rw = write(fdr, text_content, nletter);

		if (rw == -1)
			return (-1);
	}

	close(fdr);

	return (1);
}
