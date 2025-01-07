// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng nhập vào 1 ký tự và xóa các ký tự đó khỏi chuỗi đã khai báo.

#include<stdio.h>
#include<string.h>

int main(){
    char nickName[1000] = "Trung Tickey";
    int length = strlen(nickName);
    char word;
    printf("Nhap vao ky tu muon xoa: ");
    scanf("%c", &word);
    int j = 0;

    for(int i = 0; i < length; i++){
        if(nickName[i] != word){
          nickName[j++] = nickName[i];
        }
    }
    nickName[j] = '\0';
    printf("Chuoi sau khi da xoa ky tu '%c': %s\n", word, nickName);
    return 0;
}