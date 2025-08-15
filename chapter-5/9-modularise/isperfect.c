#include <stdio.h>
#include <stdlib.h>

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