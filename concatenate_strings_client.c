//TO CONCATENATE 2 STRINGS n TIMES
//THIS IS CLIENT FILE
#include<stdio.h>
#include"concatenate_stringsh.h"
int main() 
{ 
 	char s1[100],s2[100];  	
	int n; 
 	printf("Enter the 1st String\n");
  	scanf("%s",s1); 
 	printf("Enter the 2nd String\n");
  	scanf("%s",s2); 
 	printf("Enter the number of times you want to Append");
  	scanf("%d",&n); 
 	printf("The Concatenated String is %s\n",mystrncat(s1,s2,n));
  	return 0; 
} 
