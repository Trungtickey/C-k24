#include <stdio.h>
#include <stdbool.h>

void displayMenu() {
    printf("\nMENU\n");
    printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
    printf("2. In ra giá trị các phần tử đang quản lý\n");
    printf("3. In ra giá trị các phần tử chẵn và tính tổng\n");
    printf("4. In ra giá trị lớn nhất và nhỏ nhất trong mảng\n");
    printf("5. In ra các phần tử là số nguyên tố trong mảng và tính tổng\n");
    printf("6. Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó\n");
    printf("7. Thêm một phần tử vào vị trí chỉ định\n");
    printf("8. Thoát\n");
    printf("Lựa chọn của bạn: ");
}

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm nhập mảng
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

// Hàm hiển thị mảng
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

// Hàm tìm và in các phần tử chẵn, tính tổng
void evenElements(int arr[], int n) {
    int sum = 0;
    printf("Các phần tử chẵn: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTổng các phần tử chẵn: %d\n", sum);
}

// Hàm tìm giá trị lớn nhất và nhỏ nhất
void minMaxElements(int arr[], int n) {
    if (n == 0) {
        printf("Mảng hiện đang trống.\n");
        return;
    }
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Giá trị nhỏ nhất: %d\n", min);
    printf("Giá trị lớn nhất: %d\n", max);
}

// Hàm in các số nguyên tố và tính tổng
void primeElements(int arr[], int n) {
    int sum = 0;
    printf("Các phần tử là số nguyên tố: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTổng các phần tử nguyên tố: %d\n", sum);
}

// Hàm thống kê số lượng phần tử bằng một số nhập vào
void countOccurrences(int arr[], int n) {
    int value, count = 0;
    printf("Nhập giá trị cần thống kê: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) count++;
    }
    printf("Số lượng phần tử có giá trị %d: %d\n", value, count);
}

// Hàm thêm phần tử vào mảng
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
                evenElements(arr, n);
                break;
            case 4:
                minMaxElements(arr, n);
                break;
            case 5:
                primeElements(arr, n);
                break;
            case 6:
                countOccurrences(arr, n);
                break;
            case 7:
                addElement(arr, &n);
                break;
            case 8:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
        }
    } while (choice != 8);

    return 0;
}
