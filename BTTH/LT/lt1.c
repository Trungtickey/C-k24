#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STUDENTS 40
#define MAX_CLASSES 10

typedef struct {
    char student_id[6];
    char student_name[25];
    bool sex;
    char phone_number[11];
    char email[20];
    char birthday[10];
    char address[50];
    int status; // 0: Đang học, 1: Bỏ học, 2: Tốt nghiệp, 3: Tốt nghiệp sớm, 4: Bảo lưu, 5: Đình chỉ
} Student;

typedef struct {
    char class_id[6];
    char class_name[20];
    char majors[30];
    Student student_list[MAX_STUDENTS];
    int class_size;
    int status; // 0: Đang chờ, 1: Đang học, 2: Đã kết thúc
} Class;

Class classes[MAX_CLASSES];
int class_count = 0;

void addClass() {
    if (class_count >= MAX_CLASSES) {
        printf("Khong the them lop hoc moi. Danh sach lop hoc da day.\n");
        return;
    }
    Class new_class;
    printf("Nhap ma lop hoc: ");
    scanf("%s", new_class.class_id);
    printf("Nhap ten lop hoc: ");
    scanf("%s", new_class.class_name);
    printf("Nhap nganh hoc: ");
    scanf("%s", new_class.majors);
    new_class.class_size = 0;
    new_class.status = 0;
    classes[class_count++] = new_class;
    printf("Them lop hoc thanh cong!\n");
}

void viewClasses() {
    if (class_count == 0) {
        printf("Chua co lop hoc nao.\n");
        return;
    }
    printf("Danh sach lop hoc:\n");
    for (int i = 0; i < class_count; i++) {
        printf("Ma lop: %s, Ten lop: %s, Nganh hoc: %s, Si so: %d, Trang thai: %d\n",
               classes[i].class_id, classes[i].class_name, classes[i].majors,
               classes[i].class_size, classes[i].status);
    }
}

void editClass() {
    char class_id[6];
    printf("Nhap ma lop hoc can chinh sua: ");
    scanf("%s", class_id);
    for (int i = 0; i < class_count; i++) {
        if (strcmp(classes[i].class_id, class_id) == 0) {
            printf("Nhap ten lop hoc moi: ");
            scanf("%s", classes[i].class_name);
            printf("Nhap nganh hoc moi: ");
            scanf("%s", classes[i].majors);
            printf("Nhap trang thai moi (0: Dang cho, 1: Dang hoc, 2: Da ket thuc): ");
            scanf("%d", &classes[i].status);
            printf("Chinh sua thong tin lop hoc thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay lop hoc va ma da nhap.\n");
}

void deleteClass() {
    char class_id[6];
    printf("Nhap ma lop hoc can xoa: ");
    scanf("%s", class_id);
    for (int i = 0; i < class_count; i++) {
        if (strcmp(classes[i].class_id, class_id) == 0) {
            for (int j = i; j < class_count - 1; j++) {
                classes[j] = classes[j + 1];
            }
            class_count--;
            printf("Xoa lop hoc thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay lop hoc voi ma da nhap.\n");
}

void addStudent() {
    char class_id[6];
    printf("Nhap ma lop hoc de them sinh vien moi: ");
    scanf("%s", class_id);
    for (int i = 0; i < class_count; i++) {
        if (strcmp(classes[i].class_id, class_id) == 0) {
            if (classes[i].class_size >= MAX_STUDENTS) {
                printf("Khong the them sinh vien moi. Lop hoc da day.\n");
                return;
            }
            Student new_student;
            printf("Nhap ma sinh vien: ");
            scanf("%s", new_student.student_id);
            printf("Nhap ten sinh vien: ");
            scanf("%s", new_student.student_name);
            printf("Nhap gioi tinh (0: Nam, 1: Nu): ");
            scanf("%d", &new_student.sex);
            printf("Nhap so dien thoai: ");
            scanf("%s", new_student.phone_number);
            printf("Nhap email: ");
            scanf("%s", new_student.email);
            printf("Nhap ngay sinh: ");
            scanf("%s", new_student.birthday);
            printf("Nhap dia chi: ");
            scanf("%s", new_student.address);
            printf("Nhap trang thai (0: Dang hoc, 1: Bo hoc, 2: Tot nghiep, 3: Tot nghiep som, 4: Bao luu, 5: Dinh chi): ");
            scanf("%d", &new_student.status);
            classes[i].student_list[classes[i].class_size++] = new_student;
            printf("Them sinh vien thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay lop hoc voi ma da nhap.\n");
}

void viewStudents() {
    char class_id[6];
    printf("Nhap ma lop hoc de xem danh sach sinh vien: ");
    scanf("%s", class_id);
    for (int i = 0; i < class_count; i++) {
        if (strcmp(classes[i].class_id, class_id) == 0) {
            if (classes[i].class_size == 0) {
                printf("Lop hoc chua co sinh vien nao.\n");
                return;
            }
            printf("Danh sách sinh viên:\n");
            for (int j = 0; j < classes[i].class_size; j++) {
                printf("Mã sinh viên: %s, Tên sinh viên: %s, Giới tính: %d, Số điện thoại: %s, Email: %s, Ngày sinh: %s, Địa chỉ: %s, Trạng thái: %d\n",
                       classes[i].student_list[j].student_id, classes[i].student_list[j].student_name,
                       classes[i].student_list[j].sex, classes[i].student_list[j].phone_number,
                       classes[i].student_list[j].email, classes[i].student_list[j].birthday,
                       classes[i].student_list[j].address, classes[i].student_list[j].status);
            }
            return;
        }
    }
    printf("Không tìm thấy lớp học với mã đã nhập.\n");
}

void editStudent() {
    char class_id[6], student_id[6];
    printf("Nhập mã lớp học: ");
    scanf("%s", class_id);
    printf("Nhập mã sinh viên cần chỉnh sửa: ");
    scanf("%s", student_id);
    for (int i = 0; i < class_count; i++) {
        if (strcmp(classes[i].class_id, class_id) == 0) {
            for (int j = 0; j < classes[i].class_size; j++) {
                if (strcmp(classes[i].student_list[j].student_id, student_id) == 0) {
                    printf("Nhập tên sinh viên mới: ");
                    scanf("%s", classes[i].student_list[j].student_name);
                    printf("Nhập giới tính mới (0: Nữ, 1: Nam): ");
                    scanf("%d", &classes[i].student_list[j].sex);
                    printf("Nhập số điện thoại mới: ");
                    scanf("%s", classes[i].student_list[j].phone_number);
                    printf("Nhập email mới: ");
                    scanf("%s", classes[i].student_list[j].email);
                    printf("Nhập ngày sinh mới: ");
                    scanf("%s", classes[i].student_list[j].birthday);
                    printf("Nhập địa chỉ mới: ");
                    scanf("%s", classes[i].student_list[j].address);
                    printf("Nhập trạng thái mới (0: Đang học, 1: Bỏ học, 2: Tốt nghiệp, 3: Tốt nghiệp sớm, 4: Bảo lưu, 5: Đình chỉ): ");
                    scanf("%d", &classes[i].student_list[j].status);
                    printf("Chỉnh sửa thông tin sinh viên thành công!\n");
                    return;
                }
            }
            printf("Không tìm thấy sinh viên với mã đã nhập.\n");
            return;
        }
    }
    printf("Không tìm thấy lớp học với mã đã nhập.\n");
}

void deleteStudent() {
    char class_id[6], student_id[6];
    printf("Nhập mã lớp học: ");
    scanf("%s", class_id);
    printf("Nhập mã sinh viên cần xóa: ");
    scanf("%s", student_id);
    for (int i = 0; i < class_count; i++) {
        if (strcmp(classes[i].class_id, class_id) == 0) {
            for (int j = 0; j < classes[i].class_size; j++) {
                if (strcmp(classes[i].student_list[j].student_id, student_id) == 0) {
                    for (int k = j; k < classes[i].class_size - 1; k++) {
                        classes[i].student_list[k] = classes[i].student_list[k + 1];
                    }
                    classes[i].class_size--;
                    printf("Xóa sinh viên thành công!\n");
                    return;
                }
            }
            printf("Không tìm thấy sinh viên với mã đã nhập.\n");
            return;
        }
    }
    printf("Không tìm thấy lớp học với mã đã nhập.\n");
}

void viewStudentDetails() {
    char class_id[6], student_id[6];
    printf("Nhập mã lớp học: ");
    scanf("%s", class_id);
    printf("Nhập mã sinh viên cần xem chi tiết: ");
    scanf("%s", student_id);
    for (int i = 0; i < class_count; i++) {
        if (strcmp(classes[i].class_id, class_id) == 0) {
            for (int j = 0; j < classes[i].class_size; j++) {
                if (strcmp(classes[i].student_list[j].student_id, student_id) == 0) {
                    printf("Chi tiết sinh viên:\n");
                    printf("Mã sinh viên: %s\n", classes[i].student_list[j].student_id);
                    printf("Tên sinh viên: %s\n", classes[i].student_list[j].student_name);
                    printf("Giới tính: %d\n", classes[i].student_list[j].sex);
                    printf("Số điện thoại: %s\n", classes[i].student_list[j].phone_number);
                    printf("Email: %s\n", classes[i].student_list[j].email);
                    printf("Ngày sinh: %s\n", classes[i].student_list[j].birthday);
                    printf("Địa chỉ: %s\n", classes[i].student_list[j].address);
                    printf("Trạng thái: %d\n", classes[i].student_list[j].status);
                    return;
                }
            }
            printf("Không tìm thấy sinh viên với mã đã nhập.\n");
            return;
        }
    }
    printf("Không tìm thấy lớp học với mã đã nhập.\n");
}

void classMenu() {
    int choice;
    do {
        printf("--------------------------CLASS------------------------\n");
        printf("| 1. Xem danh sach lop hoc\n");
        printf("| 2. Them moi lop hoc\n");
        printf("| 3. Chinh sua thong tin lop hoc\n");
        printf("| 4. Xoa lop hoc\n");
        printf("| 0. Quay lai\n");
        printf("-------------------------------------------------------\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                viewClasses();
                break;
            case 2:
                addClass();
                break;
            case 3:
                editClass();
                break;
            case 4:
                deleteClass();
                break;
            case 0:
                printf("Quay lai menu chinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lua chon lai.\n");
        }
    } while (choice != 0);
}

void studentMenu() {
    int choice;
    do {
        printf("------------------------STUDENT------------------------\n");
        printf("| 1. Xem danh sach sinh vien\n");
        printf("| 2. Them moi sinh vien\n");
        printf("| 3. Chinh sua thong tin sinh vien\n");
        printf("| 4. Xem chi tiet thong tin sinh vien\n");
        printf("| 5. Xoa sinh vien\n");
        printf("| 0. Quay lai\n");
        printf("-------------------------------------------------------\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                viewStudents();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                viewStudentDetails();
                break;
            case 5:
                deleteStudent();
                break;
            case 0:
                printf("Quay lai menu chinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 0);
}

void mainMenu() {
    int choice;
    do {
        printf("-----------------------------PTIT------------------------\n");
        printf("| 1. Quan ly lop hoc\n");
        printf("| 2. Quan ly sinh vien\n");
        printf("| 3. Thong ke\n");
        printf("| 0. Thoat\n");
        printf("---------------------------------------------------------\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                classMenu();
                break;
            case 2:
                studentMenu();
                break;
            case 3:
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long lua chon lai.\n");
        }
    } while (choice != 0);
}

int main() {
    mainMenu();
    return 0;
}
