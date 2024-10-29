// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html    Ascii value of characters

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("The value of this character is: %d\n", ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("The character is lowercase\n");
    }
    else
    {
        printf("The character is not lowercase\n");
    }
    return 0;
}