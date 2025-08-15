#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int num;
    while(scanf("%d ", &num) != -1){
        printf("%d |", num);
        for (int i = 0; i < num; i ++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}