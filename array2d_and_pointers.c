#include<stdio.h>
int main()
{

	int arr[4][3]={33,44,11,55,88,22,33,66,99,11,80,9};
//assigning array to a pointer
//int *p=arr; //gives warning
//printf(“%d”,p[7]); //looks fine,not a good idea.
//printf(“\n%d\n”,p[2][1]); //error..Column size not available to p.
//create a pointer to an array of integers
	int (*p)[3]=arr;
	printf("%d\n",p[2][1]);
	printf("%d\n",*(*(p+2)+1));
	printf("%d\n", sizeof(p)); 
	printf("%d %d\n",sizeof(*p),sizeof(arr)); //size of the array pointing to 0th row and size of the entire 2D array
}