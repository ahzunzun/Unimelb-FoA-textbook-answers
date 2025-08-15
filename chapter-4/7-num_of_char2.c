#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int lines = 0;
    int chars = 0;
    int words = 0;
    int ch;
    int inaword = 0;
    printf("Enter text:\n");
    while((ch = getchar()) != EOF){
        if (ch == '\n'){
            lines += 1;
        }
        else{
            chars += 1;
        }
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            inaword = 1;
        } else if(inaword == 1) {
            inaword = 0;
            words++;
        }
    }
    printf("Lines: %8d\n", lines);
    printf("chars: %8d\n", chars);
    printf("words: %8d\n", words);
    return 0;
}