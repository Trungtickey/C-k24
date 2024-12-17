// Bài tập tổng hợp

#include<stdio.h>
#include<math.h>

int main(){
    int diem;
    printf("Nhap diem tong ket: ");
    scanf("%d", &diem);
    if(diem < 0 || diem > 100){
        printf("Nhap diem sai vui long nhap lai");
    }else{
        if(diem >= 90){
            printf("Xuat sac");
        } else if(diem >= 80){
            printf("Gioi");
        } else if(diem >= 70) {
            printf("Kha");
        } else if(diem >= 60){
            printf("Trung bình");
        } else {
            printf("Yéu");
        }
    }
    return 0;
}