#include <stdio.h>
#include <string.h>

int main(){
    
char str[] = "Nfsf!tbsf!qbjtf!mpdlfs!nbjo!ibjo";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s", str);

    return 0;
}