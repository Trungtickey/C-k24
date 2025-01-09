// Cú pháp tao Struct
// Struct + Tên Struct {
// Các thành phần/ thuoc tinh / dac diem
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Vi du : Ngay thang nam
// Bieu dien thong tin cua 1 chiec dien thoai(�t nhat 5 thong tin): kich thuoc(with, height, weight), color, brand,
// tu khoa typedef
struct Phone{
    float width;
    float weight;
    float height;
    char color[20];
    char brand[20];
};
typedef struct Phone Phone;

struct Date{
    // liet ke cac bien
    int day;
    int month;
    int year;
    char patern[15]; // ? VN dd/MM/yyyy
};
typedef struct Student{
    char name[20];
    Date birthday; // nested struct : cau truc long
} Student;
// mang cau truc
Student list[100];

int main(){
    // khai bao bien Struct
    struct Date today = {8,1,2025,"dd/MM/yyyy"}; // literal
    struct Date today1 = {9,1,2025,"dd/MM/yyyy"}; // literal
    // su dung con tro de khai bao ngay hom nay
    today.day = 25;
    printf("Ngay hom nay l� %d/%d/%d\n", today1.day, today.month, today.year);

    Phone iphone14 = { 71.5,172,146.7,"Trang den","Apple"};
    printf("Iphone 14 : rong %.2fmm, dai %.2fmm, nang %.2fgram, mau sac %s, hang %s", iphone14.width, iphone14.height, iphone14.weight, iphone14.color, iphone14.brand);

    // con tro voi struct
    Phone *phonePtr;
//	phonePtr = &iphone14;
//	printf("Iphone 14 : rong %.2fmm, dai %.2fmm, nang %.2fgram, mau sac %s, hang %s", phonePtr->width,
//	 phonePtr->height, phonePtr->weight,phonePtr->color,phonePtr->brand);
//
// cap phat dong
    phonePtr = (Phone *) malloc(sizeof(Phone));
    strcpy(phonePtr->color,"mau xanh");
    printf("\ncolor : %s", phonePtr->color);
    free(phonePtr);
    return 0;
}