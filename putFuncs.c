#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: the character
 * Description: use local buffer of 1024 to call
 * write as little as possible
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, 1);
		i = 0;
	}

	if (c != -1)
	{
		buf[i] = c;
		i++;
	}

	return (1);
}

/**
 * _puts - print a string to stdout
 * @str: pointer to the string to print
 *
 * Return: Number of chars written.
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
