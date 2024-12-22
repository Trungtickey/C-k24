#include <stdio.h>

int main() {
    int day, month;
    printf("Nhập ngày sinh (1-31): ");
    scanf("%d", &day);

    printf("Nhập tháng sinh (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Ngày hoặc tháng không hợp lệ.\n");
        return 1;
    }
    printf("Cung hoàng đạo của bạn là: ");
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Bảo Bình\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Song Ngư\n");
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Bạch Dương\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Kim Ngưu\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Song Tử\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Cự Giải\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Sư Tử\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Xử Nữ\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Thiên Bình\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Bọ Cạp\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Nhân Mã\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Ma Kết\n");
    } else {
        printf("Ngày hoặc tháng không hợp lệ.\n");
    }

    return 0;
}
