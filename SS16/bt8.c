// Khai báo 2 biến inputString và reverseString là 2 chuỗi, viết chương trình yêu cầu người dùng nhập vào một chuỗi và lưu vào biến inputString.
// Tiến hành đảo ngược chuỗi đã nhập và lưu kết quả vào biến reverseString sử dụng con trỏ. In 2 chuỗi ra màn hình để kiểm tra kết quả.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *inputString, *reverseString; // Khởi tạo 2 con trỏ null
    inputString = (char *)malloc(20*sizeof(char));
    reverseString = (char *)malloc(20*sizeof(char));
    // Nhập đầu vào
    printf("Hay nhap 1 chuoi: ");
    gets(inputString);
    // Cách 1:
    // Đảo ngược chuỗi
    strrev(inputString);
    // Copy giá tri luu vào biến reverseString
    strcpy(reverseString, inputString);

    printf("Input: %s\n", inputString);
    printf("Output: %s\n", reverseString);

    // Cách 2:

    int length = strlen(inputString);
    for(int i = length-1; i>=0; i--){
        *(reverseString + (length - 1 - i)) = *(inputString + i)
    }

    return 0;

    return 0;
}