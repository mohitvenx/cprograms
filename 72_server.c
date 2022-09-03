//THIS IS SERVER FILE
#include "72.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void enqueue(char item[], int priority) 
{
	NODE *tmp;
 	tmp = (NODE *)malloc(sizeof(NODE));
 // tmp->name = item;
 	strcpy(tmp->name, item);
 	tmp->priority = priority;
 	if (front == NULL || priority < front->priority) 
	{
 		tmp->link = front;
 		front = tmp;
 	} 
	else 
	{
 		NODE *pres = front;
 		NODE *prev = NULL;
 		while (pres != NULL && pres->priority <= priority) 
		{
 			prev = pres;
 			pres = pres->link;
 		}
 		tmp->link = pres;
 		prev->link = tmp;
 	}
}

void dequeue() 
{
	NODE *tmp;
 	if (front == NULL)
 		printf("Queue Underflow\n");
 	else 
	{
 		tmp = front;
 		printf("Dequeued item is %s\n", tmp->name);
 		front = front->link;
 		free(tmp);
 	}
}

void display() 
{
	NODE *ptr;
	ptr = front;
 	if (front == NULL)
 		printf("Queue is empty\n");
 	else 
	{
 		printf("Queue is :\n");
 		printf("Name\tPriority\n");
 		while (ptr != NULL) 
		{
 			printf("%s\t%d\n", ptr->name, ptr->priority);
 			ptr = ptr->link;
 		}
 	}
}
