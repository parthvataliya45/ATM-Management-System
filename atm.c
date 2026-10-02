#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int choice;
    float balance = 5000.00;
    float amount;
    int newPin;

    printf("===== ATM MANAGEMENT SYSTEM =====\n");

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Incorrect PIN.\n");
        return 0;
    }

    while (1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance += amount;
                    printf("Money deposited successfully.\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance -= amount;
                    printf("Please collect your money.\n");
                    printf("Remaining Balance = Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("Enter new PIN: ");
                scanf("%d", &newPin);

                pin = newPin;
                printf("PIN changed successfully.\n");
                break;

            case 5:
                printf("Thank you for using the ATM.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
