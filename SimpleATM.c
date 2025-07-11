#include <stdio.h>
#include <string.h>

int main()
{
    int Balance = 10000;
    int Add_Money;
    int Withdraw_Money;
    int Work;
    // -------Login Details-------
    char EnteredUsername[20];
    int EnteredPin;
    char CorrectUsername[] = "User";
    int CorrectPin = 1234;

    int Attempt = 0;
    int Max_Attempt = 3;
    // --------Login Loop------
    while (Attempt < Max_Attempt)
    {
        printf("Enter Username: ");
        scanf_s("%s", EnteredUsername,(unsigned int)sizeof(EnteredUsername));

        printf("Enter Pin: ");
        scanf_s("%d", &EnteredPin);

        if (strcmp(EnteredUsername, CorrectUsername)== 0 && EnteredPin == CorrectPin)
        {
            printf("Login Successful! Welcome,%s\n", CorrectUsername);
            break;
        }
        else
        {
            Attempt++;
            printf("Invalid Username or Pin.Attempt Left: %d\n", Max_Attempt);
        }
        if (Attempt == Max_Attempt)
        {
            printf("Too Many Faied Attempy.Access Blocked.\n");
            return 1;
        }
    }

    //-------ATM Operations-------
    while (1)
    {
        printf("\n1.Deposit Money\n2.Withdraw Money\n3.Check Balance\n4.Exit\n");

        printf("Enter Work: ");
        scanf_s("%d", &Work);
        switch (Work)
        {
        case 1:
            printf("Enter Amount: ");
            scanf_s("%d", &Add_Money);
            printf("Money Added\n");
            Balance = Balance + Add_Money;
            printf("Total Money: %d", Balance);

            break;
        case 2:
            printf("Enter Amount: ");
            scanf_s("%d", &Withdraw_Money);
            printf("Money Deducted\n");
            Balance = Balance - Withdraw_Money;
            printf("Total Money: %d", Balance);

            break;
        case 3:
            printf("Total Money Avaliable is %d\n", Balance);

            break;
        case 4:
            printf("Thank You for Using Our ATM");
            return 0;

            break;

        default:
            printf("Work Unable");

            break;
        }
    }

    return 0;
}