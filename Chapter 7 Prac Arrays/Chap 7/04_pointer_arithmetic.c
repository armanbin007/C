#include <stdio.h>
int main()
{
    // Pointer Arithmetic using integer pointer
    int a = 5;
    int* ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n\n", ptr);

    // Pointer arithmetic using character pointer
    char b = 'A';
    char* ptr2 = &b;
    printf("The address of b is %u\n", &b);
    printf("The value of ptr2 is %u\n", ptr2);
    ptr2++;
    printf("The value of ptr2 is %u\n", ptr2);
    return 0;
}