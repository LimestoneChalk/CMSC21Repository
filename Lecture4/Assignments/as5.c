#include <stdio.h>
int main(void)
{
    const int DAYSPERROW = 7;
    int numOfDays, startDay, daysInRow = 1, dayIndex = 1;
    printf("Enter number of days in month (no going over 31!): ");
    scanf("%d", &numOfDays);
    if (numOfDays <= 0 || numOfDays >= 32)
    {
        printf("You entered an invalid number!");
        return 0;
    }
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);
    if (startDay <= 0 || startDay >= 7)
    {
        printf("You entered an invalid number!");
        return 0;
    }

    for (int i = 1; i <= startDay - 1; i++)
    {
        printf("  "); //2 spaces for two digits, other 2 spaces for space in between days of week.
        printf("  "); 
        daysInRow++;
        if (daysInRow > 7)
        {
            printf("\n");
            daysInRow = 1;
        }
    }

    for (int i = 1; i <= numOfDays; i++)
    {
        printf("%d", dayIndex); //2 spaces for two digits, other 2 spaces for space in between days of week.
        printf("  "); 
        dayIndex++;
        daysInRow++;
        if (daysInRow > 7)
        {
            printf("\n");
            daysInRow = 1;
        }
    }
    return 0;
}