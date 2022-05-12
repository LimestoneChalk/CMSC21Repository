#include <stdio.h>
int main (void)
{
    int age;
    bool teenager;
    (age >= 13? (age<=19? teenager=true : teenager=false;): teenager = false);
    printf("%d", teenager);
}