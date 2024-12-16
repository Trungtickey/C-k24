#include <stdio.h>

int main(){
    int n;
    printf("Nhap so nguyen tu 1 to 10: ");
    scanf("%d", &n);
    if ( n > 0 && n <= 10){
        printf("Bang cuu chuong %d\n", n);
        for(int i = 1; i <= 10; i++){
           int ketQua = n * i;
           printf("%d x %d = %d\n", n, i, ketQua);
        }
    } else {
        printf("Dau vao khong hop le! Vui long nhap lai so nguyen tu 1 to 10.\n ");
    }
    return 0;
}