#include <errno.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    system("ps -aux | grep 'runTest2'");
    int ustatus = setuid(1002);
    int gstatus = setgid(1002);
    printf("setuid returns %d\n", ustatus);
    printf("setgid returns %d\n", gstatus);
    system("ps -aux | grep 'runTest2'");
    system("/bin/bash");
}
