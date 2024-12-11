#include <stdio.h>
int main(){
//    int thousandDigit, hundredDigit, dozenDigit, unitDigit;
//    printf("Nhap so hang nghin:");
//    scanf("%d", &thousandDigit);
//    printf("Nhap so hang tram:");
//    scanf("%d", &hundredDigit);
//    printf("Nhap so hang chuc:");
//    scanf("%d", &dozenDigit);
//    printf("Nhap so hang don vi:");
//    scanf("%d", &unitDigit);
//    printf("Tong cac chu so cong lai %d %d %d %d\n", thousandDigit + hundredDigit + dozenDigit + unitDigit );

        int number, sum = 0;


        printf("Nhap mot so nguyen co 4 chu so: ");
        scanf("%d", &number);


        if (number < 1000 || number > 9999) { // Không hợp lệ nếu nhập không đủ 4 chữ số
            printf("So nhap vao khong hop le. Vui long nhap mot so co 4 chu so.\n");
            return 1;
        }

        // Tính tổng các chữ số
        while (number > 0) {
            sum += number % 10; // Lấy chữ số cuối cùng
            number /= 10;       // Loại bỏ chữ số cuối cùng
        }

        // Hiển thị tổng các chữ số
        printf("Tong cac chu so: %d\n", sum);

        return 0;
}
