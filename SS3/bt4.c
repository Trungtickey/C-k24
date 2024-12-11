#include <stdio.h>

int main(){
    float math, lite, eng;
    printf("Nhap diem toan: ");
    scanf("%f", &math);
    printf("Nhap diem van: ");
    scanf("%f", &lite);
    printf("Nhap diem anh: ");
    scanf("%f", &eng);


    printf("Tong 3 diem toan van anh la: %.2f\n", math + lite + eng);
    printf("Diem trung binh 3 mon la: %.2f", (math + lite + eng) / 3);
    return 0;
}