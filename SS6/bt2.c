#include <stdio.h>

int main() {
    int number;
    int evenCount = 0; // Biến đếm số lượng số chẵn
    int oddCount = 0;  // Biến đếm số lượng số lẻ

    printf("Nhập vào 5 số nguyên:\n");

    for (int i = 1; i <= 5; i++) {
        printf("Số thứ %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Số lượng số chẵn: %d\n", evenCount);
    printf("Số lượng số lẻ: %d\n", oddCount);

    return 0;
}
