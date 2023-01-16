#include <stdio.h>

int main()
{
    int binary, decimal = 0, rem, base = 1;

    printf("Enter the binary number to convert to decinal: ");
    scanf("%d", &binary);

    while (binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;

        base = base * 2;
    }

    printf("the value is: %d", decimal);

    return 0;
}