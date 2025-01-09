// Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính id, name, age và phoneNumber.
// Khai báo mảng sinh viên có độ dài là 50 và có sẵn 5 phần tử.
//Xây dựng tính năng chèn sinh viên vào vị trí ngẫu nhiên trong mảng sinh viên.
// Yêu cầu người dùng nhập và vị trí cần chèn và thông tin sinh viên cần thêm vào trong mảng.
//Hiển thị ra toàn bộ thông tin của sinh viên có trong mảng sau khi chèn một sinh viên.

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

void insertStudent(struct Student students[], int *n, int position, struct Student newStudent) {
    if (*n >= 50) {
        printf("Mang sinh vien da day, khong the them moi.\n");
        return;
    }
    for (int i = *n; i > position; i--) {
        students[i] = students[i - 1];
    }
    students[position] = newStudent;
    (*n)++;
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
    struct Student newStudent;
    newStudent.id = n + 1;
    printf("Nhap ten sinh vien moi: ");
    getchar();
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    printf("Nhap tuoi sinh vien moi: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai sinh vien moi: ");
    scanf("%s", newStudent.phoneNumber);

    int position;
    printf("Nhap vi tri can chen (0 den %d): ", n);
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Vi tri khong hop le.\n");
    } else {
        insertStudent(students, &n, position, newStudent);
    }

    printf("\nThong tin sinh vien sau khi chen moi:\n");
    printStudents(students, n);

    return 0;
}
