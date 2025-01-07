// Khai báo và gán giá trị cho 1 chuỗi bất kỳ,
// viết chương trình đếm số ký tự là chữ cái, chữ số và ký tự đặc biệt có trong chuỗi đó và in ra màn hình.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char string[] = "    congthanhvn@gmail.com    ";
    printf("Chuoi da khai bao: %s\n", string);
    int length = strlen(string);
    int word = 0, num = 0, specialWord = 0;
    for(int i = 0; i < strlen(string); i++){
        if((string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')){
            word++;
        } else if(string[i] >= '0' && string[i] <= '9'){
            num++;
        } else if(string[i] != ' '){
            specialWord++;
        }
    }

    printf("So luong ki tu dac biet trong chuoi: %d\n", specialWord);
    printf("So luong chu cai trong chuoi: %d\n", word);
    printf("So luong chu so: %d\n", num);


    return 0;
}
