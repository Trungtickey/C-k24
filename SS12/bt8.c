// Xây dựng hàm tìm ước chung lớn nhất có 2 tham số, kết quả trả về là ước chung lớn nhất của 2 đối số truyền vào.
// Viết chương trình khai báo và gán giá trị cho 2 số nguyên bất kỳ, sử dụng hàm đã xây dựng để tìm ước chung lớn nhất của chúng.

#include <stdio.h>

int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a > 0 ? a : -a;
}

int main() {
    int so1, so2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);

    int ucln = timUCLN(so1, so2);

    printf("Uoc chung lon nhat cua %d và %d la: %d\n", so1, so2, ucln);

    return 0;
}
