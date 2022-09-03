#include "bookh.h"

void dataEntry(Person *person) {
    printf("Insert name: ");
    gets(person -> name);
    printf("Insert surname: ");
    gets(person -> surname);
    printf("Insert date of birth [mm/dd/yyyy]: ");
    gets(person -> date);
    printf("Insert phone number: ");
    gets(person -> number);
}



void pPerson(Person person) {
    printf("Name: %s\n", person.name);
    printf("Surname: %s\n", person.surname);
    printf("Date of birth: %s\n", person.date);
    printf("Number: %s\n\n", person.number);
}



void pAddressBook(Person *addbook[10]) {
    for (int i = 0; i < DIM; i++) {
        pPerson(addbook[i]);
    }
}