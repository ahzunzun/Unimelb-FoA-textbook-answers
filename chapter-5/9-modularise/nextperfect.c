#include <stdio.h>
#include <stdlib.h>

int nextperfect(int n){
    for (int i = n+1; i <10000; i++){
        if (isperfect(i)){
            return i;
        }
    }
    return 0;
}