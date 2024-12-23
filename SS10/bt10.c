// Nhập số dòng và số cột mảng 2 chiều (row, col), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo.
// Tiến hành sắp xếp các phần tử trên đường chéo phụ theo thứ tự giảm dần.

#include <stdio.h>

// Hàm hoán đổi giá trị
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp đường chéo phụ theo thứ tự giảm dần
void sortAntiDiagonal(int diagonal[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (diagonal[i] < diagonal[j]) { // Sắp xếp giảm dần
                swap(&diagonal[i], &diagonal[j]);
            }
        }
    }
}

int main() {
    int row, col;
    printf("Nhap so dong (row): ");
    scanf("%d", &row);
    printf("Nhap so cot (col): ");
    scanf("%d", &col);

    // Kiểm tra điều kiện để có đường chéo phụ
    if (row != col) {
        printf("Mảng không phải ma trận vuông, không có đường chéo phụ.\n");
        return 1;
    }

    int matrix[row][col];
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMa tran ban dau:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int diagonal[row];
    for (int i = 0; i < row; i++) {
        diagonal[i] = matrix[i][row - i - 1]; // Lấy phần tử đường chéo phụ
    }

    // Sắp xếp đường chéo phụ giảm dần
    sortAntiDiagonal(diagonal, row);

    // Cập nhật lại ma trận với đường chéo phụ đã sắp xếp
    for (int i = 0; i < row; i++) {
        matrix[i][row - i - 1] = diagonal[i];
    }

    printf("\nMa tran sau khi sap xep duong cheo phu giam dan:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
