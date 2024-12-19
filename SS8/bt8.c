// Khai báo và gán giá trị cho một ma trận vuông dưới dạng mảng hai chiều bất kỳ,
// in các phần tử trên đường chéo phụ của ma trận và tổng của các phần tử đó ra màn hình

#include <stdio.h>

int main() {
    int matrix[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
    };

    int n = 4, sum = 0;

    printf("Cac phan tu tren duong cheo phu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
        sum += matrix[i][n - 1 - i];
    }
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}
