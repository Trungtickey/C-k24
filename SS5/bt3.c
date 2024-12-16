#include <stdio.h>

int main(){
    int a, sum = 0;

    printf("Nhap so nguyen duong: " );
    scanf("%d", &a);

    if(a < 0){
        printf("Nhap a khong dung! Vui long nhap lai.\n");
    } else {
        for(int i = 1; i <= a; i++){
            printf("%d ", i);
            sum += i;
        }
    }

    printf("Tong cac so nguyen duong la: %d", sum);
}