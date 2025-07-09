#include <stdio.h>
int Sum(int, int);
int Sum(int a, int b)
{
    return a + b;
}

int Sub(int, int);
int Sub(int a, int b)
{
    return a - b;
}

int product(int, int);
int Product(int a, int b)
{
    return a * b;
}
int Divide(int, int);
int Divide(int a, int b)
{
    return a/b;
}

int main()
{
    int a;
    int b;
    int choice;
    int result;
    printf("Enter a: ");
    scanf_s("%d", &a);
    printf("Enter b: ");
    scanf_s("%d", &b);
    printf("1.Sum\n2.Sub\n3.Product\n4.Divide\n");
    printf("Enter Operation: ");
    scanf_s("%d", &choice);

    switch (choice)
    {
    case 1:
        result = Sum(a, b);
        printf("Sum=%d\n", result);

        break;
    case 2:
        result = Sub(a, b);
        printf("Sub=%d\n", result);
        break;
    case 3:
        result = Product(a, b);
        printf("Product=%d\n", result);
        break;
    case 4:
        result = Divide(a, b);
        printf("Divide=%d\n", result);
        break;

    default:
        printf("Invalid Choice\n");

        break;
    }

    return 0;
}