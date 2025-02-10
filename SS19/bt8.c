#include <stdio.h>
#include <string.h>
#define SIZE 5
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void printStudents(Student students[], int size) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Age: %d, PhoneNumber: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
void sortStudents(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    Student students[SIZE] = {
            {101, "Trung Tickey", 20, "0123456789"},
            {102, "Nguyen Dinh Kha", 21, "0987654321"},
            {103, "Nguyen Minh Thuan", 19, "0345678901"},
            {104, "Thai Nhu Ngoc", 19, "0765432109"},
            {105, "Luong Hoang Bao Tran", 19, "0256789012"}
    };

    printf("Danh sach sinh vien truoc khi sap xep:");
    printStudents(students, SIZE);

    sortStudents(students, SIZE);

    printf("\nDanh sach sinh vien sau khi sap xep theo ten:");
    printStudents(students, SIZE);

    return 0;
}
