#include <stdio.h>
int main(){
    int S[3] = {1,2,3};
    printf("*(S+3) refers to %d", *(S+3));
    
    return 0;
}
// *(S+3) refers to the third element: No, it doesn't. It refers to 4th element which is not present here.

