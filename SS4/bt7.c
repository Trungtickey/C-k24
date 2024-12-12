#include <stdio.h>

int main(){
    int year;
    printf("Moi nhap nam: ");
    scanf("%d", &year);

    if( year % 400 == 0 && year % 4 == 0 && year % 100 != 0 ){
        printf("Nam %d la nam nhuan", year);
    } else {
        printf("Nam %d la nam khong nhuan ", year);
    }

    return 0;
}