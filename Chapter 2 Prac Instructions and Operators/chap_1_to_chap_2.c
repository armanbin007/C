#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the value for a: ");
    scanf("%f", &a);
    printf("Enter the value for b: ");
    scanf("%f", &b);
    printf("Enter the value for c: ");
    scanf("%f", &c);
    printf("The sum is: %.2f\n", (a + b + c));
    printf("The multiply is: %.2f\n", (a * b * c));
    printf("The division is: %.2f\n", (a / b / c));

    return 0;
}