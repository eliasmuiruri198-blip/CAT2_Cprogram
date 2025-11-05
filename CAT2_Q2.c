/*
Name: Muiruri Elias 
Reg no:CT100/G/26169/25
Description: program for net pay for workers 
    */
#include <stdio.h>

int main() {
    float hours, wage, grossPay, tax, netPay;

    //prompt the user to enter the number of hours in a week
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    //prompt the user to enter hourly wage
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // use of loop 
    if (hours <= 40) {
        grossPay = hours * wage;
    } else {
        float overtime = hours - 40;
        grossPay = (40 * wage) + (overtime * wage * 1.5);
    }

    // Calculate tax
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - tax;

    // display the results
    printf("\nGross Pay: Ksh%.2f", grossPay);
    printf("\nTaxes: Ksh%.2f", tax);
    printf("\nNet Pay: Ksh%.2f\n", netPay);

    return 0;
}
