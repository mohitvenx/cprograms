//TO FIND IF DD/MM/YY IS VALID AND TO PRINT NEXT DD/MM/YY
#include<stdio.h>
int main()
{
	int dd, mm, yy, max1;
	printf("Enter date:\n");
	scanf("%d", &dd);
	printf("Enter month:\n");
	scanf("%d", &mm);
	printf("Enter year:\n");
	scanf("%d", &yy);

	if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12 )
		max1=31;
	else if (mm==4||mm==6||mm==9||mm==11)
		max1=30;
	else if (yy%400==0 ||(yy%4==0 && yy%100!=0))
		max1=29;
	else
	{
		max1=28;
	}
	//To check if entered dd,mm,yy is valid or not
	if (mm<1 || mm>12)
		printf("INVALID MONTH!!\n");
	else if (dd<1 || dd>max1)
		printf("INVALID DATE!!\n");
	else if (dd==max1 && mm!=12)
	{
		dd=1;
		mm=mm+1;
		printf("date is valid and next date is: %d-%d-%d",dd,mm,yy);		
	}
	else if (dd==31 && mm==12)
	{
		dd=1;
		mm=1;
		yy=yy+1;
		printf("date is valid and next date is: %d-%d-%d ", dd,mm,yy);
	}
	else
	{
		dd=dd+1;
		printf("date is valid and next date is: %d-%d-%d ", dd,mm,yy);
	}
	return 0;
}