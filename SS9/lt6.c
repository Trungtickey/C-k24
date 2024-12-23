#include <stdio.h>

void displayMenu() {
    printf("\nMENU\n");
    printf("1. Nhập kích cỡ và giá trị các phần tử của mảng\n");
    printf("2. In giá trị các phần tử của mảng theo ma trận\n");
    printf("3. In giá trị các phần tử là lẻ và tính tổng\n");
    printf("4. In ra các phần tử nằm trên đường biên và tính tích\n");
    printf("5. In ra các phần tử nằm trên đường chéo chính\n");
    printf("6. In ra các phần tử nằm trên đường chéo phụ\n");
    printf("7. In ra dòng có tổng giá trị các phần tử là lớn nhất\n");
    printf("8. Thoát\n");
    printf("Lựa chọn của bạn: ");
}

// Hàm nhập mảng 2 chiều
void inputMatrix(int matrix[100][100], int *rows, int *cols) {
    printf("Nhập số dòng: ");
    scanf("%d", rows);
    printf("Nhập số cột: ");
    scanf("%d", cols);
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            printf("Nhập phần tử [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Mảng đã được nhập thành công.\n");
}

// Hàm in ma trận
void printMatrix(int matrix[100][100], int rows, int cols) {
    printf("Ma trận:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Hàm in các phần tử lẻ và tính tổng
void printOddAndSum(int matrix[100][100], int rows, int cols) {
    int sum = 0;
    printf("Các phần tử lẻ: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 != 0) {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            }
        }
    }
    printf("\nTổng các phần tử lẻ: %d\n", sum);
}

// Hàm in các phần tử trên đường biên và tính tích
void printBoundaryAndProduct(int matrix[100][100], int rows, int cols) {
    int product = 1;
    printf("Các phần tử trên đường biên: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", matrix[i][j]);
                product *= matrix[i][j];
            }
        }
    }
    printf("\nTích các phần tử trên đường biên: %d\n", product);
}

// Hàm in các phần tử trên đường chéo chính
void printMainDiagonal(int matrix[100][100], int rows, int cols) {
    printf("Các phần tử trên đường chéo chính: ");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
}

// Hàm in các phần tử trên đường chéo phụ
void printSecondaryDiagonal(int matrix[100][100], int rows, int cols) {
    printf("Các phần tử trên đường chéo phụ: ");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][cols - i - 1]);
    }
    printf("\n");
}

// Hàm tìm dòng có tổng lớn nhất
void printMaxSumRow(int matrix[100][100], int rows, int cols) {
    int maxSum = -1, maxRow = -1;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }
    printf("Dòng có tổng giá trị lớn nhất là dòng %d với tổng %d.\n", maxRow + 1, maxSum);
}

int main() {
    int matrix[100][100], rows = 0, cols = 0;
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputMatrix(matrix, &rows, &cols);
                break;
            case 2:
                printMatrix(matrix, rows, cols);
                break;
            case 3:
                printOddAndSum(matrix, rows, cols);
                break;
            case 4:
                printBoundaryAndProduct(matrix, rows, cols);
                break;
            case 5:
                printMainDiagonal(matrix, rows, cols);
                break;
            case 6:
                printSecondaryDiagonal(matrix, rows, cols);
                break;
            case 7:
                printMaxSumRow(matrix, rows, cols);
                break;
            case 8:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
        }
    } while (choice != 8);

    return 0;
}
