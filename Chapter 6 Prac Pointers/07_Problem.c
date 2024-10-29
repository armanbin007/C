#include <stdio.h>

int multiplybyten(int);

int multiplybyten(int x){
    x *= 10;
}

int main()
{
    int  a = 100;
    printf("Orignal value of num is %d\n", a);
    multiplybyten(a);

    printf("Value of num after multiplying by ten %d\n", a);

    return 0;
}