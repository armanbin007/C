#include <stdio.h>
#include <string.h>
int main(){
    char str1[6];
    scanf("%s", str1);
    getchar() != '\n';

    char str2[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str2[i]);
        fflush(stdin);
    }
    str2[5] = '\0';

    int compare = strcmp(str1, str2);
    if(compare == 0){
        printf("The string are equal\n");
    } else{
        printf("The string are not equal\n");
        
    }
    
    return 0;
}