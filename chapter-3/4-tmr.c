#include <stdio.h>

int main(int argc, char *argv[]){
    int day, month, year;
    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Date read: %02d/%02d/%d\n", day, month, year);
    
    // last day of the year
    if (month == 12 && day == 31){
        year += 1;
        month = 1;
        day = 1;
        printf("Tomorrow:  %02d/%02d/%d\n", day, month, year);
        return 0;
    }
    // leap year
    if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))&& month == 2 && day == 28){
        day = 29;
        printf("Tomorrow:  %02d/%02d/%d\n", day, month, year);
        return 0;
    }
    // 31 day month
    else if (month == 1 || month == 3 || month ==5 || month ==7 || month ==8 || month ==10){
        if(day == 31){
            day = 0;
            month += 1;
        }
    } else if (month == 2){
        if(day ==28){
            day = 0;
            month += 1;
        }
    }
    else{
        if(day == 30){
            day = 0;
            month += 1;
        }
    }
    day += 1;
    printf("Tomorrow:  %02d/%02d/%d\n", day, month, year);
    return 0;
}