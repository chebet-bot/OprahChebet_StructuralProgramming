#include <stdio.h>
#include <stdlib.h>


float balance = 500.00;
int main()
{
int correctPin = 1234;

void menu_displayed();
void checkbalance();
void deposit();
void withdraw();


    int pin, attempts, choice;
    int loggedIn = 0;

    printf("=== Simulated ATM System ===\n");
    for (attempts = 1; attempts <= 3; attempts++)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin)
        {
            loggedIn = 1;
            printf("Login successful!\n");
            break;
        }
        else
        {
            printf("Wrong PIN. Attempt %d of 3.\n", attempts);
        }
    }

    if (loggedIn == 0)
    {
        printf("Too many wrong attempts \n");
    }
    do
    {
        menu_displayed();
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                checkbalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using the ATM \n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
}


void menu_displayed()
{
    printf("\n    ATM MENU    \n");
    printf("1. Check Balance \n");
    printf("2. Deposit \n");
    printf("3. Withdraw \n");
    printf("4. Exit \n");
    printf("Enter your choice: ");
}

void checkbalance()
{
    printf("Your current balance is: $%.2f\n", balance);
}


void deposit()
{
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        balance = balance + amount;
        printf("Deposit successful. New balance: %.2f\n", balance);
    }
    else
    {
        printf("Invalid amount.\n");
    }
}

void withdraw()
{
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient funds.\n");
    }
    else
    {
        balance = balance - amount;
        printf("Withdrawal successful. New balance: $%.2f\n", balance);
    }
}


