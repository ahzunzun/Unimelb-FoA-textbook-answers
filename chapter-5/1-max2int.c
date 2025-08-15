#include <stdio.h>
#include <stdlib.h>

int max_2_ints(int num1, int num2);

int main(int argc, char *argv[]){
    int num1;
    int num2;
    int maxint;
    printf("Enter 2 integers: ");
    scanf("%d %d", &num1, &num2);
    maxint = max_2_ints(num1, num2);
    printf("max int is %d\n", maxint);
    return 0;
}

int max_2_ints(int num1, int num2){
    if (num1 > num2){
        return num1;
    }else if(num2 > num1){
        return num2;
    }else{
        return num1;
    }
    return 0;
}