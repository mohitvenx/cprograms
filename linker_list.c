
//LINKED LIST: linear data structure
//it consists of 0 or more nodes 
//each node has 2 fields: data and pointer field
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void printlist(struct node* n);
int main()
{
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=100;
	head->next=second;
	second->data=200;
	second->next=third;
	third->data=300;
	third->next=NULL;
	printlist(head);
}
void printlist(struct node* n)
{
	while(n!=NULL)
	{
		printf("%d ", n->data);
		n=n->next;
	}
}





























	