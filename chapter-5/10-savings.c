#include <stdio.h>
#include <stdlib.h>

double savings_plan(double inital, double amount, double debit_rate, double credit_rate, int years);

int main(int argc, char *argv[]){
    int years;
    double credit_rate, debit_rate, amount, initial, final_balance;
    printf("Enter number of years   : ");
    scanf("%d", &years);
    printf("Enter credit rate %%    : ");
    scanf("%lf", &credit_rate);
    printf("Enter debit rate %%     : ");
    scanf("%lf", &debit_rate);
    printf("Enter monthly  amount     : $");
    scanf("%lf", &amount);
    printf("Enter initial balance     : $");
    scanf("%lf", &initial);
    final_balance = savings_plan(initial, amount, debit_rate, credit_rate, years);
    printf("Saving $%lf plus $%lf per month for %d years\n", initial, amount, years);
    printf("Final balance is %lf\n", final_balance);
    return 0;
}

double savings_plan(double initial, double amount, double debit_rate, double credit_rate, int years){
    int month;
    double monthly_mult, balance = initial, rate;

    if (initial < 0){
        rate = debit_rate;
    } else {
        rate = credit_rate;
    }

    monthly_mult = 1.00 + (rate / 100.00) / 12;
    for (month = 1; month <= 12 * years; month++){
        balance *= monthly_mult;
        balance += amount; 
    } 
    return balance; 
}