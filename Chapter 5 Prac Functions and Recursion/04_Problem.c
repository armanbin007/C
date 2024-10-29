// Recursion to calculate nth element of Fibonacci series
#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
    if(n == 1 || n == 2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n = 5;
    printf("The value of Fibonacci series at %d is %d\n", n, fibonacci(n));
    return 0;
}
