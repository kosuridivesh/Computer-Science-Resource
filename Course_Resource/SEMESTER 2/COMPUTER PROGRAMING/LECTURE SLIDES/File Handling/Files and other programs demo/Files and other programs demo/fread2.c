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
 struct student s[10],s1[10];

 int n,i;

 fp=fopen("afrip","w");
 
 printf("Enter the no of students:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
 
   printf("Enter rno,name and mark");
   scanf("%d%s%f",&s[i].rno,s[i].name,&s[i].mark);
 }
 fwrite(&s,sizeof(struct student),n,fp);

 fclose(fp);

fp=fopen("afrip","r");
while(!(feof(fp)))
{
 fread(&s1,sizeof(struct student),n,fp);
}

for(i=0;i<n;i++)
printf("Name:%s\tRoll No:%d\tMark:%f\n",s1[i].name,s1[i].rno,s1[i].mark);

fclose(fp);

}


