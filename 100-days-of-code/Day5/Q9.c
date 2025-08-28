//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=10, Compound Interest=10.25

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100.0;

    double amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;

    printf("Simple Interest=%g, Compound Interest=%g\n", simple_interest, compound_interest);

    return 0;
}