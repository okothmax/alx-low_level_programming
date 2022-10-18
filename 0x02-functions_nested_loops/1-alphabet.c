#include "main.h"
/**
 * main - entry point
 * description; prints out the aphabet in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar("\n");
return (0);
}
