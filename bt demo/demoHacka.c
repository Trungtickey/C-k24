#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap gia tri cho arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void demChanLe(int arr[], int n) {
    int chan = 0, le = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }
    printf("So phan tu chan: %d\n", chan);
    printf("So phan tu le: %d\n", le);
}

int timGiaTriLonThuHai(int arr[], int n) {
    int max1 = arr[0], max2 = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    return max2;
}

void themPhanTuDauMang(int arr[], int *n, int x) {
    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    (*n)++;
}

void xoaPhanTuTaiViTri(int arr[], int *n, int viTri) {
    if (viTri < 0 || viTri >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = viTri; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void sapXepGiamDanInsertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

bool timKiemNhiPhan(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return true;
        }
        if (arr[mid] < x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return false;
}

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void inVaBinhPhuongSoNguyenTo(int arr[], int n) {
    bool coSoNguyenTo = false;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d^2 = %d\n", arr[i], arr[i] * arr[i]);
            coSoNguyenTo = true;
        }
    }
    if (!coSoNguyenTo) {
        printf("Khong co so nguyen to nao trong mang\n");
    }
}

void sapXepGiamDanBubble(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, choice, x, viTri;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Dem so luong cac phan tu chan le trong mang\n");
        printf("4. Tim gia tri lon thu hai trong mang\n");
        printf("5. Them mot phan tu vao dau mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan (Insertion sort)\n");
        printf("8. Tim kiem phan tu trong mang (Binary search)\n");
        printf("9. In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
        printf("10. Sap xep mang theo thu tu giam dan (Bubble sort)\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                inMang(arr, n);
                break;
            case 3:
                demChanLe(arr, n);
                break;
            case 4:
                printf("Gia tri lon thu hai trong mang: %d\n", timGiaTriLonThuHai(arr, n));
                break;
            case 5:
                printf("Nhap gia tri can them vao dau mang: ");
                scanf("%d", &x);
                themPhanTuDauMang(arr, &n, x);
                break;
            case 6:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &viTri);
                xoaPhanTuTaiViTri(arr, &n, viTri);
                break;
            case 7:
                sapXepGiamDanInsertion(arr, n);
                break;
            case 8:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                if (timKiemNhiPhan(arr, n, x)) {
                    printf("Phan tu %d co ton tai trong mang\n", x);
                } else {
                    printf("Phan tu %d khong ton tai trong mang\n", x);
                }
                break;
            case 9:
                inVaBinhPhuongSoNguyenTo(arr, n);
                break;
            case 10:
                sapXepGiamDanBubble(arr, n);
                break;
            case 0:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
