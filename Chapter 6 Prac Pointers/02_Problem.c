#include <stdio.h>

void print_address(int*);

void print_address(int* x){
    printf("The address of i is: %p\n", x);
    printf("The value of i is: %d\n", *x);
}

int main()
{
    int i = 10;
    // int* j = &i;
    printf("The address of i is: %p\n", &i);
    print_address(&i);
    return 0;
}
