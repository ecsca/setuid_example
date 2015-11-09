#include <errno.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

static uid_t euid, ruid;

int main(void)
{
    int ustatus, gstatus;
    ustatus = setuid(0);
    gstatus = setgid(0);
    printf("%d\n", ustatus);
    printf("%d\n", gstatus);
    system("/bin/bash");
    /*
    int status;
    ruid = getuid();
    printf("%d\n", ruid);
    printf("%d\n", errno);
    status = setuid(1002);
    printf("%d\n", errno);
    printf("%d\n", status);
    printf("%d\n", ruid);
    */
}
