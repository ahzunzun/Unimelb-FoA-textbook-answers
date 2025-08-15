#include <stdio.h>
#include <stdlib.h>
#define READ_OK 0
#define READ_ERROR 1

int read_num(int lo, int hi, int *num);
void int_swap(int *p1, int *p2);

int main(int argc, char *argv[]){
    int num_result, success, num1, num2;
    printf("Enter integer range = ");
    scanf("%d %d", &num1, &num2);
    if (num2 < num1){
        int_swap(&num1, &num2);
    }

    success = read_num(num1, num2, &num_result);

    if(success == READ_OK){
        printf("%d\n", num_result);
    } else {
        printf("Not within range\n");
    }
    
    return 0;
}

int read_num(int lo, int hi, int *num){
    int next;
    printf("enter a number between %d and %d inclusive: ",lo, hi);
    while (scanf ("%d", &next) == 1){
        /* got a number, so take a look at it */
        if (lo <= next && next <= hi) {
            /* this number is within range */
            *num = next;
            return READ_OK;
        }
        printf("%d is not between %d and %d\ntry again: ", next, lo, hi);
    }
    /* no valid numbers found, and scanf has failed */
    return READ_ERROR;
}

void int_swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}