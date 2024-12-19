// Bài toán:

// 1. Cho người dùng nhập vào n > 2
// 2. Tạo ma trận vuông n x n, nhập giá trị cho từng phần tử.
// 3. Tính tổng các số nằm trên đường biên của ma trận vuông
// 4. Tính tổng các số nằm trên đường chéo chính và nằm bên dưới đường chéo chính.

#include<stdio.h>

int main(){
    int n;
    printf("Hay nhap so n : ");
    scanf("%d",&n);
    int matrix[n][n];
    for(int i = 0 ; i<n ; i++ ){
        for(int j = 0 ; j<n ; j++ ){
            printf("Nhap matrix[%d][%d] : ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Các phan tu trong ma tran là :\n");

    for(int i = 0 ; i<n ; i++ ){
        for(int j = 0 ; j<n ; j++ ){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int sum;
    for(int i = 0 ; i<n ; i++ ) {
        for (int j = 0; j < n; j++) {
            if(i==0 || i == n-1|| j==0 || j==n-1){
                sum += matrix[i][j];
                printf("%d", matrix[i][j]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    int sum1;
    printf("Tong cac phan tu tren canh bien la: %d\n", sum1);
    for(int i = 0 ; i<n ; i++ ) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                sum1 += matrix[i][j];
                printf("%d", matrix[i][j]);
            } else {
                printf(" ");
            }
        }
        printf("\n");

    }

    printf("Tổng các số nằm trên đường chéo chính và nằm bên dưới đường chéo chính là: %d", sum1);

    return 0;
}