#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr;
    int n;
    scanf("%d", &n);
    ptr = (int*) malloc (n* sizeof (int));
    ptr[0]=3; // if i don't initialize then it will show garbage value
    ptr[1]=6;
    printf("\n%d",ptr[0]);
    return 0;
}