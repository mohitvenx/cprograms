#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "sort1.h"
int main()
{
	FILE* fr=fopen("student.csv","r");
	char a[200];
	fgets(a,200,fr);
	printf("%s",a);
	char *item;
	struct student s[100];
	int i=0;
	while(fgets(a,200,fr))
	{
		item=strtok(a,",");
		s[i].rollno=atoi(item);
		item=strtok(NULL,",");
		printf("%s\n",item);
		strcpy(s[i].name,item);
		i++;
	}
	int n=i;
	fclose(fr);
	struct student *p[100];
	init_ptr(s,p,n);
	disp(p,n);
	int ch;
	printf("enter choice\n 1.sort on rollno 2.sort on name\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: selection_sort(p,n,sort_on_roll_no);
			disp(p,n);
			break;
		case 2: selection_sort(p,n,sort_on_names);
			disp(p,n);
			break;
		default:printf("exit from the program");
		exit(0);
	}
	return 0;
}
