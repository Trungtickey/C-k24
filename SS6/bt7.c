// Viết chương trình yêu cầu người dùng nhập vào một số nguyên bất kỳ, in ra tất cả các ước của số đã nhập.

#include <stdio.h>

int main() {
    int num;
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &num);

    printf("Các ước của %d là: \n", num);
    for (int i = 1; i <= (num > 0 ? num : -num); i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
