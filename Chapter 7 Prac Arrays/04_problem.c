#include <stdio.h>
int main(){
    int table_of,arr[10];
    printf("Enter the value of table: ");
    scanf("%d", &table_of);

    for(int i = 0; i < 10; i++){
        arr[i] = table_of * (i+1);
    }
    for(int i = 0; i < 10; i++){
        printf("The value of %d X %d = %d\n",table_of, i+1, arr[i]);
        
    }
    return 0;
}
