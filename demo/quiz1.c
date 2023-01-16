#include <stdio.h>

int main()
{
    int arr[] = {10, 15, 6, 8};
    int index = 0;
    int index2 = 1;
    int k = 18;
    int sum;
    int m, n;

    for (index = 0; index < 3; index++)
    {
        m = arr[index];
        for (index2 = 1; index2 < 4; index2++)
        {
            n = arr[index2];

            sum = m + n;
            if (sum == k)
            {
                printf("True\n");
                printf("The two values are %d and %d\n", m, n);
            }
        }
    }

    return 0;
}