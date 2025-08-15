#include <stdio.h>
#include <stdlib.h>
int isperfect(int n);
int nextperfect(int n);

int main(int argc, char *argv[]){
    int num;
    int nextperf;
    printf("Enter an integer to find the next perfect integer ");
    scanf("%d", &num);
    nextperf = nextperfect(num);
    printf("The next perfect integer is %d\n", nextperf);
    return 0;
}

int isperfect(int n){
    int tot = 0;
    int start = n -1;
    for (int i = start; i >= 1; i--){
        if(n % i == 0){
            tot += i;
        }
    }
    
    if (tot == n){
        return 1;
    }
    return 0;
}

int nextperfect(int n){
    for (int i = n+1; i <10000; i++){
        if (isperfect(i)){
            return i;
        }
    }
    return 0;
}