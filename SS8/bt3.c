// Viết chương trình yêu cầu người dùng nhập vào một số nguyên, khởi tạo mảng 2 chiều từ số nguyên đã nhập có số hàng và số cột bằng nhau.
// In mảng ra dưới dạng ma trận vuông.

#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc ma tran vuong (so nguyen): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Kich thuoc ma tran phai lon hon 0.\n");
        return 1;
    }

    int matrix[n][n];
    printf("Nhap cac phan tu cua ma tran (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu tai hang %d, cột %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran vuong vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
