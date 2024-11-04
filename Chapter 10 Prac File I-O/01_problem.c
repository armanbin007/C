#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("cprog.txt", "r");
    int num1, num2, num3;
    // while(fscanf(ptr, "%d", &num) != EOF){
    //     printf("%d ",num);
    // }
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    fclose(ptr);
    return 0;
}
