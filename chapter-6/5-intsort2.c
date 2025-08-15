#include <stdio.h>
#include <stdlib.h>

void int_sort2(int *p1, int *p2);

int main(int argc, char *argv[]){
    int num1, num2;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &num1, &num2);
    int_sort2(&num1, &num2);
    printf("Final results : %d, %d\n", num1, num2);
    return 0;
}

void int_sort2(int *p1, int *p2){
    int tmp;
    if (*p2 < *p1){
        tmp =  *p1;
        *p1 = *p2;
        *p2 = tmp;
    }
}