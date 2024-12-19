// Khai báo và gán giá trị cho một mảng hai chiều bất kỳ, in ra phần tử lớn nhất trong mảng đã khai báo.

#include <stdio.h>

int main() {
    int matrix[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
    };
    int rows = 4, cols = 4, max = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
