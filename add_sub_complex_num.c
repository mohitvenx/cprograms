//TO FIND SUM AND DIFFERENCE OF 2 COMPLEX NUMBERS 
#include<stdlib.h>
#include<stdio.h>
struct complex
{
	int real1;
	int imaginary1;
	int real2;
	int imaginary2;
};
void display(struct complex c )
{
	int realsum;
	int imaginarysum;
	realsum = c.real1 + c.real2;
	imaginarysum = c.imaginary1 + c.imaginary2;
	printf("The sum is %d + i%d \n",realsum,imaginarysum);
	int realdifference;
	int imaginarydifference;
	realdifference = c.real1 - c.real2;
	imaginarydifference = c.imaginary1 - c.imaginary2;
	if (imaginarydifference < 0)
	{
		printf("The difference is %d%di\n",realdifference,imaginarydifference);
	}
	else 
		printf("The difference is %d + %di\n",realdifference,imaginarydifference);
}


int main()
{
	printf("For the first complex number,enter the real and imaginary parts\n");
	int real3;
	int imaginary3;
	scanf("%d",&real3);
	scanf("%d",&imaginary3);
	printf("For the second complex number,enter the real and imaginary parts\n");
	int real4;
	int imaginary4;
	scanf("%d",&real4);
	scanf("%d",&imaginary4);
	struct complex c1;
	c1.real1 = real3;
	c1.imaginary1 = imaginary3;
	c1.real2 = real4;
	c1.imaginary2 = imaginary4;
	display(c1);
	return 0;
}