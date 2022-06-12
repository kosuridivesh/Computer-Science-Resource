/* This program demonstrates structure pointer
   and the way to access members in a pointer
*/

#include <stdio.h>

struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d",&personPtr->age);

    printf("Enter weight: ");
    scanf("%f",&personPtr->weight);

    printf("Displaying: ");
    printf("age:%d\tweight:%f\n",personPtr->age,personPtr->weight);

    return 0;
}

// (*personPtr).age is same as personPtr->age
// Now replace (*personPtr). with personPtr-> and try again!!
