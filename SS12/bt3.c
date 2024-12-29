// Xây dựng hàm có tham số là một số nguyên bất kỳ, kết quả trả về là giai thừa của đối số truyền vào.

#include <stdio.h>
int tinhGiaiThua(int a){
    if(a < 0){
        return -1; // Giai thua khong xac dinh cho so am
    }
    int giaiThua = 1;
    for(int i = 1; i <= a; i++){
        giaiThua *= i;
    }
    return giaiThua;
}

int main(){
    int a;
    printf("Nhap so nguyen: ");
    scanf("%d", &a);

    int ketQua = tinhGiaiThua(a);

    if(ketQua == -1){
        printf("Giai thua khong xac dinh cho so am. \n");
    } else {
        printf("Giai thua cua %d la: %d\n", a, ketQua);
    }

    return 0;
}