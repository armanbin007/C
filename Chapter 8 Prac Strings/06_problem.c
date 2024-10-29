#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "Mere sare paise locker main hain";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    
    printf("%s\n", str);
    
    return 0;
}