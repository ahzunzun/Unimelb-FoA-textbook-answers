#include <stdio.h>

int main(int argc, char *argv[]){
    double r, area, perimeter, elapsed_hours;
    int start_hour, start_min, start_sec, finish_hour, finish_min, finish_sec;
    
    printf("enter r");
    scanf("%lf", &r);
    printf("enter start time");
    scanf("%d %d %d", &start_hour, &start_min, &start_sec);
    printf("enter end time");
    scanf("%d %d %d", &finish_hour, &finish_min, &finish_sec);
    
    area = 0.5 * r * r;
    printf("%lf \n", area);
    perimeter = r * 4;
    printf("%lf \n", perimeter);
    area = 3.142 * (r*r);
    printf("%lf \n", area);
    perimeter = 2 * 3.142 * r;
    printf("%lf \n", perimeter);

    elapsed_hours = ((double)(finish_sec - start_sec) / 120) + ((double)(finish_min - start_min) / 60) + ((finish_hour - start_hour));
    printf("%lf\n", elapsed_hours);
    
    return 0;
}