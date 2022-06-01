#include <stdio.h>
#include <math.h>

struct line{ //initialize struct
    struct point{
        float x;
        float y;
    }point1, point2;
    float midpoint[2];
    float slope;
    float distance;
}inputLine;
float solveSlope(struct line* line1); //function prototypes
void solveMidpoint(struct line* line1);
float solveDistance(struct line* line1);
float getYInt(struct line* line1);

int main(void)
{
    printf("Enter x and y for point 1: "); //prompt inputs
    scanf("%f%f", &inputLine.point1.x, &inputLine.point1.y); 
    printf("Enter x and y for point 2: ");
    scanf("%f%f", &inputLine.point2.x, &inputLine.point2.y);
    printf("%.2f %.2f\n", inputLine.point1.x, inputLine.point1.y);
    printf("Line 1: (%.2f, %.2f)\n", inputLine.point1.x, inputLine.point1.y); 
    printf("Line 2: (%.2f, %.2f)\n", inputLine.point2.x, inputLine.point2.y);
    printf("The slope is: %.2f\n", solveSlope(&inputLine)); //call and print. 
    solveMidpoint(&inputLine); 
    printf("The midpoint is: %.2f, %.2f\n", inputLine.midpoint[0], inputLine.midpoint[1]);
    printf("Distance between 2 points: %.2f\n", solveDistance(&inputLine));
    printf("y = %.2fx + %.2f", inputLine.slope, getYInt(&inputLine)); //prints right away
}

float solveSlope(struct line* line1) //pointer parameter in order to access and store using local variables
{
    float t = ((line1->point2.y - line1->point1.y) / (line1->point2.x - line1->point1.x)); //y2-y1/x2-x1
    line1->slope = t;
    return t;
}

void solveMidpoint(struct line* line1)
{
    float midCoords[2] = {
        (line1->point1.x + line1->point2.x)/2, //x1+x2/2, y1+y2/2
        (line1->point1.y + line1->point2.y)/2,       
    };
    for (int i = 0; i < 2; i++)
    {
        line1->midpoint[i] = midCoords[i]; //assign values to struct
    }
}

float solveDistance(struct line* line1)
{
    float t = sqrtf(powf((line1->point1.x - line1->point2.x), 2) + powf((line1->point1.y - line1->point2.y), 2)); //sqrt((x_1-x_2)^2) + (y_1-y_2)^2)
    line1->distance = t;
    return t;
}

float getYInt(struct line* line1)
{
    float yInt = (line1->point1.y - (line1->slope * line1->point1.x)); //y = mx + b
    return yInt;
}
