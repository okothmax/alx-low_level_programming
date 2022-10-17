#include <stdio.h>
/**
 * main - entry point
 * description: prints all numbers to base 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	printf("\n");
	return (0);
}
