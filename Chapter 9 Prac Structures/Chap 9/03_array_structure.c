#include <stdio.h>
#include <string.h>

struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[30];
};

int main(){
struct employee facebook[100]; // an array of structures
// we can access the data using:
facebook[0].code = 100;
facebook[1].code = 101;
facebook[0].salary = 1000;
facebook[1].salary = 1010;
strcpy(facebook[0].name, "Harry");
strcpy(facebook[1].name, "Azhar");

for (int i = 0; i < 2; i++){
printf("%d %f %s\n",facebook[i].code ,facebook[i].salary, facebook[i].name);
}

struct employee harry = {100, 7000, "Harry"}; // A way to initialize structures
printf("\n%d %f %s\n", harry.code, harry.salary, harry.name);


struct employee shubh = {0}; // all elements set to 0
printf("\n%d %f %s\n", shubh.code, shubh.salary, shubh.name);
// And so on
    return 0;
}