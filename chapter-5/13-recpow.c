#include <stdio.h>
#include <stdlib.h>


int int_pow(int base, int power);

int main(int argc, char *argv[]){
    int num, expo, result;
    printf("Enter a number and a power: ");
    scanf("%d %d", &num, &expo);

    result = int_pow(num, expo);
    printf("result = %d\n", result);
    return 0;
}

int int_pow(int base, int power){
    if(power == 0){
        return 1;
    }

    return base * int_pow(base, power - 1);
}