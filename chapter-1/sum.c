#include <stdio.h>

int main(int argc, char *argv[]){
    int sum ;
    int nextNum;
    sum = 0;
    while(scanf("%d", &nextNum) == 1){
        sum += nextNum;
    }
    
    printf("The sum of the numbers is %d\n", sum);
    return 0;
}