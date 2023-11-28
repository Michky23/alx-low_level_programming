#include "main.h"

/**
 * create_file - create a function that create and write into a file
 * and copy content in it
 * @filename:  is the name of the file to create and text_content
 * is a NULL terminated string to write to the file
 * @text_content: is NULL create an empty file
 * Return: 1 if sucessful or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fld;
	int numletters;
	int rwrite;

	if (!filename)
		return (-1);

	fld = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fld == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
		;
	rwrite = write(fld, text_content, numletters);

	if (rwrite == -1)
		return (-1);
	close(fld);

	return (1);
}
