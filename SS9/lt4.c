#include <stdio.h>

void displayMenu() {
    printf("\nMENU\n");
    printf("1. Nhập vào mảng\n");
    printf("2. Hiển thị mảng\n");
    printf("3. Thêm phần tử\n");
    printf("4. Sửa phần tử\n");
    printf("5. Xóa phần tử\n");
    printf("6. Thoát\n");
    printf("Lựa chọn của bạn: ");
}

void inputArray(int arr[], int *n) {
    printf("Nhập số phần tử của mảng (tối đa 100): ");
    scanf("%d", n);
    if (*n <= 0 || *n > 100) {
        printf("Số phần tử không hợp lệ. Vui lòng thử lại.\n");
        *n = 0;
        return;
    }
    for (int i = 0; i < *n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mảng đã được nhập thành công.\n");
}

void displayArray(int arr[], int n) {
    if (n == 0) {
        printf("Mảng hiện đang trống.\n");
        return;
    }
    printf("Mảng: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void addElement(int arr[], int *n) {
    if (*n >= 100) {
        printf("Mảng đã đầy, không thể thêm phần tử.\n");
        return;
    }
    int value, pos;
    printf("Nhập giá trị muốn thêm: ");
    scanf("%d", &value);
    printf("Nhập vị trí muốn thêm (1 đến %d): ", *n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > *n + 1) {
        printf("Vị trí không hợp lệ.\n");
        return;
    }
    for (int i = *n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    (*n)++;
    printf("Phần tử đã được thêm thành công.\n");
}

void editElement(int arr[], int n) {
    if (n == 0) {
        printf("Mảng hiện đang trống.\n");
        return;
    }
    int pos, newValue;
    printf("Nhập vị trí cần sửa (1 đến %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Vị trí không hợp lệ.\n");
        return;
    }
    printf("Nhập giá trị mới tại vị trí %d: ", pos);
    scanf("%d", &newValue);
    arr[pos - 1] = newValue;
    printf("Phần tử đã được sửa thành công.\n");
}

void deleteElement(int arr[], int *n) {
    if (*n == 0) {
        printf("Mảng hiện đang trống.\n");
        return;
    }
    int pos;
    printf("Nhập vị trí cần xóa (1 đến %d): ", *n);
    scanf("%d", &pos);
    if (pos < 1 || pos > *n) {
        printf("Vị trí không hợp lệ.\n");
        return;
    }
    for (int i = pos - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Phần tử đã được xóa thành công.\n");
}

int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                addElement(arr, &n);
                break;
            case 4:
                editElement(arr, n);
                break;
            case 5:
                deleteElement(arr, &n);
                break;
            case 6:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
        }
    } while (choice != 6);

    return 0;
}
