#include <stdio.h>
/**
 * main - entry point
 * description: prints possible combinations of two numbers
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = 0; num2 < 9; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 9 && num2 == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
		printf("\n");

	}
	return (0);
}
