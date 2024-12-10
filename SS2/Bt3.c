#include <stdio.h>

int main(){
    int a, b;
    int hieu,tich, thuong;
    printf("Nhập số a: ");
    scanf("%d", &a);

    printf("Nhập số b: ");
    scanf("%d", &b);

    hieu = a - b;
    tich = a * b;
    // Hàm kiểm tra chia cho 0:
    if( b!=0 ){
        thuong = a / b;
        printf("Hieu cua 2 so: %d\n", hieu);
        printf("tich cua 2 so: %d\n", tich);
        printf("thuong cua 2 so: %d", thuong);
    } else {
        printf("Hieu cua 2 so: %d\n", hieu);
        printf("tich cua 2 so: %d\n", tich);
        printf("Khong tim thay gia tri thuong cua 2 so");
    }
    return 0;
}
