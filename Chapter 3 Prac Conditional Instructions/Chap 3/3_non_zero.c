#include <stdio.h>
int main()
{
    if(1){
        printf("This if is executed\n");
    }
    if(287){
        printf("This if is executed\n");
    }
    if('x'){
        printf("This if char is executed\n");
    }
    if(0){
        printf("This if is not executed");
    }
    return 0;
}