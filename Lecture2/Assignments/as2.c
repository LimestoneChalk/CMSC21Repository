#include <stdio.h>
int main (void)
{
    //initialize variables
    int firstDig, secondDig, thirdDig, placeholder;
    //prompt user
    printf("Enter a three digit number. \n");
    scanf("%1d%1d%1d", &firstDig, &secondDig, &thirdDig);
    //stores firsst digit in placeholder
    placeholder = firstDig;
    //switches the first and third digits
    firstDig = thirdDig; 
    thirdDig = placeholder;
    printf("Your new number is: %d%d%d!", firstDig, secondDig, thirdDig);
    return 0;
}