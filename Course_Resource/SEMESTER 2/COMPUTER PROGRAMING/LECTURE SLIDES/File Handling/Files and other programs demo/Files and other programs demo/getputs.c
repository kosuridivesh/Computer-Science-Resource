#include<stdio.h>
#include<string.h>

int main()
{
 FILE *fp1;
 char str[20],op[20];
 int n;

 printf("Enter the string:");
 scanf("%[^\n]",str);

 n=strlen(str);

 printf("%d",n);

 fp1=fopen("fgetsfile","w");
 
 fputs(str,fp1);
 
 fclose(fp1);

 fp1=fopen("fgetsfile","r");
 
 printf("%s\n",fgets(op,n+1,fp1));
 
 fclose(fp1);
}

 


