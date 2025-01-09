// Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính id, name, age và phoneNumber. Khai báo mảng sinh viên có độ dài là 50 và có sẵn 5 phần tử.
//Xây dựng tính năng sửa thông tin sinh viên. Cho người dùng nhập vào đại lượng id để tiến hành tìm kiếm sinh viên theo id.
// Nếu sinh viên tìm kiếm theo id không tồn tại trong mảng thì in thông báo không tìm thấy,
// nếu sinh viên tìm kiếm theo id tồn tại thì tiếp tục cho người dùng chỉnh sửa giá trị của 2 thuộc tính name và age (Không sửa id).
//In ra thông tin toàn bộ sinh viên có trong mảng sinh viên sau khi tiến hành chỉnh sửa.

#include<stdio.h>
#include<string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int findStudentById(struct Student students[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (students[i].id == id) {
            return i;
        }
    }
    return -1;
}

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
    int id;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &id);

    int index = findStudentById(students, n, id);
    if (index == -1) {
        printf("Khong tim thay sinh vien co ID: %d\n", id);
    } else {
        printf("Nhap ten moi: ");
        getchar();
        fgets(students[index].name, sizeof(students[index].name), stdin);
        students[index].name[strcspn(students[index].name, "\n")] = '\0';
        printf("Nhap tuoi moi: ");
        scanf("%d", &students[index].age);
    }

    printf("\nThong tin sinh vien sau khi chinh sua:\n");
    printStudents(students, n);

    return 0;
}

