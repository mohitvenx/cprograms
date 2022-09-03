struct student
{
int rollno;
char name[20];
};
void init_ptr(struct student s[],struct student* p[],int n);
void disp(struct student* p[],int n);
int sort_on_roll_no(struct student* s1,struct student* s2);
int sort_on_names(struct student* s1,struct student* s2);
void swap(struct student** lhs,struct student** rhs);
void selection_sort(struct student* p[],int n,int (*comp)(struct student *s1,struct student *s2));