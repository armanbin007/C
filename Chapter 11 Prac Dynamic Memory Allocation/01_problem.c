#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 6;
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 60;
    ptr[2] = 2;
    ptr[3] = 3;
    ptr[4] = 4;
    ptr[5] = 5;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    
    return 0;
}