#include <errno.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

static uid_t euid, ruid;

int main(void)
{
    ruid = getuid();
    printf("%d\n", ruid);
}
