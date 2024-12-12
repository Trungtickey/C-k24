#include <stdio.h>

int main(){
    int a;
    printf("Moi nhap so nguyen: ");
    scanf("%d", &a);

    if( a >= 0 ){
        printf("a la so duong");
    } else {
        printf("a la so am");
    }

    return 0;
}