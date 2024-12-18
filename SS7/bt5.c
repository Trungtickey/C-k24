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
    printf("Phần tử lớn nhất trong mảng là: %d\n", max);
    printf("Phần tử nhỏ nhất trong mảng là: %d\n", min);

    return 0;
}
