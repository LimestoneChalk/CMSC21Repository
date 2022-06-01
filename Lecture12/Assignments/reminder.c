#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n); //prototype function

int main (void)
{
    char reminders[MAX_REMIND][MSG_LEN+3]; //initialize variables
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) { //checks if no space is left
            printf("-- No space left --\n");
            break;
        }
        
        printf("Enter day and reminder: "); //prompt user
        scanf("%2d", &day);
        if (day == 0) {break;} //check if user wants to display
        sprintf(day_str, "%2d", day); //copies number onto day_str
        read_line(msg_str, MSG_LEN); //copies the rest of the message onto msg_str

        for (i = 0; i < num_remind; i++)
        {
            if (strcmp(day_str, reminders[i]) < 0){break;} //compares each value of reminders[i] to day_str to see where day_str can fit
        }
        for (j = num_remind; j > i; j--)
        {
            strcpy(reminders[j], reminders[j-1]); //moves contents down one position
        }

        strcpy(reminders[i], day_str); //inputs data from day_str and msg_str to reminders
        strcat(reminders[i], msg_str);
        num_remind++;
    }
    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
    {
        printf(" %s\n", reminders[i]); //prints reminders
    }
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') //gets input from text
    {
        if (i < n)
        {
            str[i++] = (int)ch;
        }
    }
    str[i] = (int)'\0'; //puts end character at end of string
}