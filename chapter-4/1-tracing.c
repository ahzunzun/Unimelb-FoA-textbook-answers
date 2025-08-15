#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int j= 5;
    for (int i=0; i<j; j++) {
        printf("i=%d, j=%d\n", i, j); // 0 5,
    }
    return 0;
}