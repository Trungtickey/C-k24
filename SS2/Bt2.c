#include <stdio.h>

int main() {
    // c1
//    int a = 1, b = 2, sum;
//    sum = a + b;
//    printf("Tong 2 so la: %d", sum);

    // c2
    int a, b, sum;
    printf("Nhập số a: ");
    scanf("%d", &a);
    printf("Nhập số b: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Tổng là: %d", sum);
    return 0;
}