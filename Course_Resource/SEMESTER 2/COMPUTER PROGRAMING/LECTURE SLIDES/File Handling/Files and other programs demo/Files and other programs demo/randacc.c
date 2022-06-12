#include<stdio.h>
#define EOD '^'

int main()
{
 
 FILE *fp;
 long pos;
 char c;

 fp=fopen("randip","w");

   while((c=getchar())!=EOD)
    putc(c,fp);

  pos=ftell(fp);

  printf("No. of characters entered:=%ld\n",pos);
   
 fclose(fp);

 fp=fopen("randip","r");
 
  pos=0L;
 
   while(!feof(fp))
   {
     fseek(fp,pos,0);    //position to n+1 th character
    
     printf("Position of %c is %ld\n",getc(fp), ftell(fp));
    
     pos=pos+2L;
   }
   
  fseek(fp,-1L,2);      //position to last character

  do
  {
   
   putchar(getc(fp));

  }while(!fseek(fp,-2L,1));

  fclose(fp);

 putchar('\n');

}
