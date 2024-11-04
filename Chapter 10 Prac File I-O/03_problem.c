#include <stdio.h>
int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    FILE *ptr1;
    ptr1 = fopen("New.txt", "a");
    while((ch = fgetc(ptr)) != EOF){
        fputc(ch, ptr1);
    }
    fputc('\n', ptr1);
    rewind(ptr);
    while((ch = fgetc(ptr)) != EOF){
        fputc(ch, ptr1);}
    fclose(ptr);
    fclose(ptr1);
    return 0;
}
