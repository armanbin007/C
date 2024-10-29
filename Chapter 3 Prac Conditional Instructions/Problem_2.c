#include <stdio.h>
int main()
{
    float marks1, marks2, marks3;
    float total, percentage;
    printf("Enter the marks of Math ");
    scanf("%f", &marks1);
    printf("Enter the marks of Eng ");
    scanf("%f", &marks2);
    printf("Enter the marks of Cse ");
    scanf("%f", &marks3);

    total = marks1 + marks2 + marks3;
    percentage=(marks1 + marks2 + marks3)/3;
    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("The student has failed due to less marks in individual subjects\n");
    }
    else if(percentage < 40){
        printf("The student has failed\n");
    }
    else
    {
        printf("The student has passed\n");
    }
    printf("Percentage is: %.2f\n", percentage);
    printf("Total marks: %.2f", total);

    return 0;
}