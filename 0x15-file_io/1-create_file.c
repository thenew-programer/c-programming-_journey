#include "main.h"

#define SUCCESS 1
#define FAILURE -1

/**
* create_file - create a file.
* @filename: the name of the file.
* @text_content: content to write to the file.
* Return: 1 On Success, -1 Failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (FAILURE);


	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 2)
		return (FAILURE);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (SUCCESS);
}
