#include <stdio.h>
#include <stdlib.h>

int eeee(int n);
int oooo(int n);

int main(int argc, char *argv[]){
    printf("%d\n", oooo(5));
    return 0;
}

int eeee(int n){
    if (n ==0){
        return (1);
    } else {
        return oooo(n-1);
    }
}

int oooo(int n){
    if (n == 0){
        return (0);
    } else {
        return eeee(n-1);
    }
}