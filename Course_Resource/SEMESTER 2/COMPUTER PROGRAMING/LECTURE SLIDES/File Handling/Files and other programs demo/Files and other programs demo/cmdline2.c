#include<stdio.h>

int main(int argc,char*argv[])   //main takes parameters now

{
 FILE *fp;
 int i; char c;

 fp=fopen(argv[1],"w");

 for(i=2;i<argc;i++)
   fprintf(fp,"%s\n",argv[i]);

 fclose(fp);

 fp=fopen(argv[1],"r");

 while((c=getc(fp))!=EOF)
 {
  printf("%c",c);	
 }
 
 printf("\n");
 
 fclose(fp);
}
