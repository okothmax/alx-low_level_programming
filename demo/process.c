#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t my_pid, parent_pid;

    my_pid = getpid();
    // parent_pid = getppid();

    printf("my process id is %u\n", my_pid);
}