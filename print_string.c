#include "main.h"

/**
 * print_string - prints every char in a string
 * @l: args from _printf
 * @f: pointer to struct flags
 *
 * Return: no. of chars printed.
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a char
 * @l: args from _printf
 * @f: pointer to struct flags
 *
 * Return: no. of chars printed.
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;

	_putchar(va_arg(l, int));

	return (1);
}
