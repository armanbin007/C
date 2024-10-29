#include <stdio.h>
int main()
{
    int a = 5;
    int* j = &a;
    printf("The address of a is %p\n", &a);
    printf("The value of a is %d\n", *j);
    return 0;
}