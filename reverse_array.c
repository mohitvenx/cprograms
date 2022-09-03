//TO REVERSE ORDER OF ARRAY ELEMENTS USING MULTIPLE FILES
//THIS IS THE SERVER FILE 
//Will BE USED IN THE CLIENT FILE 

reverse_arr(int a[], int start, int end)
{
	int temp;
	arr[10]={1,2,3,4,5,6,7,8,9,10};
	while(start<end)
	{
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		++start;
		--end;
	}
}