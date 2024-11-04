#include <stdio.h>
#include <stdlib.h>
int main(){
    int table_of = 7, n = 10;
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i]= table_of * (i+1);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d X %d = %d\n", table_of, i, ptr[i-1]);  
    }
    printf("\n");
    
    n = 15;
    ptr = (int*) realloc(ptr, n * sizeof(int));
    for (int i = 10; i < n; i++)
    {
        ptr[i]= table_of * (i+1);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d X %d = %d\n", table_of, i, ptr[i-1]);  
    }
    free(ptr);
    return 0;
}