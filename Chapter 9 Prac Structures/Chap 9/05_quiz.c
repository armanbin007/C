#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};
    
    void show(struct employee e);
    void show(struct employee e){
        printf("Code is: %d\nSalary is : %f\nName: %s\n", e.code, e.salary, e.name);
    }

int main(){
    struct employee e1, e2;
    e1.code = 10088;
    e1.salary = 5000;
    strcpy(e1.name, "Harry");
    e2.code = 10095;
    e2.salary = 3600;
    strcpy(e2.name, "Shah Rukh");
    show(e1);
    show(e2);

    return 0;
}