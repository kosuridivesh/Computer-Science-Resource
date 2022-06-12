/* This program array of structures
*/

#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int roll;
    float sgpa;
}pupil;

int main()
{
	pupil stds[2];
	int i;

    printf("Enter information:\n");

	//Enter first student information
    printf("Enter name: ");
    scanf("%s", stds[0].name);

    printf("Enter roll number: ");
    scanf("%d", &stds[0].roll);

    printf("Enter SGPA: ");
    scanf("%f", &stds[0].sgpa);

	//Enter second student information
    printf("Enter name: ");
    scanf("%s", stds[1].name);

    printf("Enter roll number: ");
    scanf("%d", &stds[1].roll);

    printf("Enter SGPA: ");
    scanf("%f", &stds[1].sgpa);
	
    printf("Displaying Information:\n");

	for(i=0; i<2; i++){    
	    printf("\nName: ");
    	    puts(stds[i].name);
	    printf("Roll number: %d",stds[i].roll);
	    printf("\nSGPA: %.1f", stds[i].sgpa);
	}
    
	return 0;
}
