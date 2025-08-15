#include <stdio.h>
#include <stdlib.h>

int my_isupper(char character);
char my_tolower(char character);

int main(int argc, char *argv[]){
    char mychar, myuppercase, convertedlowercase;
    printf("Enter a char ");
    scanf(" %c", &mychar);
    if(my_isupper(mychar)){
        printf("It is upper case\n");
    } else {
        printf("It is NOT upper case\n");
    }
    printf("Enter a uppercase char ");
    scanf(" %c", &myuppercase);
    convertedlowercase = my_tolower(myuppercase);
    printf("Converted upper case = %c\n", convertedlowercase);
        
    return 0;
}

int my_isupper(char character){
    if (('A'<= character) && (character<='Z')){
        return 1;
    }
    return 0;
}

char my_tolower(char character){
    int encoded_char = (int)character;
    if (my_isupper(character)){
        encoded_char += 32;
        return (char)encoded_char;
    }

    return character;
}