#include <stdio.h>

int main()
{
    int not_Prime = 0;
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        not_Prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_Prime = 1;
                break;
            }
        }
    }
    if (not_Prime)
    {
        printf("%d is not Prime", n);
    }
    else
    {
        printf("%d is Prime", n);
    }

    return 0;
}