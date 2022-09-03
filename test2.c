#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {                // Data structure that holds contact information 
    char FirstName[10];         // Array for first name
    char LastName[10];          // Array for last name
    int PhoneNum[10];               // Phone number
};

int main() {

    // Setting up variables
    int Choice = 0;
    int n = 0;
    int size = 1;
    struct contact *con = (struct contact *)malloc(size * sizeof(struct contact));
    int a;

    do {     // Will loop through the main function until the user decides to exit the program

        // Prints out the main menu of the phone book
        printf("\nPhone Book");
        printf("\n[1] Add a contact");
        printf("\n[2] Delete a contact");
        printf("\n[3] Show contacts");
        printf("\n[4] Exit program");
        printf("\n\nWhat function would you like to use?\n");       // Asks for user input
        scanf("%d", &Choice);

        switch (Choice) {
        case 1:     // Case to add a contact into the phone book
            if (n == size)
            {
                size = size * 2;
                con = (struct contact*)realloc(con, size * sizeof(struct contact));
            }
            // Records the information given into the structure
            printf("\nYou chose to add a contact.");
            printf("\nFirst name: ");
            scanf("%9s", con[n].FirstName);
            printf("\nLast name: ");
            scanf("%9s", con[n].LastName);
            printf("\nPhone number (Numbers only): ");
            scanf("%d", con->PhoneNum);
            printf("\nRecord added to the phone book");

            // Prints out the given information
            printf("\n\nNew contact:");
            printf("\nFirst name: %s", con[n].FirstName);
            printf("\nLast name: %s", con[n].LastName);
            printf("\nPhone number: %d", con[n].PhoneNum);
            printf("\nContact number is %d", n);
            printf("\n");
            n += 1;
            break;
        case 2:     // Case to delete a contact from the phone book
            printf("\nYou chose to delete a contact.");
            printf("\nWhich contact would you like to delete? Specify by contact number ");
            scanf("%d", &a);
            if ((a < 0) || (a >= n))
            printf("\ninvalid rank of contact");
            else {
             /* if you do not have bcopy use memmove */
             memmove(&con[a+1], &con[a], (n - 1 - a) * sizeof(struct contact));
             n = n - 1;
             printf("\nContact deleted");
            }
            printf("\n");
            break;
        case 3:     // Case to see all of the entered contacts
            printf("\nYou chose to show the contacts.");
            for (a = 0; a < n; a++) {
                printf("\nContact #%d", a);
                printf("\nFirst name: %s", con[a].FirstName);
                printf("\nLast name: %s", con[a].LastName);
                printf("\nPhone number: %d", con[a].PhoneNum);
                printf("\n");
            }
            break;
        case 4:
            puts("\nGoodbye!");
            break;
        default:
            puts("\ninvalid choice");
        }
    } while (Choice != 4);
    return 0;
}