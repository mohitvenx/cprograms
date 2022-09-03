//program to compare 2 dates and print appropriate message using structures
//THIS IS SERVER FILE 
#include<stdio.h>
#include"date_compare_header.h"
int date_cmp(const date_info *d1, const date_info *d2);
void date_read(const date_info *d)
{
	scanf("%d/%d/%d", &d->dd, &d->mm, &d->yy);
}

int date_cmp(const date_info *d1, const date_info *d2)
{
	int res;
	if (d1->dd  == d2->dd && d1->mm == d2->mm && d1->yy == d2->yy)
		res=0;
	else if (d1->yy > d2->yy || d1->yy == d2->yy && d1->mm > d2->mm || d1->yy == d2->yy && d1->mm == d2->mm && d1->dd > d2->dd )
		res = 1;
	else
		res = -1;
	return res;
}
int date_disp(const date_info *d)
{
	printf("%d/%d/%d\n", d->dd, d->mm, d->yy);
}
