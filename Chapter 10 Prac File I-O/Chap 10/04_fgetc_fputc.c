#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("harry.txt", "w");
    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c", c);
    
    fputc('d', ptr); // used to write character 'd' to the file

    return 0;
}
