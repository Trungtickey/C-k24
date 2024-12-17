#include<stdio.h>
#include<math.h>

int main(){
    int num1, num2, Bcnn;
    printf("Nhap num1: ");
    scanf("%d", &num1);

    printf("Nhap num2: ");
    scanf("%d", &num2);

    for(int i = 1; i <= (num1 * num2); i++){
        if(i % num1 ==0 && i % num2 == 0){
            Bcnn = i;
        }
    }
    printf("Boi chung nho nhat cua %d va %d la %d", num1, num2, Bcnn);

    return 0;
}