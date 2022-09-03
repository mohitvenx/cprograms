//TO FIND THE MAX AND MIN IN THE GIVEN ARRAY 
#include<stdio.h>
int main()
{
	int a[100],n,min,max;
	printf("Input the number of elements to be stored in the array :");
	scanf("%d",&n);
	printf("Input %d elements in the array :",n);
	for (int i =0;i <n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(int i=1; i<n; i++)
	{
		if(min>a[i])
			min=a[i];   
		if(max<a[i])
			max=a[i];       
    	}
     	printf("minimum of array is : %d",min);
          	printf("\nmaximum of array is : %d",max);
	return 0;
}