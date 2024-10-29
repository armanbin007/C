#include <stdio.h>
int main()
{
     for (int i = 0; i < 7; i++)
     {
        if(i==5){
            // break;  // exit the loop!
            continue; // skip this iteration(contidions value will be skipped)
        }
        printf("i is %d\n", i);
     }
     
    return 0;
}