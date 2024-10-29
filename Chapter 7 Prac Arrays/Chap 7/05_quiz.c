#include <stdio.h>
int main()
{
    // Addition of a number to a pointer
    int a[] = {10,20,30,40};
    int* ptr = &a[1];
    printf("Address of pointer is: %u\n",ptr);
    printf("Value of pointer is: %d\n",*ptr);
    ptr++;
    printf("Addition of pointer is: %u\n",ptr);
    printf("Value of pointer is: %d\n\n",*ptr);

    printf("Address of pointer is: %u\n",ptr);
    printf("Value of pointer is: %d\n",*ptr);
    ptr--;
    printf("Addition of pointer is: %u\n",ptr);
    printf("Value of pointer is: %d\n",*ptr);
    return 0;
}