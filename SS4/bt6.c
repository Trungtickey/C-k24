#include <stdio.h>

int main() {
    int chi_so_cu, chi_so_moi, so_dien;
    long long tien_dien = 0;

    printf("Nhap chi so cu: ");
    scanf("%d", &chi_so_cu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chi_so_moi);

    if (chi_so_moi < chi_so_cu) {
        printf("Chi so moi phai lon hon hoac bang chi so cu.\n");
        return 1;
    }

    so_dien = chi_so_moi - chi_so_cu;

    if (so_dien <= 50) {
        tien_dien = so_dien * 10000;
    } else if (so_dien <= 100) {
        tien_dien = 50 * 10000 + (so_dien - 50) * 15000;
    } else if (so_dien <= 150) {
        tien_dien = 50 * 10000 + 50 * 15000 + (so_dien - 100) * 20000;
    } else if (so_dien <= 200) {
        tien_dien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (so_dien - 150) * 25000;
    } else {
        tien_dien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (so_dien - 200) * 30000;
    }

    // Hiển thị kết quả
    printf("So dien tieu thu: %d kWh\n", so_dien);
    printf("Tien dien phai tra: %lld VND\n", tien_dien);

    return 0;
}
