#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int lines = 0;
    int chars = 0;
    int ch;
    printf("Enter text:\n");
    while((ch = getchar()) != EOF){
        if (ch == '\n'){
            lines += 1;
        }
        else{
            chars += 1;
        }
    }
    printf("Lines: %8d\n", lines);
    printf("chars: %8d\n", chars);
    return 0;
}