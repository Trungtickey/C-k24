// Xây dựng hàm tính tổng 2 số có kết quả trả về là tổng tính được.

#include<stdio.h>

int tinhTong(int a, int b){
    return a + b;
}

int main(){
    int a, b, sum;

    printf("Nhap vao so 1: ");
    scanf("%d", &a);
    printf("Nhap vao so 2: ");
    scanf("%d", &b);

    sum = tinhTong(a, b);

    printf("Tong cua 2 so %d va %d la: %d\n ", a, b, sum);
    return 0;
}