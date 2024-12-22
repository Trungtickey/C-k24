// Viết chương trình yêu cầu người dùng nhập vào số tiền gửi ngân hàng ban đầu, lãi suất tháng và số tháng gửi.
// Tính số tiền lãi và tiền nhận được sau thời gian gửi biết tính lãi theo lãi nhập gốc.

#include <stdio.h>
#include <math.h>

int main() {
    double tienGui, laiSuat, tongTien, tienLai;
    int months;

    printf("Nhập số tiền gửi ban đầu (VND): ");
    scanf("%lf", &tienGui);

    printf("Nhập lãi suất tháng (%%): ");
    scanf("%lf", &laiSuat);

    printf("Nhập số tháng gửi: ");
    scanf("%d", &months);

    laiSuat = laiSuat / 100;
    tongTien = tienGui * pow(1 + laiSuat, months);
    tienLai = tongTien - tienGui;

    printf("\nSố tiền lãi sau %d tháng là: %.2f VND\n", months, tienLai);
    printf("Tổng số tiền nhận được sau %d tháng là: %.2f VND\n", months, tongTien);

    return 0;
}
