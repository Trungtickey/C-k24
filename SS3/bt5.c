#include <stdio.h>

int main(){
   int num, age;
   char hoVaTen[100], phoneNumber[20], email[100];

   // In ra danh sách:
   printf("Nhap so thu tu: ");
   scanf("%d", &num);
    fflush(stdin);
   printf("\nNhap ho va ten: ");
   scanf("%c", &hoVaTen[100]);
    fflush(stdin);
   printf("\nNhap tuoi: ");
   scanf("%d", &age);
    fflush(stdin);
   printf("\nNhap so dien thoai: ");
   scanf("%c", &phoneNumber[20]);
    fflush(stdin);
   printf("\nNhap email: ");
   scanf("%c", &email[100]);

   return 0;
}