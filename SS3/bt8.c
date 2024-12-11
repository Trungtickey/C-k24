#include <stdio.h>

int main() {
    int number, reversed = 0;

    // Yêu cầu người dùng nhập một số nguyên có 4 chữ số
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    // Kiểm tra nếu số không phải là 4 chữ số
    if (number < 1000 || number > 9999) {
        printf("So nhap vao khong hop le. Vui long nhap mot so co 4 chu so.\n");
        return 1;
    }

    // Tính số nghịch đảo
    while (number > 0) {
        reversed = reversed * 10 + number % 10; // Lấy chữ số cuối cùng và thêm vào số nghịch đảo
        number /= 10;                           // Loại bỏ chữ số cuối cùng
    }

    // Hiển thị số nghịch đảo
    printf("So nghich dao: %d\n", reversed);

    return 0;
}
