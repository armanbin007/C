#include <stdio.h>
int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,1718,19,20};
   for (int i = 0; i < 20; i++)
   {
    printf("Address of int value %d is %u\n", i, &arr[i]);
   }
   
    
    return 0;
}