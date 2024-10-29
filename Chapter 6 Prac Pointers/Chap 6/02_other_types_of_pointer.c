#include <stdio.h>
int main()
{
    char i = 'A';
    char* j = &i;

    float k = 3.1416;
    float* k1 = &k;

    printf("The address of i is: %p\n", &i);
    printf("The address of j is: %p\n", &j);
    printf("The address of k is: %p\n", &k);
    printf("The address of k1 is: %p\n", &k1);

    printf("The value of i is: %c\n", *(&i));
    printf("The value of j is: %c\n", *j);
    printf("The value of k is: %f\n", *(&k));
    printf("The value of k1 is: %f\n", *k1);

    return 0;
}
