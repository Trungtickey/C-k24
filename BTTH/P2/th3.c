// Nhập số phần tử của mảng (n), nhập giá trị các phần tử của mảng 1 chiều số nguyên gồm n phần tử.
// Sắp xếp mảng tăng dần và in mảng sau khi sắp xếp ra màn hình console.
// Sử dụng thuật toán bubble sort

#include<stdio.h>

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap gia tri cac phan tu cua mang: \n");
    for(int i=0; i<n; i++){
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    // Sử dụng thuật toán nổi bọt sắp xếp mảng tăng dần(bubble sort)
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // In mảng sau khi đã sắp xếp
    printf("Mang sau khi da sap xep giam dan: \n");
    for(int i=0; i < n; i++){
        printf(" %d ", arr[i]);
    }

    return 0;
}