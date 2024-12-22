// Viết chương trình in ra các số Armstrong có 3 chữ số (Tổng lập phương của các chữ số của nó bằng chính số đó .

#include <stdio.h>
#include <math.h>

int main() {
    int num, digit1, digit2, digit3, sum;

    printf("Các số Armstrong có 3 chữ số là:\n");

    for (num = 100; num <= 999; num++) {
        digit1 = num / 100;
        digit2 = (num / 10) % 10;
        digit3 = num % 10;
        sum = pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3);

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
