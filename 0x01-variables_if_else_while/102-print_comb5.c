#include <stdio.h>
/**
 * main - entry point
 * description: prints possible combinations of two numbers 0-99
 * Return: 0
 */
int main(void)
{
	int ni, n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 / 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 / 10) + '0');
			if (n1 == 98 && n2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
