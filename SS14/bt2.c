// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, in ra từng ký tự trong chuỗi đã khai báo, mỗi ký tự cách nhau 1 dấu cách.

#include<stdio.h>
#include<string.h>

int main(){
    char nickName[1000] = "Trung Tickey";
    printf("Cac ky tu trong chuoi: ");
    int lenght = strlen(nickName);
    for(int i = 0; lenght > i; i++){
        printf(" %c ", nickName[i]);
    }
    printf("\n");

    return 0;
}