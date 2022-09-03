//THIS IS SERVER FILE
#include<stdio.h>
#include"counting_char_header.h"
int strl (char *s)
{
	int b;
	for (b=0;s[b];b++);
	return b;
}
void total(char *s)
{
	int a,b,sum=0,n;
	n=strl(s);
	printf("The frequency of every char in string is :\n");
	for (a=0;a<n;a++)
	{
		sum=1;
		if(s[a])
		{
			for(b=a+1;b<n;b++)
			{
				if(s[a]==s[b])
				{
					sum=sum+1;
					s[b]='\0';
				}
			}	
			printf("%c  = %d\n",s[a],sum);
		}
	}
}