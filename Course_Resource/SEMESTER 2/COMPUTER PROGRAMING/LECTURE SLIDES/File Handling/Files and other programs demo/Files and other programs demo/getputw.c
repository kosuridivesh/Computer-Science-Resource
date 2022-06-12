#include<stdio.h>
int main()
{
 FILE *fp1,*fp2,*fp3;
 int n, i;

 fp1=fopen("datafile","w");

 printf("Enter a number:");
 scanf("%d",&n);

 while(n!=-1)
 {
   putw(n,fp1);
   printf("Enter next number:");
   scanf("%d",&n);
 }

 fclose(fp1);

 fp1=fopen("datafile","r");
 fp2=fopen("oddfile","w");
 fp3=fopen("evenfile","w");

while((n=getw(fp1))!=EOF)
{

 if(n%2==0)
   putw(n,fp3);
 else
   putw(n,fp2);
}

fclose(fp1);
fclose(fp2);
fclose(fp3);

fp2=fopen("oddfile","r");
fp3=fopen("evenfile","r");

while((n=getw(fp2))!=EOF)
printf("%d",n);

printf("\n");

while((n=getw(fp3))!=EOF)
printf("%d",n);

fclose(fp2);
fclose(fp3);
}

