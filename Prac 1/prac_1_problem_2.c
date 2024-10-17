#include <stdio.h>
#define PI 3.14
int main(){
    int radius,height;
    float volume;
    printf("Enter the value of Radius: ");
    scanf("%d", &radius);
    printf("Enter the value of Height: ");
    scanf("%d", &height);
    volume = PI*radius*radius*height;
    printf("Volume of this Cylinder is= %.2f", volume);
    return 0;
}