/*#include <stdio.h>
int main () {
 FILE *fp;
 fp = fopen("Cdocs.txt", "w+");
 fputs("This is c programming.\n", fp);
 fputs("This is a system programming language.", fp);
 fclose(fp);
 return(0);
}
*/
/*
#include <stdio.h>
#define MAX 15
int main()
{
 char buf[MAX];
 fgets(buf, MAX, stdin);
 printf("string is: %s\n", buf);
 return 0;
}
*/

/*
#include<stdio.h>
 int main(){
 /* Opening file in read mode */
 FILE *fp = fopen("Cdocs.txt","r");
 printf("%ld\n", ftell(fp)); // Printing position of file pointer
 /* Reading first string */
 char string[20];
 fscanf(fp,"%[^\n]s",string);
fflush(fp);
 /* Printing position of file pointer again */
 printf("%ld", ftell(fp));
 return 0;
}*/


#include <stdio.h>
union car
{ //Assumptions
char name[10]; // 1 byte for char
float price; // 4 bytes for float
};
int main( )
{
union car c;
printf( "Memory size occupied by data in bytes : %d\n", sizeof(c));
return 0;
}
