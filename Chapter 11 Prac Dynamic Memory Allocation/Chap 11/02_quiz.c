#include <stdio.h>
#include <stdlib.h>
int main(){
    float* ptr;
    float n = 5;
    ptr = (float*) malloc (n* sizeof (float));
    ptr[0] = 32.37;
    ptr[1] = 40.37;
    ptr[2] = 45.37;
    ptr[3] = 57.37;
    ptr[4] = 60.37;
    printf("\n%.2f", ptr[0]);
    printf("\n%.2f", ptr[1]);
    printf("\n%.2f", ptr[2]);
    printf("\n%.2f", ptr[3]);
    printf("\n%.2f", ptr[4]);
    return 0;
}