#include <stdio.h>

int stars(int);

int stars(int n){
    for(int i = 0; i <= n; i++){

        for(int j = 0; j < 2 * i + 1; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    stars(2);
    return 0;
}
