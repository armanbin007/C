#include <stdio.h>
#include <string.h>

struct customer{
    long long int ac;
    float balance;
    char name[30];
};

int main(){
    struct customer c1;
    c1.ac = 10034447001;
    c1.balance = 16000;
    strcpy(c1.name, "Harry");
    printf("Account no %d\nBalance %f\nName %s\n", c1.ac, c1.balance, c1.name);
    
    return 0;
}