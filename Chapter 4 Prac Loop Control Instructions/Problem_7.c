#include <stdio.h>
int main()
{
    int n=8,i,sum=0;
    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n",n,i,n*i);
        sum+=(8*i);
    }
    printf("Sum is = %d",sum);
    return 0;
}