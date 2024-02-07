#include <sys/types.h>
#include <unistd.h>

pid_t fork(void);

int main()
{
    pid_t pid;
    int x = 1;

    pid = Fork();
    if (pid == 0) { 
        printf("child : x=%d\n", ++x);
        exit(0);
    }
    

    printf("parent: x=%d\n", --x);
    exit(0);
}