#include <stdio.h>

int main(void)
{
    //initializes variables
    int num1, denom1, num2, denom2, result_num, result_denom;

    //prompt for first fraction
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1); //asks for two values separated by a slash. 

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1; //calculates numerator

    result_denom = denom1 * denom2; //calculates denominator
    printf("The sum is %d/%d\n", result_num, result_denom); //prints final result

    return 0;
}