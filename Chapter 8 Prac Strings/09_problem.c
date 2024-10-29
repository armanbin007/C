#include <stdio.h>
#include <string.h>

int main(){
    int contains = 0;
    char c = 'x';
    char str[] = "Harry is really great in teaching programming at x.programming";
    for (int i = 0; i < strlen(str); i++)
    {
       if(str[i] == c){
        contains = 1;
        break;
       }
    }
    if(contains){
        printf("Character is present\n"); 
    }
       else{
        printf("Character is not present\n");
       }
    
    return 0;
}
