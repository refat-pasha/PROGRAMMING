#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct guest {
    char name[50];
    int roomNumber;
    char checkInTime[10];
    struct guest *next;
};

struct guest *head = NULL;

void addGuest() {
    struct guest *newGuest = (struct guest *)malloc(sizeof(struct guest));
    printf("Enter guest name: ");
    getchar();
    fgets(newGuest->name, sizeof(newGuest->name), stdin);
    newGuest->name[strcspn(newGuest->name, "\n")] = '\0';

    printf("Enter room number: ");
    scanf("%d", &(newGuest->roomNumber));

    printf("Enter check-in time: ");
    scanf("%s", newGuest->checkInTime);

    newGuest->next = NULL;

    if (head == NULL) {
        head = newGuest;
    } else {
        struct guest *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newGuest;
    }

    printf("Guest added successfully.\n");
}

void displayGuests() {
    if (head == NULL) {
        printf("No guests found.\n");
    } else {
        struct guest *temp = head;
        printf("Guests:\n");
        while (temp != NULL) {
            printf("Name: %s, Room Number: %d, Check-in Time: %s\n", temp->name, temp->roomNumber, temp->checkInTime);
            temp = temp->next;
        }
    }
}

void searchGuest() {
    if (head == NULL) {
        printf("No guests found.\n");
    } else {
        int roomNumber;
        printf("Enter room number to search for guest: ");
        scanf("%d", &roomNumber);

        struct guest *temp = head;
        while (temp != NULL) {
            if (temp->roomNumber == roomNumber) {
                printf("Guest found:\n");
                printf("Name: %s, Room Number: %d, Check-in Time: %s\n", temp->name, temp->roomNumber, temp->checkInTime);
                return;
            }
            temp = temp->next;
        }

        printf("Guest with room number %d not found.\n", roomNumber);
    }
}

void checkoutGuest() {
    if (head == NULL) {
        printf("No guests found.\n");
    } else {
        int roomNumber;
        printf("Enter room number to check out guest: ");
        scanf("%d", &roomNumber);

        struct guest *temp = head;
        struct guest *prev = NULL;
        while (temp != NULL) {
            if (temp->roomNumber == roomNumber) {
                if (prev == NULL) {
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                free(temp);
                printf("Guest with room number %d checked out successfully.\n", roomNumber);
                return;
            }
            prev = temp;
            temp = temp->next;
        }

        printf("Guest with room number %d not found.\n", roomNumber);
    }
}

void calculateOccupancy() {
    if (head == NULL) {
        printf("No guests found.\n");
    } else {
        int count = 0;
        struct guest *temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        printf("Number of guests currently staying: %d\n", count);
    }
}

void displayMenu() {
    printf("\n--- Hotel Management System ---\n");
    printf("1. Add Guest\n");
    printf("2. Display Guests\n");
    printf("3. Search Guest\n");
    printf("4. Check-out Guest\n");
    printf("5. Calculate Occupancy\n");
    printf("6. Exit\n");
}

int main() {
    int choice;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addGuest();
                break;
            case 2:
                displayGuests();
                break;
            case 3:
                searchGuest();
                break;
            case 4:
                checkoutGuest();
                break;
            case 5:
                calculateOccupancy();
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    // Free allocated memory before exiting
    struct guest *temp = head;
    while (temp != NULL) {
        struct guest *next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}
