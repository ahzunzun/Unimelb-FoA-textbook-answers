#include <stdio.h>
#include <stdlib.h>

int t_itr(int n);
int t_rec(int n);

int main(int argc, char *argv[]){
    printf("%d\n", t_itr(-2));
    printf("%d\n", t_rec(-2));
    return 0;
}

int t_itr(int n){
    int sum, i;
    sum = 0;
    for (i = 1; i <=n; i ++){
        printf("sum = %d\n", sum);
        sum += i;
    }
    return sum;
}

int t_rec(int n){
    if (n < 0){
        return 0;
    } else {
        return n + t_rec(n-1);
    }
}