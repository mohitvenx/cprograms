// SIMPLE CALCULATOR 
#include<stdio.h>
int main()
{
	char op;
	int a,b,res;
	printf("Enter operator(+,-,*,/):\n");
	scanf("%c", &op);
	printf("Enter the 2 values:\n");
	scanf("%d %d", &a, &b);
	switch(op)
	{
	case '+':res = a+b;
		break;
	case '-':res = a-b;
		break;
	case '*':res = a*b;
		break;
	case '/':res = a/b;
		break;
	default: printf("error -INVALID OPERATOR!!\n");
	}
	printf("The result is %d", res);
	return 0;
}