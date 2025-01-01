// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng nhập vào 1 ký tự bất kỳ,
// in ra số lần xuất hiện của ký tự đó trong chuỗi đã khai báo.

#include<stdio.h>
#include<string.h>

int main(){
    char nickName[1000] = "Trung Tickey";
    char word;
    int count = 0;
    printf("Chuoi da khai bao: %s\n ", nickName);
    int lenght = strlen(nickName);
    printf("Nhap vao mot ki tu bat ki: ");
    scanf("%c", &word);

    for(int i=0; i < lenght; i++){
        if(nickName[i] == word){
            count++;
        }
    }
    printf("Ky tu %c xuat hien %d lan trong chuoi. \n", word, count);

    return 0;
}