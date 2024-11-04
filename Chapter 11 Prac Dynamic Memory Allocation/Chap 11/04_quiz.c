#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    ptr[0];
    ptr[1] = 6;
    ptr[2] = 7;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    
    return 0;
}