// Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính id, name, age và phoneNumber.
// Khai báo mảng sinh viên có độ dài là 50 và có sẵn 5 phần tử.
//Xây dựng tính năng thêm sinh viên vào vị trí cuối cùng của mảng sinh viên. Yêu cầu người dùng nhập thông tin sinh viên cần thêm và lưu lại vào mảng.
//Hiển thị ra toàn bộ thông tin của sinh viên có trong mảng sau khi thêm mới một sinh viên.

#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void printStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

int main() {
    struct Student students[50] = {
            {1, "Huynh Tam Anh", 19, "0123456789"},
            {2, "Nguyen Dinh Kha", 21, "0987654321"},
            {3, "Ho Cong Thanh Trung", 20, "0112233445"},
            {4, "Nguyen Xuan Hung", 30, "0223344556"},
            {5, "Nguyen Thanh Binh Phuoc", 40, "0334455667"}
    };
    int n = 5;

    if (n < 50) {
        students[n].id = n + 1;
        printf("Nhap ten sinh vien moi: ");
        getchar();
        fgets(students[n].name, sizeof(students[n].name), stdin);
        students[n].name[strcspn(students[n].name, "\n")] = '\0';
        printf("Nhap tuoi sinh vien moi: ");
        scanf("%d", &students[n].age);
        printf("Nhap so dien thoai sinh vien moi: ");
        scanf("%s", students[n].phoneNumber);
        n++;
    } else{
        printf("Mang sinh vien da day, khong the them moi");
    }

    printf("\nThong tin sinh vien sau khi them moi:\n");
    printStudents(students, n);

    return 0;
}
