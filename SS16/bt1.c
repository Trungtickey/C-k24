// Khai báo một biến và con trỏ của biến đó, dùng 2 cách để in ra giá trị và địa chỉ của biến đã được khai báo.

#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    // Cách 1: Sử dụng tên biến trực tiếp
    printf("Cach 1:\n");
    printf("Gia tri cua bien: %d\n", num);
    printf("Dia chi cua bien: %p\n", &num);

    // Cách 2: Sử dụng con trỏ
    printf("\nCach 2:\n");
    printf("Gia tri cua bien thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua bien thong qua con tro: %p\n", ptr);

    return 0;
}
