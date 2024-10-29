#include <stdio.h>

int sum_natural(int);

int sum_natural(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    } // sum of n= sum(n-1) + n;
    return sum_natural(n-1) + n;
}

int main()
{
    int n=5;
    printf("The sum of 1st %d natural number is: %d\n",n, sum_natural(n));
    return 0;
}


