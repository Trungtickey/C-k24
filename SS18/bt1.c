// Viết chương trình khởi tạo cấu trúc sinh viên có các thuộc tính name, age và phoneNumber.
// Khai báo biến từ cấu trúc và gán giá trị cho biến đó. In biến ra màn hình sau khi khai báo.

#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1;
    strcpy(student1.name, "Ho Cong Thanh Trung");
    student1.age = 20;
    strcpy(student1.phoneNumber, "0123456789");

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Phone Number: %s\n", student1.phoneNumber);

    return 0;
}
