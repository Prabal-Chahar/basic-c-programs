#include <stdio.h>

int main()
{
    int not_even = 0;
    int not_odd = 1;
    int n;
    printf("Enter n: ");
    scanf_s("%d", &n);
    if (n % 2 == 1)
    {
        not_even = 1;
    }

    if (not_even)
    {
        printf("%d is Odd", n);
    }
    else
    {
        printf("%d is Even", n);
    }

    return 0;
}