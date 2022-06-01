#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth", //initialize array of planet strings
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};
    int i, j;
    for (i = 1; i < argc; i++) { //loop through all of the words inputted
        for (j = 0; j < NUM_PLANETS; j++) //loop through all of the planets in the given array
        {
            if (strcmp(argv[i], planets[j]) == 0) //if match
            {
                printf("%s is planet $d\n", argv[i], j + 1);
                break;
            }   
        }
        if (j == NUM_PLANETS) //if no matches at end of loop
        {
            printf("%s IS NOT A PLANET\n", argv[i]);
        }
    }
    return 0;
}