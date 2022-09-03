#include "bookh.h"

int main(void) {
    Person* addbook = (Person*) malloc(DIM*sizeof(Person));
    printf("DATA ENTRY\n\n");
    for (int i = 0; i < DIM; i++) {
        printf("Person %d:\n", i);
        dataEntry(&addbook[i]);
    }
    printf("\n\nPRINTING ADDRESS BOOK...\n\n");
    pAddressBook(addbook);
    return 0;
}