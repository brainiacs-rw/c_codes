#include <stdio.h>

int main() {

    int num1, num2;

    // Get first number;
    printf("Enter num1: ");
    scanf("%i", &num1);

    //get second number;
    printf("Enter num2: ");
    scanf("%i" ,&num2);

    // find the sum of provided number
    int sum = num1 + num2;
    printf("The sum of %i and %i is : %i", num1, num2, sum);

    return 0;
}