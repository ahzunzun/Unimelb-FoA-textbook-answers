#include <stdio.h>
#include <stdlib.h>

int n_choose_k(int n, int k);
int factorial(int num);

int main(int argc, char *argv[]){
    int n, k, res;
    printf("Enter n and k = ");
    scanf("%d %d", &n ,&k);
    res = n_choose_k(n, k);
    printf("The final result is = %d\n", res);
    return 0;
}

int n_choose_k(int n, int k){
    int result;
    result =  factorial(n) / (factorial(n-k) * factorial(k));
    return result;
}

int factorial(int num){
    if (num <= 1){
        return 1;
    } 
    return num * factorial(num - 1);
}