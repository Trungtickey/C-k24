// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp chèn (insertion sort) để sắp xếp lại mảng theo thứ tự tăng dần.

#include<stdio.h>

int main(){
    int arr[] = {1,3,10,5,7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j=i-1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Mang sau khi thay doi la: \n");
    for(int i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    return 0;
}