#include <stdio.h>

int customstrlen(char x[]);

int customstrlen(char x[]){
    int i = 0;
    while (x[i] != '\0'){
        i++;
    }
    int count = i;
    return count;
}
int main(){
    char st[] = "Arman";
    printf("%d\n", customstrlen(st));
    
    return 0;
}