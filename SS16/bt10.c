// Khai báo và gán giá trị cho mảng bất kỳ, xây dựng hàm xóa phần tử có 2 tham số gồm 1 mảng và vị trí cần xóa.
// Gọi hàm với mảng đã khai báo và in mảng mới để kiểm tra kết quả.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Hàm xóa phần tử theo giá trị

void deleteByIndex(int *arr, int pos){
    // Lấy ra độ dài mảng
    int size = sizeof(arr)/sizeof(int);
    for(int i = pos; i < size-1; i++){
        *(arr+i) = *(arr+i+1);
    }
}

int main(){
    int array[10] = {1,2,3,4,5};
    int n = 5;
    printf("Mang truoc khi xoa: \n");
    for(int i = 0; i<n; i++){
        printf("%d\t", *(array+i));
    }

    deleteByIndex(array, 2);
    n--;

    printf("Mang sau khi xoa: \n");
    for(int i = 0; i<n; i++){
        printf("%d\t", *(array+i));
    }


    return 0;
}