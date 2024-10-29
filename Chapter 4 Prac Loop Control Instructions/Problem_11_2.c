#include <stdio.h>
int main()
{
    int n = 2, i = 2, prime = 1;
    if (n == 0 || n == 1){
        prime = 0;
    }
    else{
        do{
            if (n % i == 0 && i!=n){    
                prime = 0;
                break;
            }
            i++;
          }
        while(i<n);
    }
    if (prime){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number", n);
    }
    return 0;
}