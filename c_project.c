//PHONEBOOK APPLICATION USING C PROGRAMMING 
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct person
{
	char name[50];
	char address[100];
	char father_name[50];
	char mother_name[50];
	long long int mble_no;
	char sex[8];
	char mail[100];
	char citision_no[20];
};
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();
int main()
{
	system("color 0f");
	start();
	return 0;
}
void back()
{
	start();
}
void start()
{
	menu();
}
void menu()
{
	system("cls");
	printf("\t\t\t\t\t**********WELCOME TO PHONEBOOK*************\n");
	printf("\n\t\t\t\t\t\t\t MENU\t\t\n\n");
	printf("\t\t\t\t\t1.Add New   \t2.List   \t3.Exit  \n\t\t\t\t\t4.Modify \t5.Search\t6.Delete\n Enter one of the options given above to start\n \t\t\tOR\n Press any key to start!");

	switch(getch())
	{
    	case '1': addrecord();
    		break;
	case '2': listrecord();
		break;
	case '3': exit(0);
		break;
	case '4': modifyrecord();
		break;
	case '5': searchrecord();
		break;
	case '6': deleterecord();
		break;
	default:
		system("cls");
	printf("\nENTER NUMBER BETWEEN 1 AND 6 DEPENDING ON THE OPTIONS THAT WERE SHOWN\n");
                     printf("\n ENTER THE KEY:\n ");
                     getch();
	menu();
	}
}
void addrecord()
{
	system("cls");
	FILE *f;
        	struct person p;
        	f=fopen("project","ab+");
        	printf("\n Enter name: ");
        	got(p.name);
        	printf("\nEnter the address: ");
        	got(p.address);
        	printf("\nEnter father name: ");
        	got(p.father_name);
        	printf("\nEnter mother name: ");
        	got(p.mother_name);
	fflush(stdin);
        	printf("\nEnter phone no.:");
        	scanf("%lld", &p.mble_no);
        	printf("Enter sex:");
        	got(p.sex);
        	printf("\nEnter e-mail:");
        	 got(p.mail);
        	printf("\nEnter aadhar no:");
        	got(p.citision_no);
        	fwrite(&p,sizeof(p),1,f);
      	fflush(stdin);
        	printf("\nrecord saved");
	fclose(f);

    	printf("\n\nEnter any key");

	 getch();
    	system("cls");
    	menu();
}
void listrecord()
{
	struct person p;
	FILE *f;
	f=fopen("project","rb");
	if(f==NULL)
	{
		printf("\nNo list available!! Select option one to add entries! ");

		exit(1);
	}
	while(fread(&p,sizeof(p),1,f)==1)
	{
		printf("\n\n\n YOUR RECORD IS\n\n ");
		printf("\nName = %s\nAddress = %s\nFather name = %s\nMother name = %s\nMobile no = %lld\nSex = %s\nE-mail = %s\nCitizen no = %s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);

		 getch();
	 	system("cls");
	}
	fclose(f);
 	printf("\n Enter any key to go back to home page!!\n");
	getch();
    	system("cls");
	menu();
}
void searchrecord()
{
	struct person p;
	FILE *f;
	char name[100];

	f=fopen("project","r");
	if(f==NULL)
	{
		printf("\n No data available to search!! Select option one to add entries!\n\a\a\a\a");
		exit(1);

	}
	printf("\nEnter name of person to search\n");
	got(name);
	while(fread(&p,sizeof(p),1,f)==1)
	{
		if(strcmp(p.name,name)==0)
    		{
        			printf("\n\tDetail Information About %s",name);
			printf("\nName: %s\naddress: %s\nFather name: %s\nMother name: %s\nMobile no: %lld\nsex: %s\nE-mail: %s\nCitision no: %s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);
    		}
		else
			printf("\n\n No file with %s as name exists\n", name);
	}
	fclose(f);
	printf("\n\n Enter any key to go back to home page!!\n");

	 getch();
	system("cls");
	menu();
}
void deleterecord()
{
	struct person p;
	FILE *f,*ft;
	int flag;
	char name[100];
	f=fopen("project","rb");
	printf("ENTER ANY CONTACT TO DELETE ALL RECORDS IN THE PHONE BOOK\n"); 
	if(f==NULL)
		{

			printf("CONTACT'S DATA WITH NAME %s IS NOT ADDED YET");

		}
	else
	{
		ft=fopen("temp","wb+");
		if(ft==NULL)

			printf("file opening error");
		else
        		{
			printf("Enter CONTACT'S NAME:");
			got(name);
			fflush(stdin);
			while(fread(&p,sizeof(p),1,f)==1)
			{
				if(strcmp(p.name,name)!=0)
					fwrite(&p,sizeof(p),1,ft);
				if(strcmp(p.name,name)==0)
               					 flag=1;
			}
	fclose(f);
	fclose(ft);
	if(flag!=1)
	{
		printf("\nNO CONACT'S RECORD TO DELETE.");
		remove("temp.txt");
	}
		else
		{
			remove("project");
		//	rename("temp.txt","project");
			printf("RECORD DELETED SUCCESSFULLY.");

		}
	}
}
printf("\n\n Enter any key to go back to home page!!\n");

	 getch();
    system("cls");
menu();
}

void modifyrecord()
{
	int c;
    	FILE *f;
    	int flag=0;
    	struct person p,s;
	char  name[50];
	f=fopen("project","rb+");
	if(f==NULL)
		{

			printf("CONTACT'S DATA NOT ADDED YET.");
			exit(1);


		}
	else
	{
	    system("cls");
		printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
            got(name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(name,p.name)==0)
                {
                 		printf("\n Enter name:");
		got(s.name);
                    		printf("\nEnter the address:");
                    		got(s.address);
                    		printf("\nEnter father name:");
                    		got(s.father_name);
                    		printf("\nEnter mother name:");
                    		got(s.mother_name);
                    		printf("\nEnter phone no:");
                    		scanf("%lld", &s.mble_no);
                    		printf("\nEnter sex:");
                    		got(s.sex);
                    		printf("\nEnter e-mail:");
                    		got(s.mail);
                    		printf("\nEnter citizen no\n");
                    		got(s.citision_no);
                    		fseek(f,-sizeof(p),SEEK_CUR);
                    		fwrite(&s,sizeof(p),1,f);
                    		flag=1;
                    		break;
                }
                fflush(stdin);
            }
            if(flag==1)
            {
	printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
	}
	 printf("\n\n Enter any key to go back to home page!!\n");
	 getch();
    system("cls");
	menu();

}
void got(char *name)
{
	int i=0,j;
    	char c,ch;
    	do
    	{
        	c=getch();
     	if(c!=8&&c!=13)
     	{
                    		*(name+i)=c;
                        	putch(c);
                        	i++;
                	}
                	if(c==8)
                	{
                    		if(i>0)
                    		{
                        		i--;
                    		}
                    		system("cls");
                    		for(j=0;j<i;j++)
                    		{
			ch=*(name+j);
                        		putch(ch);
                    		}
                     }
	}
	while(c!=13);
      		*(name+i)='\0';
}
