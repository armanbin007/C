#include <stdio.h>
int main()
{
    int n = 10, i;
    for (i = 10; i; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}