#include<stdio.h>
#include<conio.h>
int main()
{
	int num, i;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("MULTIPLICATION TABLE OF %d IS \n", num);
	for (i=1; i<=10; i++)
	{
		printf("\n %d x %d = %d", num,i,num*i);
	}
	return 0;
}
