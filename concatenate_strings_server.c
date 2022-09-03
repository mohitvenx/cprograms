//TO CHANGE GIVEN CHARCTER IN THE STRING WHEREVER IT OCCURS
//THIS IS SERVER FILE
//THIS WILL BE INCLUDED IN CLIENT FILE
#include"char_replacement_header.h"
#include<stdlib.h> 
#include<string.h> 
void replace_char (char *str1,char c1,char c2) 
{ 
	int i; 
 	for(i=0;str1[i];i++) 
 	{ 
		if(str1[i]==c1) 
	 	{ 
	 		str1[i]=c2; 
	 	} 
	} 
}