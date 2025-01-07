// Khai báo và gán giá trị cho hai biến bất kỳ, xây dựng hàm sử dụng con trỏ để tiến hành đổi giá trị 2 biến với nhau và in giá trị của sau khi thay đổi.
// Gọi hàm và in 2 biến để kiểm tra kết quả.

#include<stdio.h>
//void swap(int input1, int input2){
//    int temp = input1;
//    input1 = input2;
//    input2 = temp;
//}

void swap2(int *input1, int *input2){
    // int *input1 = &num1, *input2 = &num2
    int temp = *input1;
    *input1 = *input2;
    *input2 = temp;
}

int main(){
    int num1 = 10, num2 = 20;

//    swap(num1, num2);
    swap2(&num1, &num2);

    printf("Num 1 = %d\n", num1);
    printf("Num 2 = %d\n", num2);

    return 0;
}