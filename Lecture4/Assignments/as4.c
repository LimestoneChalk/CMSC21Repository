#include <stdio.h>
int main(void)
{
    int exponent = 0, final = 1;
    printf("n | 2 to the n");
    while (exponent <= 10) {
        printf("\n%d | %d", exponent, final);
        final *=2;
        exponent += 1;
    }
    return 0;
}