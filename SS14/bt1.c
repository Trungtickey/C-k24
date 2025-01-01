// Viết chương trình yêu cầu người dùng nhập vào một chuỗi bất kỳ, in ra chuỗi vừa nhập và độ dài chuỗi đó.

#include<stdio.h>
#include<string.h>
int main(){
    char word[1000];
    printf("Nhap vao chuoi: ");
    fgets(word, sizeof(word), stdin);

    int length = strlen(word);
    if (length > 0 && word[length - 1] == '\n') {
        word[length - 1] = '\0';
        --length;
    }

    printf("Chuoi vua nhap: %s\n", word);
    printf("Do dai cua chuoi: %d\n", length);

    return 0;
}