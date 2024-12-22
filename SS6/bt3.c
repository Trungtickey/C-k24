// Viết chương trình khai báo và gán giá trị cho một biến mật khẩu cho trước,
// yêu cầu người dùng nhập vào mật khẩu và kiểm tra xem có nhập đúng không và in kết quả ra màn hình.

#include <stdio.h>

int main(){
    int passWord = 2004;
    int userInput;

    printf("Yeu cau nhap mat khau\n");

    do{
        printf("nhap mat khau: ");
        scanf("%d", &userInput);
        if(userInput!=passWord){
            printf("Mat khau nhap khong dung! Vui long nhap lai.\n");
        }
    } while (userInput != passWord);

    printf("Mat khau chinh xac.\n");
    return 0;
}