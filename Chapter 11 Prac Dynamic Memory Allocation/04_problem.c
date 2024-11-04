#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        printf("Enter the value of ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("The array is:\n");

    for (int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }

    printf("\n");

    n = 10;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 5; i < n; i++){
        printf("Enter the value of ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("The array is:\n");

    for (int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
