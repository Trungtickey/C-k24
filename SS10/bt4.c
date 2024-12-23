// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
// hãy sử dụng thuật toán sắp xếp chọn (selection sort) để sắp xếp lại mảng theo thứ tự tăng dần.

#include<stdio.h>

int main(){
    int arr[5]={2,3,1,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

       int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("Mang sau khi sap xep la: \n");
    for(int i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    return 0;
}