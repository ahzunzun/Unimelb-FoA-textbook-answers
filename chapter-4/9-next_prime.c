#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int num;
    int isnextprime = 1;
    printf("Enter an integer value: ");
    scanf("%d", &num);
    num += 1;
    while(isnextprime){
        int isprime = 1;
        for (int divisor=2; divisor*divisor<= num; divisor++){
            if (num%divisor == 0){
                isprime  = 0;
                break;  
            }
        }
        if (isprime == 1){
            isnextprime = 0;
            break;
        } else {
            num += 1;
        }
    }
    printf("The next prime number is %d\n", num);

    return 0;
}