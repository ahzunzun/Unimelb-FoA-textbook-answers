#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]){
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
    printf("%f\n", __FLT_MAX__);
    printf("%f\n", __FLT_MIN__);
    printf("%lf\n", __DBL_MAX__);
    printf("%lf\n", __DBL_MIN__);

    return 0;
}