#include <stdio.h>

int main(){
    int a;
    printf("Moi nhap so nguyen: ");
    scanf("%d", &a);

    if( a % 2 == 0){
        printf("a la so chan");
    } else {
        printf("a la so le");
    }

    return 0;
}