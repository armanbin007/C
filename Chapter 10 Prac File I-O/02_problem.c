#include <stdio.h>
int main(){
    int num = 6, i;
    FILE *ptr;
    // printf("Enter the number to generate multiplication table: ");
    // scanf("%d", &num);
    ptr = fopen("Multiplication table.txt", "w");
    fprintf(ptr,"Multiplication table of %d\n",num);
    fprintf(ptr,"===========================\n");

    for (i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, num*i);
    }
    fclose(ptr);
    
    return 0;
}
