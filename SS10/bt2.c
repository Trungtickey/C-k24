// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
// hãy sử dụng thuật toán sắp xếp nổi bọt (bubble sort) để sắp xếp lại mảng theo thứ tự tăng dần.

#include<stdio.h>

int main(){
    int arr[] = {10, 30, 35, 32, 40, 39};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep la: \n");
    for(int i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    return 0;
}