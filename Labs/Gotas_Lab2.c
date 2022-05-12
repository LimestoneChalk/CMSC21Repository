#include <stdio.h>

int main (void) {
    #define PI 3.14159 //pi constant

    //initialize variables
    int decision = 3; //used for directing where the program leads.
    float param1, param2, param3, area, perimeter; //paramters have vague names on purpose so that they may be reused depending on option that user chooses.
    //float is chosen so that we can store more values.

    //prompt
    printf("Hello, which shape do you want to choose today? \n");
    printf("0 - Circle\n");
    printf("1 - Triangle\n");
    scanf("%i", &decision); //saves to decision parameter

    //circle case
    if (decision == 0)
    {
        decision = 3; //so that an invalid argument would stop the program on its tracks instead of continuing.
        //prompt
        printf("You chose Circle!\n");
        printf("Which parts of the circle do you want to solve?\n 0 - Area \n 1 - Circumference\n");
        scanf("%i", &decision); //reuses decision variable
        //switches
        switch (decision)
        {
            case 0: //area case
                printf("You chose Area!\n");
                printf("What's the radius of this circle?\n");
                scanf("%f", &param1);
                area = PI * (param1 * param1); //area calculation: pi * r^2. calculation looks this way to avoid importing math modules.
                printf("Your area is: %.2f units!", area);
                break;
            case 1: //circumference case
                printf("You chose Circumference!\n");
                printf("What's the radius of this circle?\n");
                scanf("%f", &param1);
                perimeter = 2 * PI * param1; //circumference calculation: 2 * pi * r.
                printf("Your circumference is: %.2f units!", perimeter);
                break;
            default:
                printf("Something went wrong in your input!");
                break;

        }

    }
    //triangle case
    else if (decision == 1)
    {
        decision = 3; //if invalid input, makes switch case go to printing error
        printf("You chose Triangle!\n");    
        printf("Which parts of the triangle do you want to solve?\n 0 - Area \n 1 - Perimeter\n");
        scanf("%i", &decision);
        switch (decision)
        {
            //area case
            case 0:
                printf("You chose Area!\n");
                printf("What's the base of this triangle?\n");
                scanf("%f", &param1);

                printf("What's the height of this triangle?\n");
                scanf("%f", &param2);
                area =  (param1 * param2) / 2; //area calculation: base * height /2
                printf("Your area is: %.2f units!", area);
                break;
            //perimeter case
            case 1:
                printf("You chose Perimeter!\n");
                printf("What's the first side of this triangle?\n");
                scanf("%f", &param1);

                printf("What's the second side of this triangle?\n");
                scanf("%f", &param2);

                printf("What's the third side of this triangle?\n");
                scanf("%f", &param3);
                perimeter = param1 + param2 + param3; //perimeter calculation: p1 + p2 + p3
                printf("Your perimeter is: %.2f units!", perimeter);
                break;
            default:
                printf("Something went wrong in your input!");
                break;
        }
    }
    else
    {
        printf("Something went wrong in your input!");
    }
}