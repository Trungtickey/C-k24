#include<stdio.h>
// Ứng dụng: tạo struct mô tả thông tin về laptop gồm: tên, hãng, kích thước, màu sắc, ram, giá tiền.

struct Size{
    float dai, rong, day, can_nang;
};

struct Laptop{
    char name[50];
    char brand[20];
    struct Size size;
    char color[10];
    float ram;
    int price;
};

int main(){
    struct Laptop dell = {"DELL 3580 Inprison ...",
            "DELL", {1280, 860, 30, 0.5},
            "Black", 11.9,6000000};
    printf("Thong so may tinh: \n");
    printf("Ten may: %s\n", dell.name);

    return 0;
}