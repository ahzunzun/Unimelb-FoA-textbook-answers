#include <stdio.h>
#define FAHRENHEIT 'F'
#define CELSIUS 'C'

int main(int argc, char *argv[]){
    double temp;
    double converted_temp;
    char unit;
    char converted_unit;
    printf("Enter a temperature: ");
    scanf("%lf%c", &temp, &unit);
    if (unit == FAHRENHEIT){
        converted_temp = ((double)(temp - 32) * ((5/(double)9)));
        converted_unit = CELSIUS;
    } else if (unit == CELSIUS){
        converted_temp = (temp* ((9/(double)5)) + (double)32);
        converted_unit = FAHRENHEIT;
    }
    
    printf("The temperature %3.1lf%c converts to %3.1lf%c\n", temp, unit, converted_temp, converted_unit);
    return 0;
}