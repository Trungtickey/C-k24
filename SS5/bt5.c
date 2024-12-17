#include <stdio.h>

int main(){
//   int n;
//   printf("Nhap vao so nguyen duong n (1 <= n <= 9): ");
//   scanf("%d", &n);
//
//if( n >= 1 && n <= 9){
//    printf("Bang cuu chuong %d: \n", n);
//    for (int i = 1; i <= 9; i++){
//        int ketQua = n * i;
//        printf("%d x %d = %d \n", n, i, ketQua);
//    }
//} else {
//    printf("So vua nhap khong hop le! De nghi nhap lai. ");
//}

for(int i = 1; i <= 9; i++){
    for (int j = 1; j <= 9; j++){
        int ketQua = i * j;
        printf("%d x %d = %d \n",i, j, ketQua);
    }
}
    printf("Bang cuu chuong la: \n");
  return 0;
}