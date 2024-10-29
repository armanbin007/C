#include <stdio.h>

// Function prototype (function kya lega aur dega)
int sum(int, int);

// Function definition (Function kya karega)
int sum(int x, int y) // x,y are parameters
{
    printf("The sum is: %d\n", x + y);
    return x + y;
}

int main()
{
    sum(10, 20); // Function call

    sum(20, 30);
    
    sum(30, 30);
    

    return 0;
}
