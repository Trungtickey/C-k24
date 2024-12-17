#include <stdio.h>

int main() {
    int num, temp, digit;
    printf("Nhap 1 so nguye: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("So da nhap la so am.\n");
        num = -num;
    }

    int digits[10];
    int count = 0;

    temp = num;
    do {
        digit = temp % 10;
        digits[count++] = digit;
        temp /= 10;
    } while (temp > 0);

    printf("Cac chu so trong so da nhap la: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }

    printf("\n");
    return 0;
}
