#include <stdio.h>

int sum_and_average(int*, int*, int*, float*);

int sum_and_average(int* x, int* y, int* sum, float* avg){
    *sum = *x + *y;
    *avg = *sum/2.0;
}


int main()
{
    int a = 10, b = 3;
    int sum;
    float avg;
    sum_and_average(&a, &b, &sum, &avg);
    printf("Sum is %d\nAverage is %f\n", sum, avg);
    return 0;
}