#include<stdio.h>
struct student
{
 int rno;
 char name[20];
 float mark;
};

int main()
{
 FILE *fp;
 struct student s,s1;

 fp=fopen("frip","w");
 
 printf("Enter rno,name and mark");
 
 scanf("%d%s%f",&s.rno,s.name,&s.mark);

 fwrite(&s,sizeof(struct student),1,fp);

 fclose(fp);

fp=fopen("frip","r");
while(!(feof(fp)))
{
 fread(&s1,sizeof(struct student),1,fp);
}

printf("Name:%s\tRoll No:%d\tMark:%f\n",s1.name,s1.rno,s1.mark);

fclose(fp);

}


