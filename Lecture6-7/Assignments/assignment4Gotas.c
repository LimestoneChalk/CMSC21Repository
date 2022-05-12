#include <stdio.h>
#include <stdbool.h>

/*size of 2d array. since all stations can be defined by having a relationship/no relationship, 
all of the stations must be in the table and thus must have the same length and width. */
#define COLNROWLENGTH ((int) (sizeof(road_networks) / sizeof(road_networks[0]))) 

//constants for charging stations
#define CHARGING1 2
#define CHARGING2 3

int main(){
    int input, nearestCharge = -1;
    int road_networks[8][8] = {{1, 1, 0, 0, 0, 1}, 
    {1, 1, 1}, 
    {0, 1, 1, 0, 1, 1},
    {0, 0, 0, 1, 1},
    {0, 0, 0, 1, 1},
    {1, 0, 1, 0, 0, 1},
    {1, 0, 0, 1, 0, 0, 1},
    {0, 0, 0, 0, 0, 1, 0, 1}
    };

    char stations[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    //indent for the 'upper left cell' of the table
    printf("     ");
    //print colummn labels
    for (int i = 0; i < sizeof(stations); i++)
    {
        printf("%c", stations[i]);
        printf("    ");
    }
    printf("\n");

    //for each row...
    for (int i = 0; i < COLNROWLENGTH; i++)
    {
        printf("%c", stations[i]); //print row label
        printf("    ");
        for(int j = 0; j < COLNROWLENGTH; j++) //print each value associated with row
        {
            printf("%d", road_networks[i][j]);
            printf("    ");
        }
        printf("\n");
    }

    //check for nearest station with algorithm that checks each neighbor of the origin point
    /* Note: due to the setup of the stations, the farthest a charging station is from any point is two stations away.
    thus, we only need to check two neighbors down. */
    printf("Which point are you located? \n 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &input);
    if (input == CHARGING1 || input == CHARGING2) //check if self is charging station.
    {
        nearestCharge = input;
        printf("You are already at a charging station: Station %c.", stations[nearestCharge]);
        return 0;
    }
    for(int i = 0; i < COLNROWLENGTH; i++) //check if station is one neighbor away
    {
        if (road_networks[input][i] == 1 && (i == CHARGING1 || i == CHARGING2))
        {
            nearestCharge = i;
            printf("The nearest charging station is at %c.", stations[nearestCharge]);
            return 0;
        }
    }

    for(int i = 0; i < COLNROWLENGTH; i++) //check if station is two neighbors away
    {
        if (road_networks[input][i] == 1) //check if there is a pathway from origin to neighbor
        {
            for(int k = 0; k < COLNROWLENGTH; k++) //check neighbor's neighbors
            {
                if (road_networks[i][k] == 1 && (k == CHARGING1 || k == CHARGING2))
                {
                    nearestCharge = k;
                    printf("The nearest charging station is at %c.", stations[nearestCharge]);
                    return 0;
                }
            }
        }
    }

    printf("A charging station is unreachable at your current location.");
}