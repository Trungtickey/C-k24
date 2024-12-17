#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, numberInput = 0; // Kiểm tra đã nhập 3 số hay chưa
    int choice;
    do{
        printf("MENU \n");
        printf("1. Nhap 3 so: \n");
        printf("2. Tong 3 so: \n");
        printf("3. Trung binh cong 3 so: \n");
        printf("4. So nho nhat: \n");
        printf("5. So lon nhat: \n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Nhap so thu 1: \n");
                scanf("%d", &a);
                printf("Nhap so thu 2: \n");
                scanf("%d", &b);
                printf("Nhap so thu 3: \n");
                scanf("%d", &c);
                numberInput = 1; // Đánh dấu đã nhập số
                printf("Ban da nhap: %d, %d, %d \n", a, b, c);
                break;
            case 2:
                if (numberInput) {
                    printf("Tong 3 so la: %d\n", a + b + c);
                } else {
                    printf("Hay nhap 3 so truoc (Chon 1).\n");
                }
                break;
            case 3:
                if (numberInput) {
                    printf("Trung binh cong 3 so la: %d\n", (a + b + c) / 3);
                } else {
                    printf("Hay nhap 3 so truoc (Chon 1).\n");
                }
                break;
            case 4:
                if (numberInput) {
                    int min = (a < b) ? a : b;
                    min = (min < c) ? min : c;
                    printf("So nho nhat la: %d\n", min);
                } else {
                    printf("Hay nhap 3 so truoc (Chon 1).\n");
                }
                break;
            case 5:
                if (numberInput) {
                    int max = (a > b) ? a : b;
                    max = (max > c) ? max : c;
                    printf("So lon nhat la: %d\n", max);
                } else {
                    printf("Hay nhap 3 so truoc (Chon 1).\n");
                }
                break;
            case 6:
                printf("Da thoat chuong trinh. \n");
                break;
            default:
                printf("Chuc nang khong hop le! Vui long nhap lai. \n");
                break;
        }
    }while(choice != 6);

    return 0;
}