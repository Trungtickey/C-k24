// Khai báo và gán giá trị cho mảng bất kỳ, xây dựng hàm tìm kiếm phần tử có 2 tham số gồm 1 mảng và giá trị muốn tìm kiếm.
// Hàm có giá trị trả về là vị trí của phần tử tìm kiếm được. Gọi hàm và in kết quả trả về của hàm ra màn hình.


#include <stdio.h>
int searchElement(int *array, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(array + i) == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int length = sizeof(arr) / sizeof(int);

    printf("Mang ban dau:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value;
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &value);

    int position = searchElement(arr, length, value);

    if (position != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", value, position);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", value);
    }

    return 0;
}
