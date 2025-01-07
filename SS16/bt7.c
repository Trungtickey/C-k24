// Khai báo và gán giá trị cho mảng bất kỳ, xây dựng hàm sắp xếp có 1 tham số là mảng cần sắp xếp.
// Hàm sẽ tiến hành sắp xếp lại mảng được truyền vào. Gọi hàm và in mảng sau khi được sắp xếp

#include <stdio.h>

void arrangeArr(int *array, int length){
    for(int i = 0; i < length - 1; i++){
        for(int j = i + 1; j < length; j++){
            if(*(array + i) > *(array + j)){
                int temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int length = sizeof(arr) / sizeof(int);

    printf("Mang ban dau:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arrangeArr(arr, length);
    printf("Mang sau khi sap xep: \n");
    for(int i = 0; i < length; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");


    return 0;
}
