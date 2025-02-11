#include<stdio.h>
#include "function.c"
#include "datatype.h"

int main(){
    int choice;
    do{
        printf("\n*********MENU*********\n");
        printf("1. Them sach muon them\n");
        printf("2. Hien thi danh sach sach\n");
        printf("3. Nhap ID sach can sua\n");
        printf("4. Xoa sach\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:

                break;
            case 4:
                break;
            case 5:
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!");
        }
    }while(choice!=5);
}
