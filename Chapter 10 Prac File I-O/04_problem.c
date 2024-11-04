#include <stdio.h>
int main(){
    char name[20], name1[20];
    int salary, salary1;
    FILE *ptr;
    ptr = fopen("employee.txt", "w");
    printf("Enter the name: ");
    scanf("%s", &name);
    printf("Enter the salary: ");
    scanf("%d", &salary);
    fprintf(ptr, "i. %s,", name);
    fprintf(ptr, " %d\n", salary);

    printf("Enter the name: ");
    scanf("%s", &name1);
    printf("Enter the salary: ");
    scanf("%d", &salary1);
    fprintf(ptr, "ii. %s,", name1);
    fprintf(ptr, " %d\n", salary1);
    
    fclose(ptr);
    return 0;
}