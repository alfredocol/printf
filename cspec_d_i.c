#include "holberton.h"
/**
 * cspec_d_i - stringifies int and sends to buff
 * @arg: variadic argument
 * @buff: temp array for printing
 *
 * Return: # of chars printed
 */
int     cspec_d_i(void *arg, char *buff)
{
	int i, neg, *n;
	char  arr[13];

	/* NULL check */
	if (!arg)
	{
		update_buff("0", buff, 1);
		return (1);
	}
	/* set array elements to 0 */
	_memset(arr, 0, 13);
	/* get n ready for "stringify'ing", esp. if its neg */
	n = (int *) &arg;
	neg = *n < 0 ? 1 : 0;
	*n = *n < 0 ? *n * -1 : *n;
	for (i = 0; *n; *n /= 10, i++)
		arr[i] = (*n % 10) + '0';
	if (neg)
		arr[i++] = '-';
	/* send array to be reversed */
	update_buff(rev_string(arr), buff, i);
	return (i);
}
