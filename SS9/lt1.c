// Khai báo một mảng có 100 phần tử, yêu cầu người dùng nhập vào số phần tử muốn nhập và nhập từng phần tử vào mảng.
// Sau khi đã nhập xong tiến hành thực hiện logic thêm phần tử vào mảng.
// Yêu cầu người dùng nhập giá trị và vị trí muốn thêm vào mảng và thực hiện chèn giá trị đó vào vị trí đã nhập.

#include<stdio.h>

int main() {
    int arr[100];
    int n, value, pos;
    printf("Nhap so phan tu cua mang (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    printf("Nhap %d phan tu vao mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);

    printf("Nhap vi tri muon them (1 den %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;

    printf("Mang sau khi them: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
