#include <stdio.h>
#include <errno.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
int i,sum=0;
for(i=0;i<argc;i++)
{
	sum = strlen(argv[i]);
	printf("LEN is %d", sum);
}
//printf("sum of command line arguments are %d\n",sum);
return 0;
}











//https://meet.google.com/exs-aria-tyc