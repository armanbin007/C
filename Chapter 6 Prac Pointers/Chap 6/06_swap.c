#include <stdio.h>

int swap(int* ,int*);

int swap(int* x, int* y){
    int temp;
    temp = *x; // Temp became a; temp=a
    *x = *y; // a = b
    *y = temp; // b = temp
}

int main()
{
    int a = 3, b = 4;
    printf("values are %d %d\n",a,b);
    swap(&a,&b);
    printf("Swapped values are %d %d\n",a,b);
    return 0;
}
