#include <stdio.h>

struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[30];
};

int main(){
    struct employee e1;
    e1.code = 10088;
    e1.salary = 5000;
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure elements using:
    // printf("%d\n%f", ptr->code, ptr->salary);
    printf("%d\n%f", (*ptr).code, (*ptr).salary);

    return 0;
}