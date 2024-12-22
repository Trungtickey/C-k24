// Viết chương trình in ra các số nguyên từ 1 đến 100. Nhưng đối với bội số của ba in "Fizz" và đối với bội số của năm in "Buzz".
// Đối với bội số của cả ba và năm in ra "FizzBuzz".

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
