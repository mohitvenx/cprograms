//To find the greater date of the entered dates(num comparison not i.e. 2001> 1999)
//THIS IS CLIENT FILE
#include<stdio.h>
#include"date_compare_header.h"
int main()
{
	date_info d1;
	date_info d2;
	printf("Enter date1 in dd/mm/yyyy\n");
	date_read(&d1);
	printf("Enter date2 in dd/mm/yyyy\n");
	date_read(&d2);
	printf("Date1= ");
	date_disp(&d1);
	printf("Date2= ");
	date_disp(&d2);
	int res = date_cmp(&d1, &d2);
	if (res==0)
		printf("Date1 and Date2 are equal\n");
	else if (res>0)
		printf("Date1 is greater than Date2\n");
	else
		printf("Date1 is lesser than Date2\n");
	return 0;
}