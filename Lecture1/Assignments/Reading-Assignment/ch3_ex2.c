#include <stdio.h>

int main(void)
{
    //variable assignment
    int i; 
    float x;
    i = 40;
    x = 839.21f;

    //outputs the same variable in different formats. 
    //formatting takes the form of %m.pX, where m describes the minimum characters to display, and p describes a different format depending on the specifier
    // in %d, it specifies the minimum amount of digits to display
    // in %f, it specifies the amount of digits to display after the decimal
    // in %e, it's the same.
    printf("|%d|%5d|%-5d||%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x, x);
    return 0;
}