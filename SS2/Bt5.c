// tính chu vi, diện tích hình chữ nhật

#include <stdio.h>

int main(){
    int cd, cr;
    printf("Nhap chieu dai: ");
    scanf("%d", &cd);

    printf("Nhap chieu rong: ");
    scanf("%d", &cr);

    printf("Chu vi hinh vuong la: %d\n", (cd + cr) * 2);
    printf("Dien tich hinh vuong la: %d", cd * cr);
    return 0;
}