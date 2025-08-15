#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    printf("      +0 +1 +2 +3 +4 +5 +6 +7\n");
    printf("    +--------------------------\n");
    for (int i=32; i < 127; i++){
        if ((i % 8) == 0 ){
            printf("\n");
            printf("%3d |", i);
        }
        printf(" %c ", i);
    }
    printf("\n");
    return 0;
}