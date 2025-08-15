#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num;
    int nextperf;
    printf("Enter an integer to find the next perfect integer ");
    scanf("%d", &num);
    nextperf = nextperfect(num);
    printf("The next perfect integer is %d\n", nextperf);
    return 0;
}