// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình in ra chuỗi đảo ngược của chuỗi đã khai báo.

#include<stdio.h>
#include<string.h>

int main(){
    char nickName[1000] = "Trung Tickey";
    printf("Chuoi da khai bao: %s\n ", nickName);
    int lenght = strlen(nickName);
    printf("Chuoi da dao nguoc: ");
    for(int i = lenght - 1; i >= 0; i--){
        printf("%c", nickName[i]);
    }
    printf("\n");

    return 0;
}