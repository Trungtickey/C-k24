#include<stdio.h>
#include "function.c"


int main(){
    loadFromFile();
    int choice;
    do{
        printf("\n*********MENU*********\n");
        printf("1. Them sach muon them\n");
        printf("2. Hien thi danh sach sach\n");
        printf("3. Nhap ID sach can sua\n");
        printf("4. Xoa sach\n");
        printf("5. Sap xep sach theo gia tien\n");
        printf("6. Tim kiem sach\n");
        printf("7. Thoat\n");
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
                editBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                sortBooks();
                break;
            case 6:
                searchBook();
                break;
            case 7:
                printf("Da thoat khoi chuong trinh");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!");
        }
    }while(choice!=7);
}
