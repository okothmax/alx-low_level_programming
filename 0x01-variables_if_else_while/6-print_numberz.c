#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: prints all numbers to base 10
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	printf("\n");
	return (0);
}
