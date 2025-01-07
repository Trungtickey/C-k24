#include<stdio.h>
#include<string.h>

// Bai toan dem dau cach
int countWords(char str[]){
    int count = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' ' && str[i+1] != ' ' && i != strlen(str) - 1 || (i == 0 && str[i] != ' ')){
            count++;
        }
    }
    return count;
}

// Dem so luong ki tu la chu cai co trong chuoi

int main(){
    char str[] = "  rikkei academy  ";
    // kiem tra ki tu a xuat hien? vi tri nao va in ra chuoi con bat dau bang chu a
    printf("%s \n", strstr(str, "ddew"));
    // Neu khong tim thay
    char ch = 'T';
    ch += 32;
    printf("%c", ch);
    char strcp[7];
    strncpy(strcp, str, 6);
    printf("%s", strcp);

    printf("%d", countWords(str));
//    65<= char <=90 || 97 <= char <= 122
//    strupr()
//    strlwr() hai ham nay khong dc dung nhieu.

    return 0;
}