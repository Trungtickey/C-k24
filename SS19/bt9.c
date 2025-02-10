#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

Student students[MAX];
int studentCount = 0;
void displayStudents() {
    if (studentCount == 0) {
        printf("Danh sach sinh vien trong!\n");
        return;
    }
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, PhoneNumber: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void addStudent() {
    if (studentCount >= MAX) {
        printf("Danh sach sinh vien da day!\n");
        return;
    }
    printf("Nhap ID: ");
    scanf("%d", &students[studentCount].id);
    printf("Nhap Tên: ");
    scanf(" %[^\n]", students[studentCount].name);
    printf("Nhap Tuổi: ");
    scanf("%d", &students[studentCount].age);
    printf("Nhap SĐT: ");
    scanf("%s", students[studentCount].phoneNumber);
    studentCount++;
    printf("Da them sinh vien thanh cong!\n");
}
void updateStudent() {
    int id, found = 0;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Nhap ten moi: ");
            scanf(" %[^\n]", students[i].name);
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            printf("Nhap SĐT moi: ");
            scanf("%s", students[i].phoneNumber);
            printf("Cap nhat thanh cong!\n");
            found = 1;
            break;
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ID %d\n", id);
    }
}
void deleteStudent() {
    int id, found = 0;
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Da xoa sinh vien co ID %d\n", id);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ID %d\n", id);
    }
}
void searchStudent() {
    int id, found = 0;
    printf("Nhap ID sinh vien can tim: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Thong tin sinh vien:\n");
            printf("ID: %d, Name: %s, Age: %d, PhoneNumber: %s\n",
                   students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ID %d\n", id);
    }
}
void sortStudents() {
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep danh sach sinh vien theo ten!\n");
}

int main() {
    int choice;
    do {
        printf("\n======== MENU ========\n");
        printf("1. Hien thi danh sach sinh vien\n");
        printf("2. Them sinh vien\n");
        printf("3. Sua thong tin sinh vien\n");
        printf("4. Xoa sinh vien\n");
        printf("5. Tim kiem sinh vien\n");
        printf("6. Sap xep danh sach sinh vien\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: displayStudents();
            break;
            case 2: addStudent();
            break;
            case 3: updateStudent();
            break;
            case 4: deleteStudent();
            break;
            case 5: searchStudent();
            break;
            case 6: sortStudents();
            break;
            case 7: printf("Da thoat khoi chuog trinh\n");
            break;
            default: printf("Lua chon khong hop le, vui long chon lai!\n");
        }
    } while (choice != 7);
    return 0;
}
