// Xây dựng hàm tạo ma trận 2 chiều có 2 tham số là số hàng và số cột, khi gọi hàm người dùng sẽ phải nhập vào từng giá trị trong ma trận.
// Hàm có kết quả trả về là một mảng 2 chiều với số hàng và số cột giống với giá trị truyền vào.
// Viết chương trình yêu cầu người dùng nhập vào số hàng và số cột và sử dụng hàm để tạo ma trận, in ma trận ra màn hình để kiểm tra kết quả.

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// Cách 1:

//int** taoMaTran(int soHang, int soCot) {
//    int** maTran = (int**)malloc(soHang * sizeof(int*)); // Cấp phát bộ nhớ cho ma trận
//    for (int i = 0; i < soHang; i++) {
//        maTran[i] = (int*)malloc(soCot * sizeof(int));
//    }
//
//    printf("Nhap cac phan tu cua ma tran (%d x %d):\n", soHang, soCot);
//    for (int i = 0; i < soHang; i++) {
//        for (int j = 0; j < soCot; j++) {
//            printf("Phan tu [%d][%d]: ", i, j);
//            scanf("%d", &maTran[i][j]);
//        }
//    }
//
//    return maTran;
//}
//
//void inMaTran(int** maTran, int soHang, int soCot) {
//    printf("Ma tran (%d x %d):\n", soHang, soCot);
//    for (int i = 0; i < soHang; i++) {
//        for (int j = 0; j < soCot; j++) {
//            printf("%d ", maTran[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void giaiPhongMaTran(int** maTran, int soHang) {
//    for (int i = 0; i < soHang; i++) {
//        free(maTran[i]);
//    }
//    free(maTran);
//}
//
//int main() {
//    int soHang, soCot;
//    printf("Nhap so hang: ");
//    scanf("%d", &soHang);
//
//    printf("Nhap so cot: ");
//    scanf("%d", &soCot);
//
//    int** maTran = taoMaTran(soHang, soCot);
//
//    inMaTran(maTran, soHang, soCot);
//
//    giaiPhongMaTran(maTran, soHang);
//
//    return 0;
//}


// Cách 2:

// Hàm tạo ma trận
// Kiểu dữ liệu int[][]
// Tham số: cột hàng của ma trận
// Tên hàm: initArray

int initArray(int col, int row){
    int matrix[row][col];
    // Nhập lần lượt giá trị
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Matrix[%d][%d] = ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
};

int matrix[MAX][MAX];

// Hàm in ma trận
// Kiểu dữ liệu: void
// Tham số: row col
// Tên hàm: printArr

void printArr(int col, int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
};
int main(){
    int col, row;
    printf("Nhap so hang cua ma tran row = ");
    scanf("%d", &row);
    printf("Nhap so cot cua ma tran col = ");
    scanf("%d", &col);
    initArray(col,row);

    return 0;
}

