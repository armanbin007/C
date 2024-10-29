#include <stdio.h>
int main()
{
    int n = 4,product=1;
    for(int i = 1; i<=n; i++){
        product *= i;
    }
    printf("The factorial of %d is: %d",n,product);
    return 0;
}