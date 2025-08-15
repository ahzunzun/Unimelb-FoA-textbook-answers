#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv) {
    int n;
    double x;
    char *m;

    n = 12, x = 1234.4567, m = "hello";
    printf("n=%-3d, x=%8.4f, m=\"%15s\"\n", n, x, m);

    return 0;
}