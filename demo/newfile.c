#include <stdio.h>
#include <stdlib.h>
/**
 * THESE ARE THE FUNCTIONS THAT WE USE
 * man open
 * man write
 * man read
 * man close
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main(int argc, char *argv[])
{
    int df;
    char buffer[10];

    df = open(argv[1], O_CREAT | O_WRONLY, 0600);

    if (df == -1)
    {
        printf("cant create the file and doesn't exist\n");
        exit(1);
    }

    write(df, argv[2], sizeof(buffer));

    close(df);

    df = open(argv[1], O_RDONLY);

    read(df, buffer, sizeof(buffer));

    close(df);

    printf("%s\n", buffer);

    printf("The number of arguements is: %d", argc);

    return 0;
}