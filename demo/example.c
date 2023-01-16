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

int main()
{
    /* WRITE*/
    /** We first create the file descriptor */

    int fd; /* This becomes our file descriptor and must be of type int*/
    char buff[30];

    /** We then open the file descriptor */
    fd = open("myfile.txt", O_CREAT | O_WRONLY | O_APPEND, 0600);

    if (fd == -1)
    {
        printf("Failed to create the file\n");
        exit(1);
    }

    write(fd, "Hello World!\n", 13);

    close(fd);

    /*READ*/
    fd = open("myfile.txt", O_RDONLY);

    if (fd == -1)
    {
        printf("Failed to open and read the file\n");
        exit(1);
    }

    read(fd, buff, 29);

    close(fd);

    printf("buf = %s\n", buff);

    return 0;
}