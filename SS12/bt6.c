// Xây dựng hàm kiểm tra số hoàn hảo có 1 tham số, kết quả trả về là true nếu đối số truyền vào là số hoàn hảo, là false nếu không phải.
// Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên từ bàn phím và gọi hàm với từng số để kiểm tra và in ra kết quả.

#include <stdio.h>
#include <stdbool.h>

bool kiemTraSoHoanHao(int n) {
    if (n <= 0) {
        return false; // Số không dương không phải số hoàn hảo
    }
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) { // Duyệt qua các ước của n
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong == n;  // Số hoàn hảo nếu tổng các ước bằng chính nó
}

int main() {
    int so1, so2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    if (kiemTraSoHoanHao(so1)) {
        printf("%d la so hoan hao.\n", so1);
    } else {
        printf("%d khong phai la so hoan hao.\n", so1);
    }

    if (kiemTraSoHoanHao(so2)) {
        printf("%d la so hoan hao.\n", so2);
    } else {
        printf("%d khong phai la so hoan hao.\n", so2);
    }

    return 0;
}
