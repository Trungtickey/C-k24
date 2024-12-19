// Khai báo và gán giá trị cho một mảng bất kỳ, tiến hành in ra từng phần tử trong mảng từ cuối về đầu.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu cua mang tu cuoi ve dau la:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
