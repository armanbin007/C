#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr;
    int n;
    scanf("%d", &n);
    ptr = (int*) calloc (n, sizeof (int));
    ptr[0];  //By default it will have 0 value;
    ptr[1]=6;
    printf("\n%d",ptr[0]);
    printf("\n%d",ptr[1]);
    return 0;
}