#include <stdio.h>
int main()
{
    int age = 36;

    if(age>60){
        printf("You can drive and you are a senior citizen\n");
    }
    else if(age>35){
        printf("You can drive and you are an adult\n");
    }
    else if(age>=18){
        printf("You can drive\n");
    }
    else{
        printf("You can't drive");
    }
    return 0;
}