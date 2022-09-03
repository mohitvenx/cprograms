#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct entry 
{
    char fname[20];
    char lname[20];
    char pnumber[20];
} entry;

// function prototypes
void addentry(int, entry**, char addfname[20], char addlname[20], char addpnumber[20]);

int main() 
{
    int selection = 0;
    int inputtest = 1;
    int pnum = 0; // keeps track of number of contacts
    char addfname[20];
    char addlname[20];
    char addpnumber[20];
    entry *pcontacts = NULL;
    for (;;) {
        do {
            printf("\nPhonebook Menu\n\n");
            printf("1:\tAdd contact\n");
            printf("2:\tDelete contact\n");
            printf("3:\tDisplay contacts\n");
            printf("4:\tExit\n");
            printf("\nChoose an action (1-4): ");
            scanf("%d", &selection);

            if (selection < 1 || selection > 4) {
                printf("Invalid input. Please enter an integer between 1 and 4.\n");
                inputtest = 0;
            }
            if (selection == 4) {
                free(pcontacts);  /* OK for NULL */
                printf("\nThank you for using this phonebook.");
                return 0;
            }
            switch (selection) {
              case 1:
                printf("\nEnter first name: ");
                scanf("%19s", addfname);
                printf("Enter last name: ");
                scanf("%19s", addlname);
                printf("Enter phone number (no spaces): ");
                scanf("%19s", addpnumber);
                addentry(pnum, &pcontacts, addfname, addlname, addpnumber);
                pnum++;
                break;
            }   
        } while (inputtest == 1);   
    }
}

/* add an entry at position pnum */
void addentry(int pnum, entry **pp, char addfname[20], char addlname[20], char addpnumber[20]) 
{
     entry *pcontacts = *pp;
     pcontacts = realloc(pcontacts, (pnum + 1) * sizeof(entry));
     if (pcontacts != NULL) 
{
         *pp = pcontacts; /* update pointer in main */
         strcpy(pcontacts[pnum].fname, addfname);
         strcpy(pcontacts[pnum].lname, addlname);
         strcpy(pcontacts[pnum].pnumber, addpnumber);
         printf("\nContact has been added.");
     } else {
         printf ("No memory is available.\n");
     }
}



