#include <stdio.h>

struct Date{
    int mm;
    int dd;
    int yyyy;
};

int compare(struct Date d1, struct Date d2){
    // If date is in the future, reutrn 1
    // If date is in the past, reutrn -1
    // If date is same, reutrn 0
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd)){
        return 0;
    }
    if(d1.yyyy > d2.yyyy){
        return 1;
    }
    else if (d1.yyyy < d2.yyyy){
        return -1;
    }
    else if(d1.mm > d2.mm){
        return 1;
    }
    else if (d1.mm < d2.mm){
        return -1;
    }
    else if(d1.dd > d2.dd){
        return 1;
    }
    else if (d1.dd < d2.dd){
        return -1;
    }
}

int main(){
    struct Date d1 = {11, 8, 2024};
    struct Date d2 = {12, 8, 2024};
    printf("%d", compare(d1, d2));
    
    return 0;
}