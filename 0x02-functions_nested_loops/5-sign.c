#include "main.h"
/**
 * print_sign - will print sign of a numbber
 * @num : the number to be checked
 * Return: 1 if greaters than zero -1 if less and 0 if zero
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

