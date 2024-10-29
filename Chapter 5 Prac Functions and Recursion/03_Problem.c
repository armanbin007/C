// Calculate the force of attraction
#include <stdio.h>

float force(float);

float force(float m){
    float g = 9.8;
    float force = m * g;
    printf("Force of attraction on %.2f kg is: %.2f N\n",m, force);
    return force;
}

int main()
{
    force(10); // Calculate force for 10 kg
    force(30); // Calculate force for 30 kg
    force(60); // Calculate force for 60 kg
    return 0;
}