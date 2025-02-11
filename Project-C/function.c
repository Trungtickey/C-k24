#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "datatype.h"

Book library[MAX_BOOKS];
int book_count = 0;

void addBook(){
    if (book_count >= MAX_BOOKS) {
        printf("\nThu vien da day! Khong the them sach moi.\n");
        return;
    }
    Book newBook;

    printf("\nNhap thong tin sach:\n");

    printf("Nhap ID sach: ");
    scanf("%d", newBook.bookId);
    getchar();

    printf("Nhap tieu de sach: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0;

    printf("Nhap ten tac gia: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0;

    printf("Nhap so luong sach: ");
    scanf("%d", &newBook.quantity);

    printf("Nhap gia sach: ");
    scanf("%d", &newBook.price);

    printf("Nhap thoi gian xuat ban(dd mm yyyy): ");
    scanf("%d %d %d", &newBook.publication.day, &newBook.publication.month, &newBook.publication.year);

    library[book_count++] = newBook;
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
    Book newBookEdit;
    int id;
    printf("Nhap ID sach can sua: ");
    scanf("%d", &id);
    getchar();

    for(int i = 0; i < book_count; i++){
        if(newBookEdit.bookId == id){
            fgets(newBookEdit.bookId, sizeof())
        }

    }





}
