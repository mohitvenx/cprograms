#include<stdio.h>
int read(int arr[],int n);        		// OR 	int read(int *arr,int n);	OR	int* read(int arr[],int n);
void display(int *arr, int n);
int main()
{
	int arr[100];
	int n;
	printf("Enter the number of elements you want to store\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	// int b[] = read(arr,n);// this throws compile-time Error. Cannot return an array
	// So change b to pointer and return type of function to pointer.
	int *b = read(arr,n);
	printf("entered elements in arr\n");
	display(arr,n);
	printf("\nElements in b\n");
	display(arr,n);	
	return 0;
}
int read(int arr[], int n) // observe return type int* 		// OR 	int read(int *arr,int n);	OR	int* read(int arr[],int n);
{ 
	int i = 0;
	while(i<n)
	{ 
		scanf("%d",&arr[i]); i++;
	}
	return arr;
}
void display(int arr[], int n)
{ 
	int i = 0;
	while(i<n)
	{ 
		printf("%d\t",arr[i]); i++;
	}
}