#include <stdio.h>

int main() {
    int arr[5] = {3, 7, 10, 8, 15};
    int soChan = 0;

    printf("Cac phan tu chan trong mang la:\n");

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            soChan = 1;
        }
    }

    if (!soChan) {
        printf("Mang khong chua so chan.\n");
    } else {
        printf("\n");
    }

    return 0;
}
