// Khai báo và gán giá trị cho một mảng bất kỳ, yêu cầu người dùng nhập vào vị trí cần sửa và giá trị mới sau khi sửa.
// Tiến hành ghi đè giá trị cũ trong mảng tại vị trí cần sửa bằng giá trị mới. Sau khi sửa thì in mảng ra màn hình để kiểm tra.

#include <stdio.h>

int main() {
    int arr[100];
    int n, pos, newValue;
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
    printf("Mảng ban đầu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhập vị trí cần sửa (1 đến %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Vị trí không hợp lệ.\n");
        return 1;
    }

    printf("Nhập giá trị mới tại vị trí %d: ", pos);
    scanf("%d", &newValue);
    arr[pos - 1] = newValue;
    printf("Mảng sau khi sửa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
