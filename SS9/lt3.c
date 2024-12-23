// Khai báo một mảng có 100 phần tử, yêu cầu người dùng nhập vào số phần tử muốn nhập và nhập từng phần tử vào mảng.
// Sau khi đã nhập xong tiến hành thực hiện logic xóa phần tử khỏi mảng.
// Yêu cầu người dùng nhập vị trí cần xóa và thực hiện xóa phần tử ở vị trí đã nhập.

#include <stdio.h>

int main() {
    int arr[100];
    int n, pos, currentLength;

    printf("Nhập số phần tử của mảng (tối đa 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Số phần tử không hợp lệ.\n");
        return 1;
    }
    printf("Nhập %d phần tử vào mảng:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    currentLength = n;

    printf("Mảng ban đầu: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhập vị trí cần xóa (1 đến %d): ", currentLength);
    scanf("%d", &pos);

    if (pos < 1 || pos > currentLength) {
        printf("Vị trí không hợp lệ.\n");
        return 1;
    }

    for (int i = pos - 1; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;

    printf("Mảng sau khi xóa: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
