// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình in ra tất cả các ký tự và số lần xuất hiện của từng ký tự.

#include<stdio.h>
#include<string.h>

int main(){
    char nickName[100] = "Trung Tickey";
    char ch[100];
    int freq[100] = {0};
    int length = strlen(nickName);

    for(int i = 0; i < length; i++){
        ch[i] = nickName[i];
        freq[i] = -1;
    }
    for(int i = 0; i < length; i++){
        int count = 1;
        for(int j = i + 1; j < length; j++){
            if(nickName[i] == nickName[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0){
            freq[i] = count;
        }
    }
    printf("So lan xuat hien cua mot ky tu trong chuoi: \n");
    for(int i = 0; i < length; i++){
        if(freq[i] != 0){
            printf("%c: %d\n", ch[i], freq[i]);
        }
    }

    return 0;
}