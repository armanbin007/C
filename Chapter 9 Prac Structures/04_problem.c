#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    float salary;
    char name [30];
};

int main(){
    
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->id = 1001;
    ptr->salary = 10000;
    strcpy(ptr->name, "Harry");
    // e1.id = 100980;
    // e1.salary = 10000;
    // strcpy(e1.name, "Harry");

    printf("Id %d\nSalary %f\nName %s\n", ptr->id, ptr->salary, ptr->name);
    
    return 0;
}