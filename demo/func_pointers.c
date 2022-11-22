#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*a)(int, int);
    a = add;
    int result;
    result = a(2, 2);
    printf("the sum is: %d", result);

    return 0;
}