//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() 
{
    float num1, num2;

    printf("Enter the first number:");
    scanf("%f", &num1);
   
    printf("Enter the second number:");
    scanf("%f", &num2);

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;

    printf("\n--- Results ---\n");
    printf("Sum:         %.2f\n", sum);
    printf("Difference:  %.2f\n", difference);
    printf("Product:     %.2f\n", product);

    if (num2 != 0) {
        float quotient = num1 / num2;
        printf("Quotient:    %.2f\n", quotient);
    } else {
        printf("Quotient:    Error! Cannot divide by zero.\n");
    }

    return 0;
}

