// Viết chương trình yêu cầu người dùng nhập vào số năm và số tháng, từ đó in ra số ngày trong tháng và năm đã nhập

#include <stdio.h>

int main() {
    int year, month, days;
    printf("Nhập năm: ");
    scanf("%d", &year);
    printf("Nhập tháng (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Tháng không hợp lệ! Vui lòng nhập từ 1 đến 12.\n");
        return 1;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    }

    printf("Tháng %d năm %d có %d ngày.\n", month, year, days);

    return 0;
}
