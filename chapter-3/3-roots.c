#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    int a , b, c, d;
    printf("Enter values for a, b , c = ");
    scanf("%d %d %d", &a, &b, &c);
    d = (b*b) - (4 * (a * c));

    if (a == 0){
        printf("It is undefine\n");
        return 0;
    }
    if (d < 0){
        printf("there is no real root\n");
        return 0;
    }else if (d >= 0){
        double pos_root = (-b + sqrt((double)d)) / ( 2 * a);
        double neg_root = (-b - sqrt((double)d)) / ( 2 * a);
        printf("positive root = %2.2lf\n", pos_root);
        printf("negative root = %2.2lf\n", neg_root);
    }

    


    return 0;
}