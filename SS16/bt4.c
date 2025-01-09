// Khai báo và gán giá trị cho mảng bất kỳ, xây dựng hàm có tham số là một mảng sử dụng con trỏ để in tất cả phần tử trong mảng.
// Gọi hàm để in ra tất cả phần tử trong mảng đã khai báo.

#include<stdio.h>
#include<string.h>

void printArr(int *array, int length){
    for(int i = 0; i < length; i++){
        printf("%d", *(array + i));
    }
    printf("\n");
}
int main(){
    int arr[] = {1,3,5,7,2, 4, 6, };
    int length = sizeof(arr)/sizeof(int);

    printf("Cac phan tu trong mang la: \n");
    printArr(arr, length);

    return 0;
}