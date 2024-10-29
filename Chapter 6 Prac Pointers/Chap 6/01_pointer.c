#include <stdio.h>
int main()
{
    int i = 72;
    int* j = &i;  // j is a pointer pointing to i (integer pointer)
    printf("The address of i is= %p\n", &i);
    printf("The value of i is= %d\n", *(&i));
    return 0;
}
