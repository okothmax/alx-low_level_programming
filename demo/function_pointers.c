#include <stdio.h>
#include <stdlib.h>

int mac(int a, int b)
{
    return (a + b);
}

int main()
{
    int (*p)(int, int);
    p = mac;
    int sum;
    sum = p(2, 3);

    printf("the sum is: %d\n", sum);
    printf("The sum is %d\n", mac(2, 3));

    return sum;
}