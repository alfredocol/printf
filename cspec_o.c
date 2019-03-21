#include "holberton.h"

/**
 * cspec_o - Handle octal format specifiers
 * @list: va_list from which to pull unsigned decimal int to convert to base-8
 * @buff: Buffer to copy octal string into
 *
 * Return: None
 */
int cspec_o(va_list list, char *buff)
{
	unsigned int value = va_arg(list, unsigned int);
	int count = 0;

	char *st;
	char *end;
	char *string;
	char *digits = "01234567";

	string = malloc(32);
	if (!string)
		exit(1);

	st = string;
	end = string;

	do {
		*st = digits[value % 8];
		value /= 8;
		st++;
	} while (value);

	*st = '\0';
	st--;

	while (*end)
	{
		update_buff(st, buff, 1);
		st--;
		end++;
		count++;
	}
	free(string);
	return (count);
}
