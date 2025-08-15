#include <stdio.h>
#include <stdlib.h>

void int_sort3(int *p1, int *p2, int *p3);
void int_swap(int *p1, int *p2);

int main(int argc, char *argv[]){
    int num1, num2, num3;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int_sort3(&num1, &num2, &num3);
    printf("Final results : %d, %d, %d\n", num1, num2, num3);
    return 0;
}

void int_swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void int_sort3(int *p1, int *p2, int *p3){
    if (*p1 > *p2){
        int_swap(p1, p2);
    }
    if (*p3 < *p2){
        int_swap(p3, p2);
    }
}