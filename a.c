struct Sample
{
int a;
int *b;
};
#include<stdio.h>
int main()
{
struct Sample s;
s.a = 100;
s.b = &(s.a);
printf("s value %d %d\n",s.a,*(s.b));
struct Sample s1;
s1.a = 100;
s1.b = &(s1.a);
printf("s1 value %d %d\n",s1.a,*(s1.b));
struct Sample s2 = s1;
printf("s2 address 	%p %p\n",s1.b,s2.b);
printf("s2 value 	%d %d\n",s2.a,*(s2.b));
s2.a = 200;
printf("s2 address afer change	%p %p\n",s1.b,s2.b);
printf("s1 value 	%d %d\n",s1.a,*(s1.b));
printf("s2 value                              %d %d\n",s2.a,*(s2.b)); // very imp
*(s2.b) = 300;
printf("%p %p\n",s1.b,s2.b);
printf("%d %d\n",s1.a,*(s1.b));
printf("%d %d\n",s2.a,*(s2.b));
s2.b = &(s2.a);
*(s2.b) = 400;
printf("%p %p\n",s1.b,s2.b);
printf("%d %d\n",s1.a,*(s1.b));
printf("%d %d\n",s2.a,*(s2.b));
}