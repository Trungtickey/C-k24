#include <stdio.h>

int main() {
    float gioLamViec, luongTheoGio, luongCoBan, phuCap = 0, tongLuong;

    printf("Nhap so gio lam viec trong thang: ");
    scanf("%f", &gioLamViec);
    printf("Nhap muc luong theo gio: ");
    scanf("%f", &luongTheoGio);

    luongCoBan = gioLamViec * luongTheoGio;
    if (gioLamViec > 160) {
        phuCap = luongCoBan * 0.10;
    }

    tongLuong = luongCoBan + phuCap;
// Tổng mức lương c
    printf("Luong co ban la: %.2f\n", luongCoBan);
    if (phuCap > 0) {
        printf("Phu cap: %.2f\n", phuCap);
    }
    printf("Tong luong la: %.2f\n", tongLuong);

    return 0;
}
