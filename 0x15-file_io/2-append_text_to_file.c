#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename:  the name of the file and text_content is the NULL
 * terminated string to add at the end of the file
 * @text_content: is NULL, do not add anything to the file.
 * Return: 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fld;
	int numletters;
	int rwrite;

	if (!filename)
		return (-1);

	fld = open(filename, O_WRONLY | O_APPEND);

		if (fld == -1)
			return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;
		rwrite = write(fld, text_content, numletters);

		if (rwrite == -1)
			return (-1);
	}
	close(fld);

	return (1);
}
