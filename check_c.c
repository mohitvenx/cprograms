#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define FILENAME "PHONEBOOK.PHN"
/* structure of PhoneBook datatype */
struct PhoneBook
{
char name[100];
char address[200];
int phoneNo;
char email[100];
};
void mainMenu(); /*display main menu*/
void addContact(FILE *fp); /*add new contact*/
void readContacts(FILE *); /*read contacts from file*/
void deleteContact(FILE *); /*delete contacts from file*/
void modifyContact(FILE *); /*modify contacts from file*/
PhoneBook basicDetails(char[]); /*takes input for one contact object*/
void searchContact(FILE *); /*search contact from file*/
int checkForMatch(char[],char[]); /*helper method for searchContact()*/
void menuDesign(char[]); /*display header */
void showMessage(char[]); /*display message*/
void pressForMainMenu(); /* returns to main menu */
void fileOpen(FILE *);
void fileClose(FILE *);
int main()
{
system("cls");
mainMenu();
}
void mainMenu()
{
	printf("\n\n\n\n\n\t\tLOADING . PLEASE WAIT....");
	FILE *fp;
	fp=fopen(FILENAME,"rb+");
	if(fp==NULL)
	{
		fp=fopen(FILENAME,"wb+");
		if(fp==NULL)
		{
		printf("CANNOT OPEN THE FILE");
		}
	}
	system("cls");
	int choise;
	char ch;
	int result;
	printf("\n\n");
	menuDesign("PHONEBOOK MANAGEMENT SYSTEM");
	printf("\n\t\t1. ADD NEW CONTACT");
	printf("\n\t\t2. VIEW ALL CONTACTS");
	printf("\n\t\t3. SEARCH CONTACTS");
	printf("\n\t\t4. MODIFY CONTACTS");
	printf("\n\t\t5. DELETE CONTACT");
	printf("\n\t\t6. EXIT");
	printf("\n\n\n\t\t ENTER YOUR CHOISE : ");
	fflush(stdin);
	ch=getche();
	system("cls");
	switch(ch){
		case '1' :
			addContact(fp);
			break;
		case '2':
			readContacts(fp);
			break;
		case '3':
			searchContact(fp);
			break;
		case '4':
			modifyContact(fp);
			break;
		case '5':
			deleteContact(fp);
			break;
		case '6':
			exit(0);
			break;
		default:
			 system("cls");
			 showMessage("ERROR !! PRESS 1-6 ONLY");
			 pressForMainMenu();
			 getch();
	}
}
void searchContact(FILE *fp){
menuDesign("SEARCH CONTACT");
PhoneBook ph;
int result;
int count=0;
char item[50];
printf("\n\t\tEnter Some text to be Searched : ");
scanf("%s",&item);
while(fread(&ph,sizeof(ph),1,fp)==1){
result=checkForMatch(ph.name,item);
if(result==1){
count++;
printf("\n \t\t Name : %s \n\t\t Address : %s \n\t\t E-Mail
:%s\n\t\t Phone No %d \n\n",ph.name,ph.address,ph.email,ph.phoneNo);
}
}
fclose(fp);
if(count==0)
printf("\n\t\tNothing found for Name : %s",item);
else
printf("\n\t\tTotal %d no of Contact(s) found for : %s",count,item);
pressForMainMenu();
}
 int checkForMatch(char a[],char b[])
 {
int i,k;
char *p,temp[strlen(b)];
if(strlen(a)>=strlen(b)){
for(i=0;i<=(strlen(a)-strlen(b));i++)
 {
p=&a[i];
k=0;
while(k!=strlen(b))
{
 temp[k]=*(p+k);
 k++;
}
temp[k]='\0';
//printf("\nOriginal : %s ~~~~~ Temp : %s\n",b,temp);
if(strcmp(strupr(temp),strupr(b))==0)
{
return 1;
}
}
}

return 0;
 }
PhoneBook basicDetails(char level[200]){
PhoneBook ph;
menuDesign(level);
printf("\n\t\tEnter Name : ");
scanf("%s",&ph.name);
printf("\n\t\tEnter Address : ");
scanf("%s",&ph.address);
printf("\n\t\tEnter E-Mail : ");
scanf("%s",&ph.email);
printf("\n\t\tEnter phoneNo : ");
scanf("%d",&ph.phoneNo);
return ph;
}
void addContact(FILE *fp){
char another='Y';
PhoneBook ph;
while((another=='Y')||(another=='y')){
system("cls");
ph=basicDetails("ADD NEW CONTACT");
fseek(fp,0,SEEK_END);
fwrite(&ph,sizeof(ph),1,fp);
printf("\n\n\t\t-------------------------------------------------");
printf("\n\t\tAdded Successfully");
printf("\n\n\t\t-------------------------------------------------");
printf("\n\n\t\tWant to add Another Contact ( Y / Any Key ) : ");
fflush(stdin);
another=getche();
 }

if(another!='Y'||(another!='y')){
fclose(fp);
system("cls");
mainMenu();
 }
}
void readContacts(FILE *fp){
int count=0;
char keyPress;
rewind(fp);
PhoneBook ph;
menuDesign("ALL CONTACTS");
while(fread(&ph,sizeof(ph),1,fp)==1){
count++;
printf("\n \t\t Name : %s \n\t\t Address : %s \n\t\t E-Mail :%s\n\t\t
Phone No : %d \n\n",ph.name,ph.address,ph.email,ph.phoneNo);
}
if(count==0){
showMessage("Nothing To Display ..... ");
}
fclose(fp);
pressForMainMenu();
}
void deleteContact(FILE *fp){
system("cls");
menuDesign("DELETE CONTACT");
PhoneBook ph;
FILE *temp;
int count=0;
char name[50];
temp=fopen("TEMP.DAT","wb+");
printf("\n\t\tEnter Contant Name to Delete : ");
scanf("%s",&name);
rewind(fp);
while(fread(&ph,sizeof(ph),1,fp)==1){
if(strcmp(strupr(ph.name),strupr(name))!=0){
fwrite(&ph,sizeof(ph),1,temp);
}else{
count++;
}
}
fclose(fp);
fclose(temp);
remove ( FILENAME ) ;
rename ( "TEMP.DAT", FILENAME ) ;
fp = fopen ( FILENAME, "rb+" ) ;
printf("\n\n\t\t-------------------------------------------------");
if(count!=0)
printf("\n\t\tDeleted Successfully");
else
printf("\n\t\tNo entry found with Name : %s",name);
printf("\n\n\t\t-------------------------------------------------");
fclose(fp);
pressForMainMenu();
}
void modifyContact(FILE *fp){
system("cls");
menuDesign("MODIFY CONTACT DETAILS");
rewind(fp);
int count=0;
PhoneBook ph;
char name[50];
printf("\n\t\tEnter Name to be Modified : ");
scanf("%s",&name);
while(fread(&ph,sizeof(ph),1,fp)==1){
if(strcmp(strupr(ph.name),strupr(name))==0){
count++;
ph=basicDetails("MODIFY CONTACT ");
fseek(fp,-sizeof(ph),SEEK_CUR) ;
fwrite(&ph,sizeof(ph),1,fp);
break;
}
}
printf("\n\n\t\t-------------------------------------------------");
if(count!=0)
printf("\n\t\tModified Successfully");
else
printf("\n\t\tNo entry found with Name : %s",name);
printf("\n\n\t\t-------------------------------------------------");
fclose(fp);
pressForMainMenu();
}
void menuDesign(char topic[]){
char *pattren;
printf("\n\t\t=============================");
printf("\n\t\t%s",topic);
printf("\n\t\t=============================\n\n");
}
void showMessage(char message[]){
printf("\n\t\t----------------------------------------------");
printf("\n\t\t%s",message);
printf("\n\t\t----------------------------------------------");
}
void pressForMainMenu(){
char keyPress;
printf("\n\n\t\tPress Any Key For Main Menu ... ");
keyPress=getche();
if(keyPress!=' ')
system("cls");
mainMenu();
}