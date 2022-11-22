#include <stdarg.h>
#include <stdio.h>

void add(int num, ...)
{
    va_list(ap);
    int sum = 0;
    int index = 0;
    va_start(ap, num);

    for (index = 1; index <= num; index++)
        sum += va_arg(ap, int);

    va_end(ap);
    printf("The sum of the values is : %d\n", sum);
}

int main()
{
    add(4, 3, 3, 4, 6);

    return 0;
}
