#include <errno.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int ustatus = setuid(0);
    int gstatus = setgid(0);
    printf("setuid returns %d\n", ustatus);
    printf("setgid returns %d\n", gstatus);
    system("/bin/bash");
}
