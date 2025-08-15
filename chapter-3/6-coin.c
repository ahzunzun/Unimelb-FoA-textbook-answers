#include <stdio.h>
#define FIFTY 50
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define TWO 2
#define ONE 1

int main(int argc, char *argv[]){
    int cents = 0;
    
    printf("Enter amount in cents: ");
    scanf("%d", &cents);
    printf("The coins required to make %d cents are:\n", cents);
    if (cents >=FIFTY){
        cents -= FIFTY;
        printf("%d", FIFTY);
        if (cents > 0 ){
            printf(", ");
        }
    }
    
    if (cents >= TWENTY){
        cents -= TWENTY;
        printf("%d", TWENTY);
        if (cents > 0 ){
            printf(", ");
        }
    }
    
    
    if (cents >= TWENTY){
        cents -= TWENTY;
        printf("%d", TWENTY);
        if (cents > 0 ){
            printf(", ");
        }
    }
    
    if (cents >= TEN){
        cents -= TEN;
        printf("%d", TEN);
        if (cents > 0 ){
            printf(", ");
        }
    }
    
    if(cents >= FIVE){
        cents -= FIVE;
        printf("%d", FIVE);
        if (cents > 0 ){
            printf(", ");
        }
    }
    
    if (cents >= TWO){
        cents -= TWO;
        printf("%d", TWO);
        if (cents > 0 ){
            printf(", ");
        }
    }
    
    if (cents >= TWO){
        cents -= TWO;
        printf("%d", TWO);
        if (cents > 0 ){
            printf(", ");
        }
    }
        
    if (cents >= ONE){
        cents -= ONE;
        printf("%d", ONE);
        if (cents > 0 ){
            printf(", ");
        }
    }
        
    if (cents == 0){
        printf("\n");
    }
    return 0;
}