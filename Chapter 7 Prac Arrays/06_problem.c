#include <stdio.h>

int positivecount(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[] = {1, -2, -3, 4, -5, -6, -7, -8, 9, 10};

    printf("The number of positive integers is: %d\n", positivecount(arr, 10));
    return 0;
}
