/*
#include<stdio.h>
struct testing
{ 
	int a; 
	float b;
	char c;
};
int main()
{ 
	struct testing s1 = {44,4.4, 'A'}; 
	struct testing s2 = s1;
	s1.a = 55;
	printf("%d\n",*s1.a);
	printf("%d\n",*s2.a); 
	return 0;
}
*/

/*
#include<stdio.h>
struct player
{ 
	int id;
	char name[20];
};
void read(struct player *p1);
void disp(struct player p1);
int main()
{
	struct player p;
	printf("Enter id and name\n");
	read(&p); 
	disp(p); // passing &p to read()   / / Think, can we also pass &p to disp(). Is there any harm? NO HARM 
	return 0;
}

void read(struct player *p1)
{
	scanf("%d ", &(p1->id)); // or &((*p1).id) // user enters 20 
	scanf("%[^\n]s", p1->name); // abc entered
}
void disp(struct player p1)
{
	printf("%d ",p1.id); // actual values will be printed. 
	printf("%s",p1.name);
}
*/

//TO RETURN STRUCTURE VARIABLE
#include<stdio.h>
#include<string.h>
struct player
{ 
	int id; 
	char name[20]; 
}; 
struct player modify(struct player);
int main()
{
	struct player p1={20,"sachin"}; 
	printf("before change %s\n",p1.name); 
	p1=modify(p1);
	printf("after change %s",p1.name); 
	return 0;
}

struct player modify(struct player p)
{
	strcpy(p.name,"MOHIT" );
	return p;
}

