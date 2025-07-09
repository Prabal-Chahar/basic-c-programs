#include <stdio.h>

int main()
{
    float Weight;
    float Height;
    float BMI;

    printf("Enter Weight (Kg) : ");
    scanf_s("%f", &Weight);

    printf("Enter Height (m) : ");
    scanf_s("%f", &Height);
    BMI = Weight / (Height * Height);

    printf("Your BMI is %.2f\n", BMI);
    if (BMI < 18.5)
    {
        printf("You Are Underweight");
    }
    else if (BMI >= 18.5 || BMI < 25)
    {
        printf("You Are Normal");
    }
    else
    {
        printf("You Are Underweight");
    }

    return 0;
}