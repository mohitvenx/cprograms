#include<stdio.h>
#include<string.h>
int main()
{
char a2[ ] = {'a','t','m','a'};//Initialization
printf("sizeof a2 is %d",sizeof(a2));
char a8[ ] = "at\0ma" ;
printf("\nsizeof a8 is %d\n\n",sizeof(a8));
printf("%s\n",a8);
char str2[ ] = "C class" ;
printf("%s\n", str2);// C class
str2[1] = 'C' ;
printf("%s\n", str2); // CCclass
char *p1 = "pesu";
//p1 is stored at stack. “pesu” is stored at code segment of memory. It is read only.
printf("size is %d\n", sizeof(p1));
printf("p1 is %s\n", p1) ;//pesu p1 is an address. %s prints until \0 is encountered
p1++;// Pointer may be modified to point elsewhere.
printf("\np1 is %s\n", p1) ;
//p1[1] = 'S' ;// No compile time Error
printf("p1 is %s\n", p1) ;




char a[10]="abcd";
char b[10]="abcd";
char c[10]="AbCD";
char d[10]="abD";
int i=strcmp(a,b);
int j=strcmpi(a,c); // ignore case
int k=strncmp(a,d,2); // compare only n characters , here 2
printf("first %d--cmp\t%d--cmpi\t%d--ncmp\n",i,j,k);
i=strcmp(a,d);
j=strcmpi(a,d);
k=strncmp(a,d,3);
printf("later %d--cmp\t%d--cmpi\t%d--ncmp\n",i,j,k);
char ch[] = "This is a test";
printf("present at %p\n",strchr (ch, 't'));


struct student
{ int roll_no;
char name[22];
int marks;
};
struct student ST[] = {{1, "John", 60}, {2, "Jack", 40}, {3, "Jill", 77}, {4, "Sam", 78 }, {5, "Dean", 80}};
struct student *ptr = ST; //&ST is illogical
int *p;
*p=ST;
printf("\n%d\n", *ptr); //prints 1
printf("%d\t%s\t%d\n",  ptr->roll_no, (ptr+1)->name, (ptr+2)->marks);
//printf("%d\t%s\t%d\n",  (*ptr).roll_no, (*(*ptr+1)).name, (*(*ptr+2)).marks);
//prints 1 Jack 77
ptr++; // ptr now points to ST[1]
printf("\n%d\n", *ptr);
printf("%d\t%s\t%d\n",  (*p).roll_no, (*p).name, (*p).marks);
}