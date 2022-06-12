/* This program shows how union stores
   member values
*/

#include <stdio.h>
union job
{
   char name[32];
   float salary;
   int workerNo;
} job1;

int main()
{
   printf("Enter name: ");
   scanf("%s", job1.name);

   printf("Displaying\nName :%s\n", job1.name);

   printf("Enter salary: ");
   scanf("%f", &job1.salary);

   
   printf("Salary: %.1f\n", job1.salary);

   return 0;
}
