#include <stdio.h>

int main() {
    int a = 42;
    int userInput;

    printf("Yeu cau nhap mot so trung voi so da cho truoc.\n");

    do {
        printf("Nhap so: ");
        scanf("%d", &userInput);

        if (userInput != a) {
            printf("So nhap chua dung! Hay nhap lai.\n");
        }
    } while (userInput != a);

    printf("Chuc mung! Ban da nhap dung\n", a);

    return 0;
}
