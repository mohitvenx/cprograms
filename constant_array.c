#include<stdio.h>
void display(const int *,int);//prototype
int main()
{
	int number[]={22,55,66,77,88};
	display(number,5);
	return(0);
}
void display(const int *num, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\t",num[i]);
	}
	//num[1]=100 ;//compiler error
}