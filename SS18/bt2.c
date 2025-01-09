// Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính name, age và phoneNumber.
// Khai báo biến từ cấu trúc và yêu cầu người dùng nhập vào từng thuộc tính của biến. In biến ra màn hình sau khi nhập xong

#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1;
    printf("Nhap ten sv: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0';

    printf("Nhap tuoi sv: ");
    scanf("%d", &student1.age);
    printf("Nhap sdt: ");
    scanf("%s", student1.phoneNumber);

    printf("\nThong tin sinh vien:\n");
    printf("Ho va Ten: %s\n", student1.name);
    printf("Tuoi: %d\n", student1.age);
    printf("SDT: %s\n", student1.phoneNumber);

    return 0;
}
