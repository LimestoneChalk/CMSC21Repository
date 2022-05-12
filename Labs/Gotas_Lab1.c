#include <stdio.h>

int main (void){
    //initializes celsius and fahrenheit variables
    float celsius, fahrenheit;
    //prompts user for celsius input
    printf("Enter the Celsius value that you want to convert.\n");
    scanf("%f", &celsius);
    //calculates fahrenheit
    fahrenheit = 1.8 * celsius + 32;
    //displays fahrenheit value with two values after the decimal point. 
    printf("Your Fahrenheit value is: %.2f degrees Fahrenheit.", fahrenheit);
}

