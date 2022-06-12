#include<stdio.h>

int main(int argc,char*argv[])   //main takes parameters now

{
 int count;

 printf("argc=%d\n",argc);
 
 for(count=0;count<argc;count++)

 printf("argv[%d]=%s\n",count,argv[count]);
}
