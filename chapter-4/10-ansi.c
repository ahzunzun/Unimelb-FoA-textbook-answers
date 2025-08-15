#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv) {
    int ch, incomment=0, detected=0, instr=0, halt=0, combidect=0;

    /* Assumes the original code is correct syntax */
    while((ch=getchar()) != EOF) {
        if (!incomment) {
            if (ch == '\'' || ch == '\"') {
                /*toggle string mode*/
                if (instr) {
                    instr = 0;
                } else {
                    instr = 1;
                }
            }

            if (detected == 1) {
                if (ch != '*') {
                    printf("/");
                } else {
                    incomment = 1;
                    halt = 1;
                }
                detected = 0;
            }
            if (ch == '/' && !instr && !incomment) {
                /*if single slash found*/
                detected = 1;
                halt = 1;
            }

            if (halt == 0) {
                putchar(ch);
            } else {
                halt--;
            }
        } else {
            /*comment mode*/
            if (combidect) {
                if(ch == '/') {
                    incomment = 0;
                }
                combidect = 0;
            }
            if (ch == '*') {
                combidect = 1;
            }
        }
    }
    putchar('\n');
        
    return 0;
}