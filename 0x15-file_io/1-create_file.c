#include "main.h"

#define SUCCESS 1
#define FAILURE -1

/**
* create_file - create a file.
* @filename: the name of the file.
* @text_content: content to write to the file.
* Return: 1 On Success, -1 Failure
*/

int create_file(const char *filename, char *test_content)
{
	FILE *fptr;

	if (!filename || !test_content)
		return (FAILURE);

	fptr = fopen(filename, "w+");
	if (fptr)
		return (FAILURE);

	fprintf(fptr, "%s",test_content);
	return (SUCCESS);
}
