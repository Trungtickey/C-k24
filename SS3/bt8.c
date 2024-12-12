#include <stdio.h>

int main() {
//    int number, reversed = 0;
//    printf("Nhap mot so nguyen co 4 chu so: ");
//    scanf("%d", &number);
//    if (number < 1000 || number > 9999) {
//        printf("So nhap vao khong hop le. Vui long nhap mot so co 4 chu so.\n");
//        return 1;
//    }
//
//    // Tính số nghịch đảo
//    while (number > 0) {
//        reversed = reversed * 10 + number % 10;
//    }
//    printf("So nghich dao: %d\n", reversed);

        int number, thousandDigit, hundredDigit, dozenDigit, unitDigit;
        printf("Nhap so nguyen co 4 chu so: ");
        scanf("%d", &number);
        // Tách các chữ số:
        thousandDigit = number / 1000;
        hundredDigit = (number % 1000) / 100;
        dozenDigit = (number % 100) / 10;
        unitDigit = number % 10;
        printf("So nghich dao: %d%d%d%d\n", unitDigit, dozenDigit, hundredDigit, thousandDigit);

    return 0;
}
