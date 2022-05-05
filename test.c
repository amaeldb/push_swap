#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
    argc = 0;
    while (argv[++i])
        printf("%s", argv[i]);
    printf("%d", i);
    return (0);
}