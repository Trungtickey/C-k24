// ●Nhập số phần tử của mảng (n), nhập giá trị các phần tử của mảng 1 chiều số nguyên gồm n phần tử.
// Sắp xếp mảng tăng dần và in mảng sau khi sắp xếp ra màn hình console.
// Dùng thuật toán insertion sort

#include<stdio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap gia tri cac phan tu cua mang: \n");
    for(int i=0; i<n; i++){
        printf("arr[%d]", i);
        scanf("%d", arr[i]);
    }
    // Sử dụng thuật toán chèn sắp xếp mảng tăng dần (insertion sort)
    for(int i=1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
    // In mảng sau khi đã sắp xếp
    printf("Mang sau khi da sap xep tang dan: \n");
    for(int i=0; i < n; i++){
        printf(" %d ", arr[i]);
    }

    return 0;
}