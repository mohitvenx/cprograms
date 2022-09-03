/*USING MATCHES.CSV FILE TO FIND
a) 	Number of matches played in 2008, 2009
b) 	to find if team which one toss won the match
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp = fopen("matches.csv", "r");
	char line[500];
	char word[500];
	if (fp==NULL)
		printf("Error in opening the file \n");
	else
	{
		int count1 = 0;
		int count2 = 0;
		while (fgets(line,500,fp)!=NULL)
		{
			char *val = strtok(line, ",");
			val = strtok(NULL,",");
			if (strcmp(val, "2009") == 0)
			{
				count1++;
			}
			val = strtok(NULL,",");
			if (strcmp(val, "Jaipur") == 0)
				count2++;
			
		}
		//fclose(fp);
		int count3 = 0;
		int count4 = 0;
		while (fgets(word,500,fp)!=NULL)
		{
			char *val = strtok(line, "\t");
			val = strtok(NULL,"\t");
			if (word[6] == word[10])
				count3++;
		}
		fclose(fp);
		printf("Number of matches in 2009 are %d\n" , count1);
		printf("Number of matches in jaipur are %d\n" , count2);
		printf("Number of matches in 2008 are %d\n" , count3);
	}

}