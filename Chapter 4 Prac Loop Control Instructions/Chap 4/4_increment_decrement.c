#include <stdio.h>
int main()
{
    int i = 5;
    printf("The value of i is: %d\n",i);
    i = i + 5;
    printf("The value of i is: %d\n",i++); // value of i is 10
    printf("The value of i is: %d\n",i); // value of i is 11 because of post increment

    i += 2; // i = i + 2
    printf("The value of i is: %d\n",i);
    return 0;
}