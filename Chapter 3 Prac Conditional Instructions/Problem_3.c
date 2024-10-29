#include <stdio.h>
int main()
{
    float income, tax;
    printf("Enter income: ");
    scanf("%f", &income);

    if (income < 250000)
    {
        tax = 0;
    }
    else if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income-250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000-250000) + 0.2 * (income-500000);
    }
    else if (income > 1000000)
    {
        tax = 0.05 * (500000-250000) + 0.2 * (1000000-500000) + 0.3 * (income-1000000);
    }
    printf("Income tax paid to government is: %.2f\n", tax);
    // printf("Income tax percentage: %.2f\n", tax);
    return 0;
}