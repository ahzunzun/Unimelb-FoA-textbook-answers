#include <stdio.h>
#include <stdlib.h>
#define FIFTY 50
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define TWO 2
#define ONE 1

int try_one_coin(int *cents, int coin);
void print_change(int cents);

int main(int argc, char *argv[]){
    int cents = 0;
    
    printf("Enter amount in cents: ");
    scanf("%d", &cents);
    printf("The coins required to make %d cents are:\n", cents);
    print_change(cents);
    return 0;
}

int try_one_coin(int *cents, int coin){
    int count = 0;
    while(*cents >= coin){
        *cents = *cents - coin;
        count++;
    }
    
    return count;
}

void print_change(int cents){
    int number_of_coin = 0;
    while(cents > 0){
        if (cents >= FIFTY){
            number_of_coin = try_one_coin(&cents, FIFTY);
            printf("number of 50 cents = %d\n", number_of_coin);
        }
        if (cents >= TWENTY){
            number_of_coin = try_one_coin(&cents, TWENTY);
            printf("number of 20 cents = %d\n", number_of_coin);
        }
        if (cents >= TEN){
            number_of_coin = try_one_coin(&cents, TEN);
            printf("number of 10 cents = %d\n", number_of_coin);
        }
        if (cents >= FIVE){
            number_of_coin = try_one_coin(&cents, FIVE);
            printf("number of 5 cents = %d\n", number_of_coin);
        }
        if (cents >= TWO){
            number_of_coin = try_one_coin(&cents, TWO);
            printf("number of 2 cents = %d\n", number_of_coin);
        }
        if (cents >= ONE){
            number_of_coin = try_one_coin(&cents, ONE);
            printf("number of 1 cents = %d\n", number_of_coin);
        }
    }
}

