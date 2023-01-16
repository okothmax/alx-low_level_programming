#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t child_pid;
    child_pid = getpid();
    int count1 = 0, count2 = 0;

    if (child_pid != 0)
    {
        printf("This is a child process\n");
        while (count1 < 10)
        {
            printf("child process: %d\n", child_pid);
            sleep(3);
            count1++;
        }
    }
    else
    {
        printf("This is a parent process\n");
        while (count2 < 20)
        {
            printf("parent process: %d\n", count1);
            sleep(3);
            count2++;
        }
    }
    return 0;
}