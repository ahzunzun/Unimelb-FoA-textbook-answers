#include <stdio.h>
#include <stdlib.h>

int max_2_ints(int num1, int num2);

int main(int argc, char *argv[]){
    int num1;
    int num2;
    int num3;
    int num4;
    int maxint;
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    maxint = max_2_ints(max_2_ints(num1, num2), max_2_ints(num3, num4));
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