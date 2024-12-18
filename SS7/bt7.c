#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu phai lon hon 0.\n");
        return 1;
    }
    int arr[n];
    printf("Nhap %d phan tu (tat ca phai la so le):\n", n);
    for (int i = 0; i < n; i++) {
        int temp;
        while (1) {
            printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &temp);
            if (temp % 2 != 0) {
                arr[i] = temp;
                break;
            } else {
                printf("Phan tu phai la so le. Vui long nhap lai.\n");
            }
        }
    }
    printf("Mang gom cac so le đa nhap:\n[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
