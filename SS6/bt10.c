// Viết chương trình yêu cầu người dùng nhập vào một số nguyên bất kỳ,
// kiểm tra xem số đã nhập có phải số nguyên tố hay không và in kết quả ra màn hình.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, ketQua = 1; // Gán để nhận biêt số nguyên tố từ đầu
//    bool ketQua = true; // dùng boolean để phân biệt true/false

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So vua nhap %d khong phai so nguyen duong! Vui long nhap lai.\n", n);
        return 1;
    }

//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            ketQua = false;
//            break;
//        }
//    }
//
//    if (ketQua) {
//        printf("%d la so nguyen to.\n", n);
//    } else {
//        printf("%d khong phai la so nguyen to.\n", n);
//    }
    for (int i = 2; i * i <= n; i++){
        if(n % i == 0){
            ketQua = 0;
        }
    }

    if(ketQua == 1){
        printf("%d la so nguyen to", n);
    } else {
        printf("%d khong phai la so nguyen to", n);
    }

    return 0;
}