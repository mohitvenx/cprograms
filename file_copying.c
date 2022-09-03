/*TO COPY CONTENTS FROM ONE FILE TO ANOTHER USING 
 COMAND LINE ARGUMENTS BY GIVING >a abc.txt def.txt ON COMMAND LINE*/

#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fs,*ft;
	int ch;
	if(argc!=3)
	{
		printf("invalid number of arguments");
		return 1;
	}
	fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("can't find the source file.");
		return 1;
	}
	ft=fopen(argv[2],"w");
	if(ft==NULL)
	{
		printf("can't open the target file");
		fclose(fs);
		return 1;
	}
	while(1)
	{
		ch = fgetc(fs);
		if(feof(fs))
		break;
		fputc(ch,ft);
	}
	fclose(fs);
	return 0;
}