//To remove repeated characters from the string 
//THIS IS SERVER FILE 
#include<stdio.h>
#include"remove_duplicate_header.h"
void remove_duplicates (char *str1)
{
	int i=0;
 	while(str1[i]!='\0')
 	{
 		 remove_all(str1,str1[i],i+1);
		i++;
 	}
}

void remove_all (char *str1,char chartoremove,int index)
{
	int i ;
 	while(str1[index]!='\0')
 	{
 		 if(str1[index] == chartoremove)
  		{
   			i=index;
  	 		while(str1[i]!='\0')
	   		{
   				 str1[i]=str1[i+1];
   				 i++;
   			}
  		}
	 	else
			index++;
 	}
}