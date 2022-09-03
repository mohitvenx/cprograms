//TO CHECK IF BIT IS SET OR NOT
#include<stdio.h>
int main()
{
	unsigned int c;
	int i, j, k;
	printf("Enter the number:\n ");
	scanf("%d",&c);
	printf("Enter the bit to check:\n ");
	scanf("%d",&i);
	if (c & (1<<i))
	{
		printf("Bit is set\n");
	}
	else
	{
		printf("Bit is not set\n");
	}
	//set a bit
	printf("Enter the bit to set:\n ");
	scanf("%d",&j);
	c = c | (1<<i);
	printf("%u\n", c);
	//clear a bit
	printf("Enter the set bit you want to clear:\n");
	scanf("%d",&k);
	c = c^(1<<k);
	printf("The number after clear is %u\n", c);
	return 0;
}
	