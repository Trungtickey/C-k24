// Xây dựng hàm có tham số là một mảng bất kỳ, hàm có chức năng in ra tất cả các phần tử có trong mảng được truyền vào.

#include<stdio.h>
void printArray(int arr[], int lenght){
    printf("Cac phan tu trong mang la: ");
    for(int i=0; i < lenght; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int lenght = sizeof(arr)/sizeof(int);

    printArray(arr, lenght);
    return 0;
}