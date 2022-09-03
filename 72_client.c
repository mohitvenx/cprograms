//THIS IS CLIENT FILE 
#include "72.h"
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	front = NULL;
 	int choice, priority;
 	char item[20];
 	do 
	{
 		printf("\n\n1.EnQueue\n");
 		printf("2.Dequeue\n");
 		printf("3.Display\n");
 		printf("4.Quit\n");
 		printf("Enter your choice : ");
 		scanf("%d", &choice);
 		switch (choice) 
		{
			case 1:
 				printf("Input the item name to be added in the queue : ");
 				scanf("%s", item);
 				printf("Enter its priority : ");
 				scanf("%d", &priority);
 				enqueue(item, priority);
 				break;
 			case 2:
 				dequeue();
 				break;
 case 3:
 display();
 break;
 case 4:
 exit(0);
 // break;
 default:
 printf("Wrong choice\n");
 }
 } while (choice != 4);
 return 0;
}
