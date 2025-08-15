#include <stdio.h>

int main(int argc, char *argv[]){
    int fahrenheit;
    double celsius;
    printf("Enter fahrenheit: ");
    scanf("%d", &fahrenheit);
    celsius = ((double)(fahrenheit - 32) * ((5/(double)9)));
    printf("celsius = %lf\n", celsius);
    return 0;
}