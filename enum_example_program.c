#include<stdio.h>
#include<limits.h>
enum sample 
{
	abc=INT_MAX
	//abc=INT_MAX,def, ghi
	/*When second line considered overflow error as abc is max limit of int value*/
};

int main()
{
	enum sample s;
	s=abc;
	printf("%d",s);
}