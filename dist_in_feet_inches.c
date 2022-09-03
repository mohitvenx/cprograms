//TO FIND SUM OF 2 DISTANCES IN FEET AND INCHES
#include<stdlib.h> 
#include<stdio.h>
struct sum
	{int f1,i1,f2,i2;};
void display(struct sum c)
{
	int fs,is,ffs,fis,tis; 
	fs = c.f1+c.f2;
	is = c.i1+c.i2;
	tis = is;
	ffs = fs + (tis/12);
	fis = is%12;
	printf("The sum is %d' %d'' \n",ffs,fis);
}
int main()
{
	printf("1st Distance: Enter feet and inches\n"); 
	int f3,i3; 
	scanf("%d",&f3); 
	scanf("%d",&i3);
	printf("2nd Distance: Enter feet and inches\n"); 
	int f4,i4;
	scanf("%d",&f4); 
	scanf("%d",&i4); 
	struct sum c1; 
	c1.f1 = f3; c1.i1 = i3; 	
	c1.f2 = f4; c1.i2 = i4;
	display(c1); 
	return 0;
}