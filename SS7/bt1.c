#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Do dai cua mang la: %d\n", length);

    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i, arr[i]);
    }

    return 0;
}
