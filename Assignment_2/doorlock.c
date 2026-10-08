// Task 1: PIN-Based Door Lock System
#include <stdio.h>
#include <string.h>
#include <unistd.h>  

int main() {
    char correctPin[] = "1234";
    char inputPin[20];
    int attempts = 3;
    int accessGranted = 0;

    while (attempts > 0) {
        printf("Enter your PIN: ");
        scanf("%s", inputPin);

        int len = strlen(inputPin);
        if (len < 4) {
            printf("PIN is too short (must be 4 digits)\n");
        } else if (len > 4) {
            printf("PIN is too long (must be 4 digits)\n");
        } else {
            printf("PIN is exactly 4 digits\n");
        }

        if (strcmp(inputPin, correctPin) == 0) {
            accessGranted = 1;
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Incorrect PIN. Attempts remaining: %d\n\n", attempts);
            }
        }
    }

    if (accessGranted) {
        int choice;
        printf("\n=== Device Menu ===\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Access granted. Door unlocked\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } else {
        printf("\nSystem locked! Wait for 5 seconds...\n");
        for (int i = 5; i >= 1; i--) {
            printf("%d...\n", i);
            sleep(1); 
        }
        printf("You can try again now.\n");
    }

    return 0;
}
