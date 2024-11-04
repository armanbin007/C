#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[30];
} Emp;

int main(){
    // typedef struct employee Emp;
    Emp e1;
    Emp* ptr1;
    ptr1 = &e1;
    e1.code = 5001;
    e1.salary = 1500;
    strcpy(e1.name, "Harry");
    printf("Code: %d\nSalary: %f\nName: %s\n\n", e1.code, e1.salary, e1.name);
    printf("Code: %d\nSalary: %f\nName: %s\n", ptr1->code, ptr1->salary, ptr1->name);
    
    
    return 0;
}