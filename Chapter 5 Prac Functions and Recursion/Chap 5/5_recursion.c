#include <stdio.h>

int factorial(int);
    /*
    factorial(2)= 1 x 2
    factorial(n)= 1 x 2 x 3 x 4 x.... x (n-1) x n
  Factorial(n-1)= 1 x 2 x 3 x.... x (n-1)
    factorial(n)= factorial(n-1) x n
    */
int factorial(int n){
     if(n == 0 || n == 1){  // Base condition
        return 1;
     }
     return factorial(n-1) * n;  // Suppose it is just a*b
}
int main(){   
    int n = 5;
    printf("The factorial of %d is %d\n",n ,factorial(n));
    return 0;
}
