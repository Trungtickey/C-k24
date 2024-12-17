#include<stdio.h>
#include<math.h>

int main(){
    float a, b;
    printf("Nhap vao so a: \n");
    scanf("%f", &a);
    printf("Nhap vao so b: \n");
    scanf("%f", &b);
    int choice = -1;
    do{
      printf("CALCULATOR \n");
      printf("1. Tong 2 so la: \n");
      printf("2. Hieu 2 so la: \n");
      printf("3. Tich 2 so la: \n");
      printf("4. Thuong 2 so la: \n");
      printf("5. Thoat\n");
      printf("Nhap lua chon: ");
      scanf("%d", &choice);

      switch(choice){
          case 1:
              printf("Tong 2 so la: %.2f \n", a + b);
              break;
          case 2:
              printf("Hieu 2 so la: %.2f \n", a - b);
              break;
          case 3:
              printf("Tich 2 so la: %.2f \n", a * b);
              break;
          case 4:
             printf("Thuong 2 so la: %.2f \n", a/b);
             break;
          case 5:
              printf("Da thoat khoi chuong trinh ");
              break;
          default:
              printf("Chuc nang khong hop le! Vui long nhap lai. \n");
              break;
      }
    }while(choice != 5);

    return 0;
}