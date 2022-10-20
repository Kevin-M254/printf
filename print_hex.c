#include "main.h"

/**
 * print_hex - prints in hexadecimal
 * @l: list of args form _printf
 * @f: pointer to struct flags
 * Description: calls convert func and converts number
 * to correct base
 *
 * Return: No. of chars printed.
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints in hexadecimal uppercase
 * @l: list of args from _printf
 * @f: pointer to the struct flags
 *
 * Return: No. of chars printed.
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - prints in base 2
 * @l: list of args from _printf
 * @f: pointer to the struct flags
 *
 * Return: No. of chars printed.
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - prints in base 8
 * @l: list of args from _printf
 * @f: pointer to struct flags
 *
 * Return: No. of chars.
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
