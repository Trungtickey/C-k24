// tính chu vi, diện tích hình vuông

#include <stdio.h>

int main(){
    int a;
    printf("Nhap canh hinh vuong a: ");
    scanf("%d", &a);

    printf("Chu vi hinh vuong la: %d\n", a * 4);
    printf("Dien tich hinh vuong la: %d", a * a);
    return 0;
}