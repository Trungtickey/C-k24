#include<stdio.h>
#include<math.h>

int main(){
    int N ,sum = 0, giaiThua = 1;
    printf("Nhap vao so nguyen N: \n");
    scanf("%d", &N);
    int choice = -1;
    do{
      printf("1.Tinh tong cac so nguyen tu 1 to N: \n");
      printf("2.In ra cac so nguyen tu 1 to N(theo thu tu): \n");
      printf("3.In ra cac so chan tu 1 den N: \n");
      printf("4.Tinh giai thua cua so N: \n");
      printf("5.Thoat\n");
      printf("Moi ban chon chuc nang: ");
      scanf("%d", &choice);

      switch(choice){
          case 1:
              for(int i = 1; i <= N; i++){
                 sum += i;
              }
              printf("Tong la: %d \n", sum);
              break;
          case 2:
              for(int i = 1; i <= N; i++){
                  printf("%d \n", i);
              }
              break;
          case 3:
              for(int i = 1; i <= N; i++){
                  if(i % 2 == 0){
                      printf("%d \n", i);
                  }
              }
              break;
          case 4:
              for(int i = 1; i <= N; i++){
                  giaiThua *= i;
              }
              printf("Giai thua la: %d \n", giaiThua);
              break;
          case 5:
              printf("Da thoat khoi chuong trinh \n");
              break;
          default:
              printf("Chuc nang khong hop le! Vui long nhap lai. \n");
              break;
      }
    }while(choice != 5);

    return 0;
}