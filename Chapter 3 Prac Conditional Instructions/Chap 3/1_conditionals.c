#include <stdio.h>
int main()
{
    int age;
    printf("Input the age: ");
    scanf("%d", &age);
    if (age > 5)
    {
        printf("Your age is more than 5");
    }
    if (age == 5)
    {
        printf("Your age is 5");
    }
    return 0;
}