#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    ptr = (int*) calloc(n , sizeof(int));
    ptr[0] = 10;
    ptr[1] = 60;
    ptr[2] = 24;
    ptr[3] = 36;
    ptr[4] = 43;
    ptr[5] = 51;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    int n1;
    scanf("%d", &n1);
    ptr = (int*) realloc(ptr, n1 * sizeof(int));

    printf("\n");
    for (int i = 0; i < n1; i++)
    {
        printf("%d\n", ptr[i]);
    }

        free(ptr); // It freeies the allocated memory which was done by malloc
    return 0;
}