#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number to print its multiplication table: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // while (i <= 10)
    // {
    //     printf("%d x %d = %d\n", n, i, n * i);
    //     i++;
    // }
    return 0;
}