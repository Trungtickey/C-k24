#include <stdio.h>
#include <string.h>
#define MAX 5
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void printStudents(Student students[], int length) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < length; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

void deleteStudent(int id, Student students[], int *length) {
    int index = -1;
    for (int i = 0; i < *length; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("\nKhong tim thay sinh vien co ID %d!\n", id);
        return;
    }
    for (int i = index; i < *length - 1; i++) {
        students[i] = students[i + 1];
    }

    (*length)--; // Giảm số lượng sinh viên đi 1
    printf("\nDa xoa sinh vien co ID %d!\n", id);
}

int main() {
    Student students[MAX] = {
            {101, "Trung Tickey", 20, "0123456789"},
            {102, "Nguyen Dinh Kha", 21, "0987654321"},
            {103, "Nguyen Minh Thuan", 19, "0345678901"},
            {104, "Thai Nhu Ngoc", 19, "0765432109"},
            {105, "Luong Hoang Bao Tran", 19, "0256789012"}
    };

    int currentLength = MAX;

    printStudents(students, currentLength);

    int idToDelete;
    printf("\nNhap ID sinh vien can xoa: ");
    scanf("%d", &idToDelete);

    deleteStudent(idToDelete, students, &currentLength);

    printStudents(students, currentLength);

    return 0;
}
