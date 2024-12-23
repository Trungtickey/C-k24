// Nhập số dòng và số cột mảng 2 chiều (n, m), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo.
// Tiến hành sắp xếp các phần tử trong mảng tăng dần theo từng dòng và in dưới dạng ma trận sau khi sắp xếp.

#include<stdio.h>

// Sắp xếp một dòng của mảng theo thứ tự tăng dần
void sortRow(int row[], int columns) {
    for (int i = 0; i < columns - 1; i++) {
        for (int j = i + 1; j < columns; j++) {
            if (row[i] > row[j]) {
                // Hoán đổi
                int temp = row[i];
                row[i] = row[j];
                row[j] = temp;
            }
        }
    }
}

int main(){
    int m,n;
    printf("So dong cua mang(n): ");
    scanf("%d", &n);
    printf("So cot cua mang(m): ");
    scanf("%d", &m);

    int arr[n][m];
    printf("Nhap cac phan tu cua mang: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Hien thi mang ban dau: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        sortRow(arr[i], m);
    }

    printf("\n Mang sau khi sap xep tang dan theo tung dong: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}