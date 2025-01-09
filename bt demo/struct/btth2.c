#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    char student_id[5];
    char student_name[25];
    int sex;
    Date birthday;
    char phone[11];
    float points[5];
};

int main(){
    struct Student dang_quoc_phong = {"S001", "Dang Quoc Phong", 1, {2, 11, 2000}, " ", {8.0, 9.5 , 7.0, 10.0, 6.5}};

    // Truy cập và in thông tin sinh viên
    printf("Ma sinh vien: %s\n", dang_quoc_phong.student_id);
    printf("Ten sinh vien: %s\n", dang_quoc_phong.student_name);
    printf("Ngay sinh: %d/%d/%d\n", dang_quoc_phong.birthday.day,
                                           dang_quoc_phong.birthday.month,
                                           dang_quoc_phong.birthday.year);

    // In ra điểm của sinh viên 1
    printf("Diem trung binh mon 1 cua sinh vien 1: %.2f\n", dang_quoc_phong.points[0]);
}