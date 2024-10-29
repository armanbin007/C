#include <stdio.h>

    int mystrlen(char x[]);

    int mystrlen(char x[]){
    int i = 0;
    while (x[i] != '\0'){
        i++;
    }
    int count = i;
    return count;
}

    void mystrcpy(char x[], char y[]){
        for (int i = 0; i < mystrlen(y); i++){
            x[i] = y[i];
        }
            x[mystrlen(y)] = '\0'; 
    }

int main(){
    char st[] = "Arman";
    char copy[10];
    mystrcpy(copy, st);
    printf("%s\n", copy);
    
    return 0;
}