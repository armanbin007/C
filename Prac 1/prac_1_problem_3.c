#include <stdio.h>

int main(){
    float C,F;
    scanf("%f", &C);
    F = C*9/5 + 32;
    printf("Celcius to Fahrenheit is: %.2f", F);
    return 0;
}