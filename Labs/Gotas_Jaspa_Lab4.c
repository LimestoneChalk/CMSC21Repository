#include <stdio.h>

int main(void)
{
    int userArr[99], num, i, j, temp, searchInt, choice, terminateLoop = 1;

    printf("Welcome to Selection Sorting and Linear Searching \n      By Jaspa and Gotas    \n");
    printf("Would you like to Proceed in using the Program? \nInput the number: \n1 - Yes \n2 - No ");
    scanf("%d", &choice);
    printf("\n");

    if(choice == 1){
        while (terminateLoop) //loops while variable is not zero
        {
            //Selection Sort by Jaspa//


            printf("Sort Your given numbers!");
            printf("\nPlease Enter the total Number of Elements: ");
            scanf("\n %d", &num);

            printf("\nPlease Enter the Array Elements. \nWill not inlcude numbers that are off the Number of Elements Given : ");
            for(i = 0; i < num; i++)
                scanf("%d", &userArr[i]);

            for (i = 0; i < num; i++){
                for (j = i + 1; j < num; j++){ //checks if current number is larger than next number, then switches the numbers if so
                    if (userArr[i] > userArr[j]){
                        temp = userArr[i];
                        userArr[i] = userArr[j];
                        userArr[j] = temp;
                    }
                }
            }
            printf("\nSelection Sort Result : ");
            for (i = 0; i < num; i++){
                printf(" %d \t", userArr[i]);
            }
            printf("\n");

        // Linear Search By Gotas //


            printf("Search a number from the given array!\n");
            printf("Enter a number: \n");
            scanf("\n %d", &searchInt);
            if (searchInt <= 0) // checks if number is invalid
            {
                printf("I'm sorry, that's an invalid number!");
            }
            else
            {
                for (int i = 0; i < num; i++){ 
                    if(userArr[i] == searchInt)
                    {
                        printf("\nFound the number! It's at position %d on the list!", i); //if match, print index 
                        break;
                    }
                    else if (i == (num - 1))
                    {
                        printf("\nThis number does not exist in the given array.");
                    }
                }
            }
            printf("\n The program is finished. Would you like to terminate the program? \n Input the number: \n 0 - Y \n Any Other Number - N");
            scanf("%d", &terminateLoop); //prompt to end program. if zero, ends.
        }
    }

    else if(choice == 2){
        printf("\nProgram terminated.");
        return 0;
    }

    else{
        printf("\nThe Input is not in the choices given.\nTherefore, the program has been terminated\n");
        return 0;
    }
}
