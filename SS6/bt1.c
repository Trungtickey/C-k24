#include <stdio.h>

int main() {
    int number;
    int sumOdd = 0;  // Biến lưu tổng các số lẻ

    printf("Nhap vao 5 so nguyen:\n");

    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            sumOdd += number;
        }
    }

    printf("Tong cac so le la   : %d\n", sumOdd);

    return 0;
}
