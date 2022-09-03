#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct person {
    char name[40];
    char surname[40];
    char date[11];
    char number[11];
};

typedef struct person Person;

void dataEntry(Person *person);
void printPerson(Person *person);
void printAddressBook(Person *addbook);

int main(void) {
    
    int DIM;
    printf("Enter no.of entries");
    scanf("%d", DIM);
    Person* addbook = calloc (DIM, sizeof(Person)); /* calloc initializes all storage */
    printf("DATA ENTRY\n\n");
    for (int i = 0; i < DIM; i++) {
        printf("Person %d:\n", i);
        dataEntry(&addbook[i]);
    }
    printf("\n\nPRINTING ADDRESS BOOK...\n\n");
    printAddressBook(addbook);
    if (addbook) free (addbook);
    return 0;
}

/* get string input using getline and write to 'string' */
void getinput (char *string)
{
    ssize_t read = 0;                   /* values to use with getline       */
    char *line = NULL;                  /* forces getline to allocate mem   */
    size_t n = 0;                       /* bytes to read, 0 no-limit        */
    read = getline (&line, &n, stdin);  /* read from stdin with getline     */
    if (line[read - 1] == '\n')         /* if newline at end of line        */
        { line[read - 1] = 0; read--; } /* strip newline                    */
    strncpy (string, line, read);       /* copy line w/o linefeed to string */
    if (line) free (line);              /* free memory allocated by getline */
}

void dataEntry(Person *person) {
    printf("Insert name: ");
    getinput (person -> name);
    printf("Insert surname: ");
    getinput (person -> surname);
    printf("Insert date of birth [mm/dd/yyyy]: ");
    getinput (person -> date);
    printf("Insert phone number: ");
    getinput (person -> number);
}

void printPerson(Person *person) {
    printf("Name    : %s\n", person -> name);
    printf("Surname : %s\n", person -> surname);
    printf("D.O.B.  : %s\n", person -> date);
    printf("Number  : %s\n\n", person -> number);
}

void printAddressBook(Person *addbook) {
    for (int i = 0; i < DIM; i++) {
        printPerson(&addbook[i]);
    }
}