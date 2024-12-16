#include <stdio.h>

int main(){
    int n;
    printf("Nhap vao so nguyen duong: ");
    scanf("%d", &n);
   if( n <= 0){
       printf("So nhap vao sai! Vui long nhap lai. ");
       return 1;
   }

   printf("Cac uoc cua so nguyen duong %d la: ", n);
   for(int i = 1; i <= n; i++){
       if( n % i == 0){
           printf("%d ", i);
       }
   }
   printf("\n");
    return 0;

}