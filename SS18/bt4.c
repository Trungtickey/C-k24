// Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính id, name, age và phoneNumber.
// Khai báo mảng sinh viên có độ dài là 50 phần tử. Tiến hành nhập thông tin của 5 sinh viên vào trong mảng.
// Yêu cầu người dùng nhập thông tin của từng sinh viên, thuộc tính id không cần phải nhập mà sẽ tự động tăng bắt đầu từ 1.
// Sau khi nhập xong thì in thông tin các sinh viên trong mảng.

#include<stdio.h>
#include<string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];

    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1; // Tự động tăng id bắt đầu từ 1

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
        printf("Sinh vien thu %d:\n", students[i].id);
        printf("Ho va Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("SDT: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

