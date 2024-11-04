#include <stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr = fopen("file2.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("Integer value in file = %d\n", num);
    ptr = fopen("file2.txt", "w");
    fprintf(ptr, "%d", num*2);
    printf("Double is = %d\n", num*2);
    
    return 0;
}
