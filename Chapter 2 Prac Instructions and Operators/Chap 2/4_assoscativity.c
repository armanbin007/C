#include <stdio.h>
int main()
{
    int a = 3, b = 6, c = 9;
    printf("The value is %d\n", a*b/c + 10);
    printf("The value is %d", (3*b / 2*c) + 7*a);

    /*
         18/2*c + 21
         9*c + 21
         81+21=102
    */
    return 0;
}