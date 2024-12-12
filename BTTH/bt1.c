#include <stdio.h>

int main() {
    char *names[] = {"Nguyen Van A", "Nguyen Van B", "Nguyen Van C"};
    float toan[] = {7.5, 7.0, 6.5};
    float ly[] = {7.0, 8.5, 7.2};
    float hoa[] = {5.5, 9.0, 6.5};
    float sinh[] = {8.5, 5.0, 10.0};
    float van[] = {7.5, 6.5, 5.5};
    float diemTB[3];

    for (int i = 0; i < 3; i++) {
        diemTB[i] = (toan[i] + ly[i] + hoa[i] + sinh[i] + van[i]) / 5;
    }

    printf("| %-5s | %-20s | %-5s | %-5s | %-5s | %-5s | %-5s | %-5s |\n", "STT", "Ho Ten", "Toan", "Ly", "Hoa", "Sinh", "Van", "Diem TB");

    for (int i = 0; i < 3; i++) {
        printf("| %-5d | %-20s | %-5.1f | %-5.1f | %-5.1f | %-5.1f | %-5.1f | %-5.1f |\n", i + 1, names[i], toan[i], ly[i], hoa[i], sinh[i], van[i], diemTB[i]);
    }

    return 0;
}
