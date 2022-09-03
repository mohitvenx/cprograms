#include<stdio.h>
#include<string.h>
#include "sort1.h"
void init_ptr(struct student s[],struct student* p[],int n)
{
for(int i=0;i<n;i++)
{
p[i]=&s[i];
}
}
void disp(struct student* p[],int n)
{
for(int i=0;i<n;i++)
{
printf("%d %s\n",p[i]->rollno,p[i]->name);
}
}
int sort_on_roll_no(struct student* s1,struct student* s2)
{
return s1->rollno>s2->rollno;
}
int sort_on_names(struct student* s1,struct student* s2)
{
return strcmp(s1->name,s2->name)>0;
}
void swap(struct student** lhs,struct student** rhs)
{
struct student *temp=*lhs;
*lhs=*rhs;
*rhs=temp;
}
void selection_sort(struct student* p[],int n,int (*comp)(struct student *s1,struct
student *s2))
{
int i,pos,j;
for(i=0;i<n-1;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(comp(p[pos],p[j]))
pos=j;
}
if(pos!=i)
swap(&p[pos],&p[i]);
}
}