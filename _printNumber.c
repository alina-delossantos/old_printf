#include "holberton.h"
/**
 * _int - print a integer
 * @up: variadic list
 *
 * Return: length of integer
 */
int _int(va_list up)
{
	int check = va_arg(up, int), charLength = 0, divisor = 1;

	if (!check)
		return (-1);

	if (check < 0)
	{
		_write('-');
		check = check * (-1);
		charLength++;
	}
	while (check / divisor > 9)
		divisor = divisor * 10;
	while (divisor != 0)
	{
		_write('0' + check / divisor);
		charLength++;
		check = check % divisor;
		divisor = divisor / 10;
	}
	return (charLength);
}
