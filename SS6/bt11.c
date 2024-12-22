// Viết chương trình yêu cầu người dùng nhập vào một số nguyên n bất kỳ, in ra n số nguyên tố đầu tiên.

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) return 0;
        i++;
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;
    printf("Nhap so luong so nguyen to can tim: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so duong!\n");
        return 1;
    }

    printf("%d so nguyen to dau tien la:\n", n);

    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}