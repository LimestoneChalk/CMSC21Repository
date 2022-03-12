#include <stdio.h>


int main (void)
{
    int firstDig, secondDig, placeholder;

    printf("Enter a two digit number. \n");
    scanf("%d%d", firstDig, secondDig);
    placeholder = firstDig;
    firstDig = secondDig;
    secondDig = placeholder;
    prinf("Your new number is: %d%d!", firstDig, secondDig);

}