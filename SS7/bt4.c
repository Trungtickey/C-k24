#include <stdio.h>

int main() {
    int n;
    int arr[100];
    printf("Nhap so phan tu cua mang (toi đa 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le. Vui long nhap so tu 1 đen 100.\n");
        return 1;
    }
    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
