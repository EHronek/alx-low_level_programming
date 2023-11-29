#include "main.h"
/**
  * read_textfile - it reads a file and prints it to the POSIX stdout
  * @filename: it is the name of the file that should be read
  * @letters: it is the number of letters read and printed
  * Return: the actual number of letters read and printed
  * returns 0 if file cannot be openned or read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *content;
	int f_descr;
	int rd, wr;

	if (filename == NULL)
		return (0);
	content = malloc(letters);
	if (content == NULL)
		return (0);
	f_descr = open(filename, O_RDONLY);
	if (f_descr == -1)
	{
		free(content);
		return (0);
	}
	rd = read(f_descr, content, letters);
	if (rd == -1)
	{
		free(content);
		close(f_descr);
		return (0);
	}
	wr = write(STDOUT_FILENO, content, rd);
	if (wr == -1)
	{
		free(content);
		close(f_descr);
		return (0);
	}
	close(f_descr);
	free(content);
	return (wr);
}
