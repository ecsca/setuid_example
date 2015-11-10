#include <errno.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

static uid_t euid, ruid;

int main(void)
{
    printf("%d\n", getuid());
}
