//Nhập số dòng và số cột mảng 2 chiều (row,col), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo.
// Tiến hành sắp xếp các phần tử trên đường chéo chính theo thứ tự tăng dần.

#include <stdio.h>

// Hàm hoán đổi giá trị
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp đường chéo chính của mảng theo thứ tự tăng dần
void sortDiagonal(int diagonal[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (diagonal[i] > diagonal[j]) {
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

    // Kiểm tra điều kiện để có đường chéo chính
    if (row != col) {
        printf("Mang khong phai ma tran vuong, khong co duong cheo chinh.\n");
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

    printf("\nMa tran ban đau:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int diagonal[row];
    for (int i = 0; i < row; i++) {
        diagonal[i] = matrix[i][i];
    }

    sortDiagonal(diagonal, row);

    for (int i = 0; i < row; i++) {
        matrix[i][i] = diagonal[i];
    }

    printf("\nMa tran sau khi sap xep duong cheo chinh tang dan:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
