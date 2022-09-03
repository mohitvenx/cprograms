/*
#include<stdio.h>
int main()
{
	int* p;
	int x=10;
	p=&x;
	printf("%p\t",p);
	printf("p+1=%p\t",(int *)p+1);
	printf("p+1=%p",(char *)p+1);
}
*/
/*
//pointer notation
#include<stdio.h>
int main()
{
	int arr[]={11,33,44};
	int *p2=arr;
	for(int i=0; i<3; i++)
		printf("%d\t", *(p2+i));
}
*/
/*
//array notation
#include<stdio.h>
int main()
{
	int arr[]={11,33,44};
	int *p2=arr;
	for(int i=0; i<3; i++)
		printf("%d\t", &p2[i]);
}
*/
/*
//increment
#include<stdio.h>
int main()
{
	int arr[]={11,33,44};
	int *p2=arr;
	for(int i=0; i<3; i++,p2++)
		printf("%d\t", *p2);
			//for next 3 when trying remove p2++ in the for loop
		//printf("%d\t", (*p2)++); different type of increment
		//printf("%d\t", *p2++);    different type of increment
		//printf("%d\t", *++p2);    different type of increment
}
*/

#include<stdio.h>
int main()
{
	int arr[]={11,33,44};
	int *p=arr;
	printf("%p\t",p);
	p++;  
	//arr++;  This cant be given as base address of array cant be changed and if location is changed next location of element is lost
	printf("%p\t",p);
}
