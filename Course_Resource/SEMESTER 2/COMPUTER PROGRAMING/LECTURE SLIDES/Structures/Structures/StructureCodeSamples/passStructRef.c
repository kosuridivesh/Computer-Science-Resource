/* This program shows how to pass structure
   into a function through call by reference
*/

#include <stdio.h>

struct distance
{
    int feet;
    float inch;
};

//Notice d3's reference is passed
void add(struct distance d1,struct distance d2, struct distance *d3); 

int main()
{
    struct distance dist1, dist2, dist3;

    printf("First distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);

    printf("Second distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    add(dist1, dist2, &dist3); 

    printf("\nSum of dists = %d\'-%.1f\"\n", dist3.feet, dist3.inch);

    return 0;
}

void add(struct distance d1,struct distance d2, struct distance *d3) 
{
	//Adding distances d1 and d2 and storing it in d3
	d3->feet = d1.feet + d2.feet; 
	d3->inch = d1.inch + d2.inch;

	if (d3->inch >= 12) {     
		d3->inch -= 12;
		++d3->feet;
    }
}
