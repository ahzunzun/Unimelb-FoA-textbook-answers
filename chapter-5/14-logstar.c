#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double log_star(double base, double num);

int main(int argc, char *argv[]){
    double base, x;
    printf("base = ");
	scanf("%lf", &base);
	printf("x = ");
	scanf("%lf", &x);
	printf("log* = %lf for log with base = %.0lf of %.0lf\n",
		    log_star(base, x), base, x);
    return 0;
}

double log_star(double base, double num){
    double result = num;
    int times = 0;

    while(result >= 1){
        result = log(result) / log(base);
        times++;
    }
    return times;
}