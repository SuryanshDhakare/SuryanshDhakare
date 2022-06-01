#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    pid_t ppid;
    pid = getpid();
    printf("process id is :%d\n",pid);
    ppid=getppid();
    printf("process id of parent is :%d\n",ppid);

    return 0;
}