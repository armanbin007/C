// Average of 3 numbers using function

#include <stdio.h>

float avg(float, float, float);

float avg(float a, float b, float c){
    float average = (a+b+c) /3;
    printf("The average of %.0f, %.0f, %.0f is: %.1f\n",a,b,c, average );
    return average;
}

int main()
{
    avg(10,20,30);
    avg(1,2,3);
    avg(2,4,6);
    return 0;
}
