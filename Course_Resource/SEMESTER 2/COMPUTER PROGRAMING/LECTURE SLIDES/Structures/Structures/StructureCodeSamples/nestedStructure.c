/* This program array of structures
*/

#include <stdio.h>
#include <string.h>

struct college
{
	char name[50];
	int id;
};

struct student
{
    char name[50];
    int roll;
    float sgpa;
    struct college collg_data;
};

int main()
{
	struct student stud_data = {"Vishal", 1702, 8.73, "Amrita", 1};	
	

    printf("\nName: ");
    puts(stud_data.name);
	printf("Roll number: %d",stud_data.roll);
	printf("\nSGPA: %.2f", stud_data.sgpa);
	printf("\nCollege: ");
	puts(stud_data.collg_data.name); //Notice the member access
	printf("College Id: %d\n", stud_data.collg_data.id); 
    
	return 0;
}
