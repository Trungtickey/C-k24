// Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính id, name, age và phoneNumber.
// Khai báo mảng sinh viên có độ dài 50 và có sẵn 5 phần tử.
//Xây dựng tính năng xoá sinh viên vào trong mảng sinh viên. Yêu cầu người dùng nhập vào tên (name) sinh viên cần phải xoá.
// Tiến hành tìm kiếm sinh viên theo tên. Nếu sinh viên đó không tồn tại, thông báo không tồn tại. Nếu sinh viên đó có tồn tại,
// tiền hành xoá sinh viên đó khỏi mảng.
//Hiển thị ra toàn bộ thông tin của sinh viên có trong mảng sau khi xoá một sinh viên.

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

int findStudentByName(struct Student students[], int n, char name[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void deleteStudent(struct Student students[], int *n, int index) {
    for (int i = index; i < *n - 1; i++) {
        students[i] = students[i + 1];
    }
    (*n)--;
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
    char name[50];
    printf("Nhap ten sinh vien can xoa: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int index = findStudentByName(students, n, name);
    if (index == -1) {
        printf("Khong tim thay sinh vien co ten: %s\n", name);
    } else {
        deleteStudent(students, &n, index);
        printf("Da xoa sinh vien co ten: %s\n", name);
    }

    printf("\nThong tin sinh vien sau khi xoa:\n");
    printStudents(students, n);

    return 0;
}
