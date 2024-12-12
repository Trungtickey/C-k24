#include <stdio.h>

int main() {
    int choice; // Sử dụng sử lựa chọn.
    float soTien, tyGia;
    const float USD_TO_VND = 23500;
    const float EUR_TO_VND = 25000;
    const float GBP_TO_VND = 28000;
    const float JPY_TO_VND = 180;
    const float VND_TO_USD = 0.043;
    const float VND_TO_EUR = 0.04;
    const float VND_TO_GBP = 3.57;
    const float VND_TO_JPY = 0.006;

    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi (1-8)? : ");
    scanf("%d", &choice);

    printf("Nhap so tien can chuyen doi: ");
    scanf("%f", &soTien);

    switch (choice) {
        case 1:
            tyGia = soTien * USD_TO_VND;
            printf("%.2f USD = %.2f VND\n", soTien, tyGia);
            break;
        case 2:
            tyGia = soTien * EUR_TO_VND;
            printf("%.2f EUR = %.2f VND\n", soTien, tyGia);
            break;
        case 3:
            tyGia = soTien * GBP_TO_VND;
            printf("%.2f GBP = %.2f VND\n", soTien, tyGia);
            break;
        case 4:
            tyGia = soTien * JPY_TO_VND;
            printf("%.2f JPY = %.2f VND\n", soTien, tyGia);
            break;
        case 5:
            tyGia = soTien * VND_TO_USD;
            printf("%.2f VND = %.2f USD\n", soTien, tyGia);
            break;
        case 6:
            tyGia = soTien * VND_TO_EUR;
            printf("%.2f VND = %.2f EUR\n", soTien, tyGia);
            break;
        case 7:
            tyGia = soTien * VND_TO_GBP;
            printf("%.2f VND = %.2f GBP\n", soTien, tyGia);
            break;
        case 8:
            tyGia = soTien * VND_TO_JPY;
            printf("%.2f VND = %.2f JPY\n", soTien, tyGia);
            break;
        default:
            printf("Lua chon khong hop le.\n");
            break;
    }

    return 0;
}
