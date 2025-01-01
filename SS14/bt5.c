// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng đếm số từ trong chuỗi, mỗi từ sẽ cách nhau bởi dấu cách.

#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    char nickName[1000] = "Trung Tickey";
    int count = 0;
    int word = 0;
    int lenght = strlen(nickName);
    for (int i = 0; i < lenght; i++) {
        if (isspace(nickName[i])) {
            if (word) {
                word = 0;
            }
        } else {
            if (!word) {
                word = 1;
                count++;
            }
        }
    }

    printf("So tu trong chuoi: %d\n ", count);


    return 0;
}