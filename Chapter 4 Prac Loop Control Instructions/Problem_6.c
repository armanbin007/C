#include <stdio.h>
int main()
{
    // int n=10,i,sum=0;
    // for(i=1; i<=10; i++){
    //     sum+=i;
    // }
    // printf("Sum is = %d",sum);

    int n=10,i=1,sum=0;
    do
    {
        sum+=i;
        i++;
    }
    while(i<=10);
    printf("Sum is = %d",sum);
    return 0;
}