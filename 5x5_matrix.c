//TO DRAW A %x% MATRIX WHICH HAS ONLY 1, -1, 0
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int nums[50][50];
	for(int i =0;i<5;i++)
	{
		for(int j =0;j<5;j++)
		{
			if(i == 2 && j == 2)
			{
				nums[i][j] = 0;
			}
			else if (i<2 && j<2)
			{
				nums[i][j] = 1;
			}
			else if (i==2 && j==2)
			{
				nums[i][j] = 0;
			}
			else if (i>2 && j>2)
			{
				nums[i][j] = 1;	
			}
			else if(i+j <= 3)
			{
				nums[i][j] = 1;
			}
			else if (i==0 && j==4 || i==1 && j==3 || i==3 && j==1 || i==4 && j==0)
			{
				nums[i][j] = 0;
			}
			else
			{
				nums[i][j] = -1;
			}
		}
	}

	for(int i =0;i < 5;i++)
	{
		for(int j =0;j<5;j++)
		{
			printf("%d\t",nums[i][j]);
		}
		printf("\n");
	}
	return 0;
}
