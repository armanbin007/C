#include <stdio.h>
int main()
{
     int n = 5,i = 1, product=1;
    while(i<=n){
        product *= i;
        i++;
    }
    printf("The factorial of %d is: %d",n,product);
    return 0;
}