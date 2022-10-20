#include "main.h"

/**
 * get_flag - turns on flag if encountered by _printf
 * @s: string with flag specifier
 * @f: pointer to struct flags
 *
 * Return: 1 if flag encountered, 0 if not.
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
