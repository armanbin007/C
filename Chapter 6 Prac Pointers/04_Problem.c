#include <stdio.h>

int pass_by_reference(int*);


int pass_by_reference(int* x){
    *x = 50;
}

int main()
{
    int a = 30;
    int* j = &a;

    printf("The value of a is %d\n", a);
    pass_by_reference(j);
    printf("The value of a is %d\n", a);
    return 0;
}