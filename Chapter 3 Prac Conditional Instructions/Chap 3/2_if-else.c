#include <stdio.h>
int main()
{
    int age;
    printf("Input the age: ");
    scanf("%d", &age);
    if (age > 10)
    {
        printf("Your age is more than 10");
    }
    else{
        printf("Your age is not greater than 10");
    }
    return 0;
}