#include <stdio.h>
#include <string.h>
int main(){
    char st[] = "Arman";
    printf("%d\n", strlen(st));  // strlen prints the amount of characters
    
    char target[30];
    strcpy(target, st); // target now contains 'Harry'  // strcpy copy the content of 2nd string into the 1st string passed to it.
    printf("%s\n", target);

    char s1[10] = "Harry";
    char s2[10] = " Bhai";
    strcat(s1,s2);  // strcat to add 2nd string to the first one.
    printf("%s\n",s1);

    int a = strcmp("deep", "joke"); // DJ is neg
    printf("Value is: %d\n", a);
    
    return 0;
}
