#include <stdio.h>
int main()
{
    float cgpa[] = {3.92, 4.00,3.89};
    for (int i = 0; i < 3; i++){
        printf("Cgpa %d is: %.2f\n", i, cgpa[i]);
    }
    return 0;
}