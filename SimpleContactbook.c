#include <stdio.h>
struct Contact
{
    char name[20];
    char phone[15];
};
struct Contact contacts[5];
int ContactsCount = 0;
void addContact()
{
    printf("Enter name: ");
    scanf_s("%19s", contacts[ContactsCount].name,(unsigned)sizeof(contacts[ContactsCount].name));

    printf("Enter Phone: ");
    scanf_s("%14s", contacts[ContactsCount].phone,(unsigned)sizeof(contacts[ContactsCount].phone));
    ContactsCount++;
}
void displaycontacts()
{
    printf("\nAll Contacts:\n");
    for (int i = 0; i < ContactsCount; i++)
    {
        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

int main()
{
    int Choice;
    while (1)
    {
        printf("\n1.Add Contacts\n2.View Contacts\n3.Exit\nEnter Choice!: \n");
        scanf_s("%d", &Choice);
        if (Choice == 1)
        {
            addContact();
        }
        else if (Choice == 2)
        {
            displaycontacts();
        }
        else if (Choice == 3)
        {
            break;
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}