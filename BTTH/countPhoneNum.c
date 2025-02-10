#include<regstr.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int checkLetter(char *p){
    // Kiểm tra lần lượt từng kí tự xem có kí tự nào ko phải số ko
    for(int i = 0; i < strlen(p); i++){
        if(p[i]<48 || p[i]>57){
            // Kí tự này ko phải chữ số , ko phải số điện thoại
            return 0;
        }
    }
    return 1
}

int main(){
    int value; // ket qua so khop
    // tra ve 0 neu nhu khop

    // Function call tp create regex
    // value = regcomp( &reegex, "[:word:]", 0);

    // Kiểm tra số điện thoại có đủ 10 sos hay không

    char *phone;
    // Kiểm tra người dùng nhập đủ 10 chữ số hay không,
    // Nếu không đủ thi thông báo lỗi và yêu cầu nhập lại

    do{
     printf("\n Nhap sdt:");
     gets(phone);
     if(strlen(phone)<10){
         printf("Ko du 10 chu so, nhap lai!");
     } else{
         if(checkLetter(phone)){
             // Trả về 0
             printf("\n Co ton tai ki tu khong phai chu so");
         }
         else{
             // Trả về 1
             printf("So dien thoai hop le");
             break;
         }
         break;
     }
    }while(true);
}