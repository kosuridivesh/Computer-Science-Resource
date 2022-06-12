/* This program shows difference between 
   Union and Structure
*/

#include <stdio.h>
union unionJob
{
   //defining a union
   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %zu", sizeof(uJob));
   printf("\nsize of structure = %zu\n", sizeof(sJob));
   return 0;
}
