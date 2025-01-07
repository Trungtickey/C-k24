// Khai báo và gán giá trị cho hai biến số nguyên bất kỳ và một biến kết quả,
// xây dựng hàm sử dụng con trỏ để tính tổng hai số nguyên và lưu giá trị vào biến kết quả. Gọi hàm và in biến kết quả để kiểm tra.

#include<stdio.h>

int total(int *input1, int *input2, int *sum){
    *sum = *input1 + *input2;
}

int main(){
    int num1 = 10, num2 = 20, sum;
    total(&num1,&num2,&sum);

    printf("Tong 2 so num1 va num 2 = %d", sum);

    return 0;
}