#include <stdio.h>
#define Max 100
struct Item
{
    char Name[50];
    int Quantity;
    float Price;
};

int main()
{
    int n;
    float total = 0;
    struct Item Items[Max];
    printf("Enter No of Items: ");
    scanf_s("%d", &n);
    if (n > Max)
    {
        printf("Too Many Items");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Item %d Name: \n", i + 1);
        scanf_s("%s", Items[i].Name, (unsigned)sizeof(Items[i].Name));
        printf("Enter Item Quantity:\n");
        scanf_s("%d", &Items[i].Quantity);
        printf("Enter Item Price: \n");
        scanf_s("%f", &Items[i].Price);
    }

    printf("\n-----Bill----\n");
    for (int i = 0; i < n; i++)
    {
        float ItemTotal = Items[i].Quantity * Items[i].Price;
        printf("%s X %d = %.2f\n", Items[i].Name, Items[i].Quantity, ItemTotal);
        total += ItemTotal;
    }
    printf("--------------------\n");

    printf("Total=%.2f", total);

    return 0;
}