#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "datatype.h"

const char *FILE_NAME = "C:\\Users\\hp\\CLionProjects\\tickey learns C\\LearnCagain\\Project-C\\library_data.txt";

Book library[MAX_BOOKS];
int book_count = 0;

int isDuplicateId(char id[10]){
    for(int i = 0; i < book_count; i++){
        if(strcmp(library[i].bookId, id) == 0){
            return 1;
        }
    }
    return 0;
}

int isDuplicateTitle(char *title){
    for(int i = 0; i < book_count; i++){
        if(strcmp(library[i].title, title) == 0){
            return 1;
        }
    }
    return 0;
}

void saveToFile() {
    FILE *file = fopen(FILE_NAME, "w");
    if (!file) {
        printf("Lỗi khi mở file để ghi dữ liệu!\n");
        return;
    }
    for (int i = 0; i < book_count; i++) {
        fprintf(file, "%s|%s|%s|%d|%d|%d|%d|%d\n", library[i].bookId, library[i].title, library[i].author,
                library[i].quantity, library[i].price, library[i].publication.day, library[i].publication.month, library[i].publication.year);
    }
    fclose(file);
}

void loadFromFile() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("Lỗi chưa nhập hay tạo file!");
        return;
    }
    while (fscanf(file, "%s|%99[^|]|%99[^|]|%d|%d|%d|%d|%d\n", &library[book_count].bookId, library[book_count].title,
                  library[book_count].author, &library[book_count].quantity, &library[book_count].price,
                  &library[book_count].publication.day, &library[book_count].publication.month, &library[book_count].publication.year) == 8) {
        book_count++;
    }
    fclose(file);
}

void addBook(){
    if (book_count >= MAX_BOOKS) {
        printf("\nThu vien da day! Khong the them sach moi.\n");
        return;
    }
    Book newBook;

    printf("\nNhap thong tin sach:\n");

    do{
        printf("Nhap ID sach: ");
        scanf("%s", newBook.bookId);
        fflush(stdin);
        if(isDuplicateId(newBook.bookId)){
            printf("ID khong hop le hoac da ton tai! Vui long nhap ID khac.\n");
        }
    }while(isDuplicateId(newBook.bookId));

    do{
        printf("Nhap tieu de sach: ");
        fgets(newBook.title, sizeof(newBook.title), stdin);
        newBook.title[strcspn(newBook.title, "\n")] = 0;
        if(isDuplicateTitle(newBook.title) || strlen(newBook.title) == 0){
            printf("Tieu de khong hop le hoac da ton tai! Vui long thu lai\n");
        }
    } while(isDuplicateTitle(newBook.title) || strlen(newBook.title) == 0);

    printf("Nhap ten tac gia: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0;

    printf("Nhap so luong sach: ");
    scanf("%d", &newBook.quantity);

    printf("Nhap gia sach: ");
    scanf("%d", &newBook.price);

    printf("Nhap thoi gian xuat ban(dd mm yyyy): ");
    scanf("%d%d%d", &newBook.publication.day, &newBook.publication.month, &newBook.publication.year);

    library[book_count++] = newBook;
    saveToFile();
    printf("\nDanh sach da duoc them thanh cong!");

}

void displayBooks(){
    if(book_count == 0){
        printf("\nKhong co sach trong thu vien. Yeu cau nhap sach!\n");
    } else {
        printf("%55s", "****ALL BOOKS****");
        printf("\n=============================================================================================\n");
        printf("|%-10s|%-30s|%-20s|%-8s|%-8s|%-10s|\n", "Book ID", "Tieu de", "Tac gia", "So luong", "Gia", "Xuat ban");
        printf("=============================================================================================\n");
        for (int i = 0; i < book_count; i++) {
            printf("|%-10s|%-30s|%-20s|%-8d|%-8d|%02d/%02d/%04d|", library[i].bookId, library[i].title,
                   library[i].author, library[i].quantity, library[i].price, library[i].publication.day,
                   library[i].publication.month, library[i].publication.year);
            printf("\n---------------------------------------------------------------------------------------------\n");
        }
    }
}

void editBook(){
    char id[10];
    printf("Nhap ID sach can sua: ");
    getchar();
    fgets(id,sizeof(id), stdin);
    id[strcspn(id, "\n")] = '\0';

    for(int i = 0; i < book_count; i++){
        if(strcmp(library[i].bookId, id) == 0){
            printf("Nhap tieu de moi: ");
            fgets(library[i].title, sizeof(library[i].title), stdin);
            library[i].title[strcspn(library[i].title, "\n")] = 0;

            printf("Nhap tac gia moi: ");
            fgets(library[i].author, sizeof(library[i].author), stdin);
            library[i].author[strcspn(library[i].author, "\n")] = 0;

            printf("Nhap so luong sach: ");
            scanf("%d", &library[i].quantity);

            printf("Nhap gia sach moi: ");
            scanf("%d", &library[i].price);

            printf("Nhap ngay, thang, nam san xuat moi (dd mm yyyy): ");
            scanf("%d%d%d", &library[i].publication.day, &library[i].publication.month, &library[i].publication.year);

            printf("\nSach da duoc cap nhat thanh cong!\n");
            return;
        }
    }
    printf("\nKhong tim thay sach qua ID.\n");

}

void deleteBook() {
    char id[10];
    printf("\nNhap ID sach can xoa: ");
    getchar();
    fgets(id,sizeof(id),stdin);
    id[strcspn(id, "\n")] = '\0';

    for (int i = 0; i < book_count; i++) {
        if (strcmp(library[i].bookId, id) == 0) {
            for (int j = i; j < book_count - 1; j++) {
                library[j] = library[j + 1];
            }
            book_count--;
            printf("\nSach da duoc xoa thanh cong!\n");
            return;
        }
    }
    printf("\nKhong tim thay sach qua ID.\n");
}

void sortBooks() {
    if(book_count < 2){
        printf("Khong co du lieu de sap xep!\n");
        return;
    }
    int choice;
    printf("\nChon kieu sap xep:\n1. Tang dan theo gia\n2. Giam dan theo gia\nNhap lua chon: ");
    scanf("%d", &choice);
    if(choice != 1 && choice != 2){
        printf("Nhap lua chon khong dung! Yeu cau nhap lai");
        while(getchar() != '\n');
    }
    getchar();

    for (int i = 0; i < book_count - 1; i++) {
        for (int j = i + 1; j < book_count; j++) {
            if ((choice == 1 && library[i].price > library[j].price) ||
                (choice == 2 && library[i].price < library[j].price)) {
                Book temp = library[i];
                library[i] = library[j];
                library[j] = temp;
            }
        }
    }
    printf("\nDanh sach sau khi sap xep:\n");
    displayBooks();
}

void searchBook(){
    char searchTitle[100];
    printf("Nhap tieu de sach can tim: ");
    getchar();
    fgets(searchTitle,sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';

    int found = 0;
//    for(int i = 0; i < book_count; i++){
//        if(strstr(library[i].title, searchTitle) != NULL){
//            printf("\nTim thay sach: ID: %s, Tieu de: %s, Tac gia: %s, So luong: %d, Gia: %d, Thoi gian san xuat: %02d/%02d/%04d",
//                   library[i].bookId, library[i].title, library[i].author,
//                   library[i].quantity, library[i].price,
//                   library[i].publication.day, library[i].publication.month, library[i].publication.year);
//            found = 1;
//        }
//    }
       for(int i = 0; i < book_count; i++){
           if(strstr(library[i].title, searchTitle) != NULL){
               printf("\nTim thay sach:\n");
               printf("\n*********************************************************************************************\n");
               printf("|%-10s|%-30s|%-20s|%-8s|%-8s|%-10s|\n", "Book ID", "Tieu de", "Tac gia", "So luong", "Gia", "Xuat ban");
               printf("*********************************************************************************************\n");
                   printf("|%-10s|%-30s|%-20s|%-8d|%-8d|%02d/%02d/%04d|", library[i].bookId, library[i].title,
                          library[i].author, library[i].quantity, library[i].price, library[i].publication.day,
                          library[i].publication.month, library[i].publication.year);
                   printf("\n*********************************************************************************************\n");

               found = 1;
           }
       }
    if(!found){
        printf("\nKhong tim thay sach voi tieu de da nhap.\n");
    }
}

