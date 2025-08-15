#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int int_pow(int num, int expo);

int main(int argc, char *argv[]){
    int num, expo, result;
    printf("Enter a number and a power: ");
    scanf("%d %d", &num, &expo);

    result = int_pow(num, expo);
    printf("result = %d\n", result);
    return 0;
}

int int_pow(int num, int expo){
    if (expo > 0){
        return pow(num, expo);
    }
    return 0;
}