//THIS IS HEADER FILE 
typedef struct date
{
	int dd;
	int mm;
	int yy;
}date_info;
int date_cmp(const date_info *d1, const date_info *d2);
int date_disp(const date_info *d);
void date_read(const date_info *d);
 