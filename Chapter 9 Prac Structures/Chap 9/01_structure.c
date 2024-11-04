#include <stdio.h>
#include <string.h>

struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[30];
};

int main(){
    struct employee e1, e2;
    e1.code = 1011;
    e1.salary = 17.6;
    strcpy(e1.name, "Harry");
    e2.code = 1012;
    e2.salary = 48.45;
    strcpy(e2.name, "Shah Rukh Khan");
    printf("Code %d \nSalary %f \nName %s\n", e1.code, e1.salary, e1.name);
    printf("Code %d \nSalary %f \nName %s\n", e2.code, e2.salary, e2.name);

    return 0;
}

