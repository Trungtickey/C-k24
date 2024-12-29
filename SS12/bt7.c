// Xây dựng hàm tạo ma trận 2 chiều có 2 tham số là số hàng và số cột, khi gọi hàm người dùng sẽ phải nhập vào từng giá trị trong ma trận.
// Hàm có kết quả trả về là một mảng 2 chiều với số hàng và số cột giống với giá trị truyền vào.
// Viết chương trình yêu cầu người dùng nhập vào số hàng và số cột và sử dụng hàm để tạo ma trận, in ma trận ra màn hình để kiểm tra kết quả.

#include <stdio.h>
#include <stdlib.h>

int** taoMaTran(int soHang, int soCot) {
    int** maTran = (int**)malloc(soHang * sizeof(int*)); // Cấp phát bộ nhớ cho ma trận
    for (int i = 0; i < soHang; i++) {
        maTran[i] = (int*)malloc(soCot * sizeof(int));
    }

    printf("Nhap cac phan tu cua ma tran (%d x %d):\n", soHang, soCot);
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }

    return maTran;
}

void inMaTran(int** maTran, int soHang, int soCot) {
    printf("Ma tran (%d x %d):\n", soHang, soCot);
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

void giaiPhongMaTran(int** maTran, int soHang) {
    for (int i = 0; i < soHang; i++) {
        free(maTran[i]);
    }
    free(maTran);
}

int main() {
    int soHang, soCot;
    printf("Nhap so hang: ");
    scanf("%d", &soHang);

    printf("Nhap so cot: ");
    scanf("%d", &soCot);

    int** maTran = taoMaTran(soHang, soCot);

    inMaTran(maTran, soHang, soCot);

    giaiPhongMaTran(maTran, soHang);

    return 0;
}
