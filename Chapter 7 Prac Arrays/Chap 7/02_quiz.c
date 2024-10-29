#include <stdio.h>
int main(){
    int marks[5]; // Reserve space to store 5 integers

    printf("Enter marks of 5 students\n");  
    for (int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("Marks %d is: %d\n", i, marks[i]);
    }

    // We can go all the way till marks[4]
    // printf("Marks 0 is %d\nMarks 1 is %d\nMarks 2 is %d\nMarks 3 is %d\nMarks 4 is %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}
