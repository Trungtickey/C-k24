// ●Nhập số phần tử của mảng (n), nhập giá trị các phần tử của mảng 1 chiều số nguyên gồm n phần tử.
// Sắp xếp mảng giảm dần và in mảng sau khi sắp xếp ra màn hình console.
// Sử dụng thuâtj toán selection sort

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
    // Sử dụng thuật toán lựa chọn sắp xếp mảng giảm dần(selection sort)
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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