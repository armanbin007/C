#include <stdio.h>

char* slice(char x[], int m, int n){
    char *ptr1 = &x[m];

    x = ptr1;
    x[n+1] = '\0';
    return x;
}
int main(){
    char str[] = "Harry Bhai";
    printf("%s", slice(str, 0, 3));
    return 0;
}