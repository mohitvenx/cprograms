#include "sorting_crickect_players.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void enter_cric(struct cricket s[80], int n) 
{
 	int i;
 	float p;
 	for (i = 0; i < n; i++) 
	{
 		printf("\n\nEnter data for Record #%d\n", i + 1);
 		printf("\nEnter Player Name :\n ");
 		scanf("%s", &s[i].pname);
		fflush(stdin);
 		printf("Enter Team Name :\n ");
 		scanf("%s", &s[i].tname);
		fflush(stdin);
 		printf("Enter Batting Average :\n ");
 		scanf("%f", &p);
		fflush(stdin);
 		s[i].bavg = p;
 	}
}

void sort_cricket(struct cricket s[20], int n) 
{
 	struct cricket t;
 	int i, j;
 	for (i = 0; i < n - 1; i++) 
	{
 		for (j = 0; j < (n - 1 - i); j++) 
		{
 			if (s[j].tname < s[j + 1].tname) 
			{
 				t = s[j];
 				s[j] = s[j + 1];
 				s[j + 1] = t;
 			}
 		}
 	}
}

void print_cricket(struct cricket s[20], int n) 
{
	printf("\nAfter teamwise sorting... Player list is ");
 	for (int i = 0; i < n; i++) 
	{
 		printf("\n%-20s %-20s %.2f", s[i].pname, s[i].tname, s[i].bavg);
 	}
}
