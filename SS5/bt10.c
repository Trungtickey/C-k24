#include <stdio.h>

int main() {
    // C1
//    int num, temp, digit;
//    printf("Nhap 1 so nguyen: ");
//    scanf("%d", &num);
//
//    if (num < 0) {
//        printf("So da nhap la so am.\n");
//        num = -num;
//    }
//
//    int digits[10];
//    int count = 0;
//
//    temp = num;
//    do {
//        digit = temp % 10;
//        digits[count++] = digit;
//        temp /= 10;
//    } while (temp > 0);
//
//    printf("Cac chu so trong so da nhap la: ");
//    for (int i = count - 1; i >= 0; i--) {
//        printf("%d ", digits[i]);
//    }
//
//    printf("\n");

// C2
long n, temp, reverse = 0;
    printf("Nhap so n: ");
    scanf("%ld", &n);

    temp = n; // Luu tru gia tri cua n
    while(temp!=0){
        reverse = reverse * 10 + temp%10;
        temp = temp/10;
    }
    return 0;
}
