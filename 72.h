//THIS IS HEADER FILE
typedef struct node 
{
	int priority;
 	char name[20];
 	struct node *link;
} NODE;
NODE *front; // global variable
void enqueue(char item[], int priority);
void dequeue();
void display();