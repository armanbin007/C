#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 10;
    ptr[1] = 6;
    ptr[2] = 7;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
        free(ptr); // It freeies the allocated memory which was done by malloc
    return 0;
}