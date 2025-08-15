#include <stdio.h>
#include <stdlib.h>

int factorial (int n);
int sum (int n);
double sum_sequence(int n);

int main(int argc, char *argv[]){
    int seed;
    double result;
    printf("Enter amount : ");
    scanf("%d", &seed);
    result = sum_sequence(seed);
    printf("The result is = %lf\n", result);
    return 0;
}

double sum_sequence(int n){
	double result = 0.0;
	for (int i = n; i > 0; --i) {
		result += (double) sum(i) / factorial(i);
	}
	return result;
}

int factorial (int n){
    if (n == 1){
        return n;
    }

    return n * factorial(n - 1);
}

int sum (int n){
    if (n == 0){
        return 0;
    }

    return n + sum(n - 1);
}