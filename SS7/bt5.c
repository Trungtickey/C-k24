#include <stdio.h>

int main() {
    int arr[5] = {12, 7, 15, 9, 22};
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phần tử nho nhat trong mang la: %d\n", min);

    return 0;
}
