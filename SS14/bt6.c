// Khai báo và gán giá trị cho 1 chuỗi bất kỳ,
// viết chương trình yêu cầu người dùng đếm số ký tự là chữ cái có trong chuỗi và in ra màn hình.

#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    char nickName[1000] = "Trung Tickey";
    printf("Chuoi da khai bao: %s\n ", nickName);
    int lenght = strlen(nickName);
    int letter_count = 0;
    for(int i = 0; i < lenght; i++){
        if(isalpha(nickName[i])) {
            letter_count++;
        }
    }
    printf("So ky tu chu cai trong chuoi la: %d\n", letter_count);

    return 0;
}