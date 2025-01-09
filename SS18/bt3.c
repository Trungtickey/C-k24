// Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính name, age và phoneNumber.
// Khai báo mảng sinh viên có 5 phần tử và yêu cầu người dùng nhập thông tin của từng sinh viên.
// Sau khi nhập xong thì in thông tin các sinh viên trong mảng.

#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);

        printf("Nhap ten sv: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Nhap tuoi sv: ");
        scanf("%d", &students[i].age);
        printf("Nhap sdt: ");
        scanf("%s", students[i].phoneNumber);

        printf("\n");
    }

    printf("Thong tin sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ho va Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("SDT: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
