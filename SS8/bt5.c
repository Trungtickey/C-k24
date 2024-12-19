// Khai báo và gán giá trị cho một ma trận dưới dạng mảng hai chiều bất kỳ,
// tính tổng các phần tử trên đường biên của ma trận và in kết quả ra màn hình

#include <stdio.h>

int main() {
    int matrix[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
    };

    int rows = 4, cols = 4, sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}
