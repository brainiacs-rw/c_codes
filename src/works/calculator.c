#include <stdio.h>

int main() {

    int num1, num2;
    char operator;

    // Get first number;
    printf("Enter num1: ");
    scanf("%i", &num1);

    //get second number;
    printf("Enter num2: ");
    scanf("%i" ,&num2);

    // Enter operator;
    printf("Enter Operator: ");
    scanf(" %c" ,&operator);

    // Perform calculation
    switch (operator)   {
    case '+':
        printf("Sum of %i and %i is: %i", num1, num2, num1+num2);
        break;
    case '*':
        printf("Product of %i and %i is: %i", num1, num2, num1*num2);
        break;
    case '/':
        printf("Quotient of %i and %i is: %i", num1, num2, num1/num2);
        break;
    case '-':
        printf("Difference between %i and %i is: %i", num1, num2, num1-num2);
        break;
    
    default:
        break;
    }

    return 0;
}