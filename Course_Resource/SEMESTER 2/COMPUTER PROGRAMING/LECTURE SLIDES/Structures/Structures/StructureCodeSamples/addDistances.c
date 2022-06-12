/* This program uses a structure to add two distances
   entered in terms of feet and inches.
*/

#include <stdio.h>

struct Distance
{
    int feet;
    float inch;
} ;   // declaring structure variables

int main(){

    struct Distance dist1, dist2, sum;
    
    printf("1st distance\n");

    // Input of feet for structure variable dist1
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);

    // Input of inch for structure variable dist1
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);

    printf("2nd distance\n");

    // Input of feet for structure variable dist2
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);

    // Input of feet for structure variable dist2
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    sum.feet = dist1.feet + dist2.feet;
    sum.inch = dist1.inch + dist2.inch;

    if (sum.inch > 12) 
    {
      	//If inch is greater than 12, changing it to feet.
        ++sum.feet;
        sum.inch = sum.inch - 12;
    }

    // printing sum of distance dist1 and dist2
    printf("\nSum of distances = %d\'-%.1f\"\n\n", sum.feet, sum.inch);
    return 0;
}
