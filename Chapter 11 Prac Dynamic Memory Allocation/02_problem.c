#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 6;
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}
