#include <stdio.h>
int main (void)
{
    //initialize variables
    int firstDig, secondDig, placeholder;
    //prompt user
    printf("Enter a two digit number. \n");
    scanf("%1d%1d", &firstDig, &secondDig);
    //places first digit in placeholder, then assigns first digit to second digit
    placeholder = firstDig;
    firstDig = secondDig;
    //assigns second digit to placeholder
    secondDig = placeholder;
    printf("Your new number is: %d%d!", firstDig, secondDig);
    return 0;
}