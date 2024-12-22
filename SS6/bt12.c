// Viết chương trình yêu cầu người dùng nhập vào một số nguyên n bất kỳ, in ra n số đầu tiên trong dãy fibonaci

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Số n phải lớn hơn 0.\n");
    } else {
        printf("Dãy Fibonacci với %d số đầu tiên:\n", n);

        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                next = first; // Số Fibonacci đầu tiên
            } else if (i == 2) {
                next = second; // Số Fibonacci thứ hai
            } else {
                next = first + second; // Tính số Fibonacci tiếp theo
                first = second;
                second = next;
            }
            printf("%d ", next);
        }
        printf("\n");
    }

    return 0;
}
