//THIS IS CLIENT FILE
#include "sorting_crickect_players.h"
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	struct cricket cric[20];
 	struct cricket t;
 	int n;
 	printf("Number of players you want to enter : ");
 	scanf("%d", &n);
	fflush(stdin);
 	enter_cric(cric, n);
 	printf("\nBefore sorting");
 	print_cricket(cric, n);
 	sort_cricket(cric, n);
 	printf("\nAfter sorting");
	print_cricket(cric, n);
	return 0;
}
