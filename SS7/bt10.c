// Viết chương trình yêu cầu người dùng nhập vào số phần tử của mảng và từng phần tử có trong mảng. Tiến hành in ra tất cả các phần tử trong mảng là số nguyên tố.

#include <stdio.h>

int main(){
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arrayInt[n];

    for(int i = 0; i < n; i++){
        printf("Nhap array[%d] : ", i);
        scanf("%d", arrayInt + i);
    }

    // Kiểm tra số nguyên tố
    printf("Cac so nguyen to: ");
   for(int i = 0; i < n; i++){
       int so = arrayInt[i];
       int flag = 1;
       if(so < 2){
           // Ko phải số nguyên tố
           flag = 0;
       } else {
           for(int i = 2; i*i <= so; i++){
               if(so % i ==0){
                   // Ko phải số nguyên tố
                   flag = 0;
                   break; // dùng vòng lặp ko cần thiết
               }
           }
       }
       if(flag){
           // Là số nguyên tố
           printf("%d", so);
       } else{
           // ko phải
       }
   }
}