#include <stdio.h>
#include <stdlib.h>

void int_divide(int numerator, int denominotor, int *quotient, int *remainder);

int main(int argc, char *argv[]){
    int numerator, denominotor, quotient, remainder;
    printf("Enter numerator, denominotor: ");
    scanf("%d %d", &numerator, &denominotor);
    int_divide(numerator, denominotor, &quotient, &remainder);
    printf("The quotient is %d and remainder is %d\n", quotient, remainder);
    return 0;
}

void int_divide(int numerator, int denominotor, int *quotient, int *remainder){
    *quotient = numerator / denominotor;
    *remainder = numerator % denominotor;
}