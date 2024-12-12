#include <stdio.h>

int main(){
    int a;
    printf("Moi nhap so nguyen: ");
    scanf("%d", &a);

    if( a % 3 == 0 && a % 5 == 0 ){
        printf("so %d chia het cho ca 3 va 5", a);
    } else if(a % 3 == 0){
        printf("so %d chia het cho 3", a);
    } else if(a % 5 == 0){
        printf("so %d chia het cho 5", a);
    } else {
        printf("so %d khong chia het cho ca 3 va 5", a);
    }

    return 0;
}