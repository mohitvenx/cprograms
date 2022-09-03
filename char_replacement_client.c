//THIS IS CLIENT FILE
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include"char_replacement_header.h"
int main() 
{ 
 	char str1[500], c1, c2;  
	printf("Enter the String:\n ");
	scanf("%[^\n]s",str1);
  	fflush(stdin); 
 	printf("Enter a character to replace:\n ");  	
	scanf("%c", &c1); 
	fflush(stdin); 
 	printf("Enter a character to replace with:\n ");  	
	scanf("%c", &c2);  	
	replace_char (str1, c1, c2); 
 	printf("String after Replacing %s\n", str1);  	
	return 0; 
} 
