//  Using function to convert temp from celsius to fahrenheit

#include <stdio.h>

float c_to_f(float);

float c_to_f(float c){
    float f = (c * 9/5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n",c, f);
    return f;
}
int main()
{
    c_to_f(44);
    c_to_f(35);
    c_to_f(38);
    return 0;
}
