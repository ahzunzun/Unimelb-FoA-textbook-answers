#include <stdio.h>
#include <stdlib.h>

int amicablePair(int num1, int num2);
int factors(int n);

int main(int argc, char *argv[]){
    int num1, num2;
    printf("Enter 2 pair of numbers ");
    scanf("%d %d", &num1, &num2);
    if(amicablePair(num1, num2)){
        printf("%d and %d is an amicable pair\n", num1, num2);
    } else {
        printf("%d and %d is NOT an amicable pair\n", num1, num2);
    }
    return 0;
}

int amicablePair(int num1, int num2){
    if ((factors(num1) == num2) && (factors(num2) == num1)){
        return 1;
    }
    return 0;
}

int factors(int n){
    int tot = 0;
    int start = n - 1;
    for (int i = start; i >= 1; i--){
        if(n % i == 0){
            tot += i;
        }
    }
    return tot;
}