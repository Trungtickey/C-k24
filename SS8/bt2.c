// Khai báo và gán giá trị cho một mảng bất kỳ, yêu cầu người dùng nhập vào một phần tử và kiểm tra xem phần tử đó có tồn tại trong mảng không.
// Nếu có thì in ra “Vị trí phần tử trong mảng là …”, nếu không thì in ra “Phần tử không tồn tại trong mảng.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int x, n = sizeof(arr) / sizeof(arr[0]);
    printf("Nhap vao phan tu can kiem tra x: ");
    scanf("%d", &x);

    int check = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i + 1);
            check = 1;
            break;
        }
    }
    if (!check) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}
