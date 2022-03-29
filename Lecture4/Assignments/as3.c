#include <stdio.h>
int main(void)
{
 int i;
 i = 1;
 for (; i <= 128;) {
 printf("%d ", i);
 i *= 2;
 }
 return 0;
}