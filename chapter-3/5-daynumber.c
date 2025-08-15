#include <stdio.h>
#define CUM_JAN        31
#define CUM_FEB        59
#define CUM_MAR        90
#define CUM_APR        120
#define CUM_MAY        151
#define CUM_JUN        181
#define CUM_JUL        212
#define CUM_AUG        243
#define CUM_SEP        273
#define CUM_OCT        304
#define CUM_NOV        334
#define CUM_DEC        365
#define LEAP           1
#define JAN     1
#define FEB     2
#define MAR     3
#define APR     4
#define MAY     5
#define JUN     6
#define JUL     7
#define AUG     8
#define SEP     9
#define OCT     10
#define NOV     11
#define DEC     12

int main(int argc, char *argv[]){
    int day, month, year, day_number;
    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &month, &year);
    if (month == JAN){
        day_number = day;
    }
    else if (month == FEB){
        day_number = CUM_JAN;
        day_number += day;
    }
    else if (month == MAR){
        day_number = CUM_FEB;
        day_number += day;
    }
    else if (month == APR){
        day_number = CUM_MAR;
        day_number += day;
    }
    else if (month == MAY){
        day_number = CUM_APR;
        day_number += day;
    }
    else if (month == JUN){
        day_number = CUM_MAY;
        day_number += day;
    }
    else if (month == JUL){
        day_number = CUM_JUN;
        day_number += day;
    }
    else if (month == SEP){
        day_number = CUM_JUL;
        day_number += day;
    }
    else if (month == OCT){
        day_number = CUM_SEP;
        day_number += day;
    }
    else if (month == NOV){
        day_number = CUM_OCT;
        day_number += day;
    }
    else if (month == DEC){
        day_number = CUM_NOV;
        day_number += day;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        if (month > FEB){
            day_number += 1;
        }
    }

    printf("%02d/%02d/%d is day number %d in the year\n", day, month, year, day_number);
    return 0;
}