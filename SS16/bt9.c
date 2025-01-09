// Khai báo và gán giá trị cho mảng bất kỳ, xây dựng hàm thêm mới phần tử có 3 tham số gồm 1 mảng, giá trị mới và vị trí cần thêm.
// Gọi hàm với mảng đã khai báo và in mảng mới để kiểm tra kết quả.

#include<stdio.h>
void updateElement(int *array, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        *(array + position) = newValue; // Cập nhật giá trị tại vị trí chỉ định
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int length = sizeof(arr) / sizeof(int);
    printf("Mang ban dau:\n");
    printArray(arr, length);

    int newValue, position;
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    printf("Nhap vi tri can cap nhat: ");
    scanf("%d", &position);

    updateElement(arr, length, newValue, position);

    printf("Mang sau khi cap nhat:\n");
    printArray(arr, length);

    return 0;