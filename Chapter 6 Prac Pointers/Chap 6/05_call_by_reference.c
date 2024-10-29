#include <stdio.h>

int sum(int*, int*);

int sum(int* a, int* b){
    *a = 6; // Sum function will change the value of x, because bnow it has it's address!
    return *a + *b;
}

int main(){
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x , &y));
    printf("The value of x is %d",x);
    return 0;
}