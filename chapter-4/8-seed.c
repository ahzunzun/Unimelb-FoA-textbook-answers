#include <stdio.h>
#include <stdlib.h>

#define BOTTOM_LIMIT 1
int main(int argc, char *argv[]){
    int nmax;
    int max_sequence = 0;
    int longest_cycle = 0;
    int longest_sequence = 0;
    printf("Enter nmax value: ");
    scanf("%d", &nmax);
    for(int i = BOTTOM_LIMIT; i <=nmax; i++){
        int n = i;
        int cycles = 0;
        int max = n;
        while(n > 1){
            printf("%5d ", n);
            if (n % 2 == 0){
                n = n / 2;
            } else {
                n = 3*n+1;
            }
            if (n>max){
                max = n;
            }
            cycles += 1;
        }
        if (max > max_sequence){
            max_sequence = max;
            longest_sequence = i;
        }

        if (cycles > longest_cycle){
            longest_cycle = cycles;
        }
    }
    printf("longest cycle = %d , longest sequence = %d\n", longest_cycle, longest_sequence);
    return 0;
}