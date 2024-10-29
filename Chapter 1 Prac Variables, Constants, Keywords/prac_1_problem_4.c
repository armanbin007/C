#include <stdio.h>

int main(){
    float p,r,t,Simple_Interest; // p= principle, r= rate of interest, t= time
    scanf("%f", &p);
    scanf("%f", &r);
    scanf("%f", &t);
    Simple_Interest = (p*r*t) / 100;
    printf("Simple Interest is: %.2f", Simple_Interest);
    return 0;
}