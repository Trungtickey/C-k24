#include<stdio.h>
#include<math.h>

int main(){
   int num1, num2, Ucln;
   printf("Nhap num1: ");
   scanf("%d", &num1);

    printf("Nhap num2: ");
    scanf("%d", &num2);

    for(int i = 1; i <= num1 && i <= num2; i++){
       if(num1 % i ==0 && num2 % i == 0){
          Ucln = i;
       }
    }
      printf("Uoc chung lon nhat cua %d va %d la %d", num1, num2, Ucln);

    return 0;
}