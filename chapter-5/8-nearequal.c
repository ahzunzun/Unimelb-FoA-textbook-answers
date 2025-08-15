#include <stdio.h>
#include <stdlib.h>
#define CUBE_LOWER 1e-6
#define CUBE_UPPER 1e+6
#define CUBE_ITERATIONS 25
double cube_root(double v);
int near_equal(double num1, double num2);

int main(int argc, char *argv[]){
    double x;

    printf("Enter a number : ");
    while (scanf("%lf", &x) == 1) {
        printf("> cube root is %.3f\n", cube_root(x));
        printf("Enter a number : ");
    }

    printf("\n");
    return 0;
    return 0;
}

int near_equal(double num1, double num2){
    double diff;
    if (num2 > num1){
        double temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    diff = num1 - num2;
    if (diff != 0){
        if (diff > 0.0001){
            return 0;
        }
    }
    return 1;
}

double cube_root(double v){
    double next = 1.0;
    int loops = 0;
    if (v < CUBE_LOWER || v > CUBE_UPPER) {
        printf("WARNING: cube root may be inaccurate\n");
    }
    while(!near_equal(v, next*next*next)) {
        next = (2*next + v/(next*next)) / 3;
        loops++;
    }

    printf("> looped %d times\n", loops);

    return next;
}