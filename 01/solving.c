#include <stdio.h>
#include <stdbool.h>

bool isBissextile(int year) {
    if(year %4 == 0){
        if((year %100 == 0 ) && (year %400 !=0)){
            return false;
        }
        return true;
    }
    return false;
}

int main() {
    int year;
    printf("ANO: \n");
    scanf("%d", &year);
    
    
    printf("%B\n", isBissextile(year));
    return 0;
}