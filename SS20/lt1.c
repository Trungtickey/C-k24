#include <stdio.h>
#include <string.h>

#define MAX 100
typedef struct {
    int id;
    char title[100];
    char author[50];
    float price;
    char category[50];
} Book;

Book books[MAX];
int bookCount = 0;

void inputBooks() {
    printf("Nhap so luong sach: ");
    scanf("%d", &bookCount);
    for (int i = 0; i < bookCount; i++) {
        printf("\nNhap thong tin sach thu %d:\n", i + 1);
        printf("Ma sach: ");
        scanf("%d", &books[i].id);
        printf("Ten sach: ");
        scanf(" %[^\n]", books[i].title);
        printf("Tac gia: ");
        scanf(" %[^\n]", books[i].author);
        printf("Gia tien: ");
        scanf("%f", &books[i].price);
        printf("The loai: ");
        scanf(" %[^\n]", books[i].category);
    }
}
void displayBooks() {
    if (bookCount == 0) {
        printf("Danh sach sach trong!\n");
        return;
    }
    printf("\nDanh sach sach:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("Ma: %d, Ten: %s, Tac gia: %s, Gia: %.2f, The loai: %s\n",
               books[i].id, books[i].title, books[i].author, books[i].price, books[i].category);
    }
}
void addBookAtPosition() {
    if (bookCount >= MAX) {
        printf("Danh sach sach da day!\n");
        return;
    }
    int pos;
    printf("Nhap vi tri can them (0-%d): ", bookCount);
    scanf("%d", &pos);
    if (pos < 0 || pos > bookCount) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = bookCount; i > pos; i--) {
        books[i] = books[i - 1];
    }

    printf("Nhap ma sach: ");
    scanf("%d", &books[pos].id);
    printf("Nhap ten sach: ");
    scanf(" %[^\n]", books[pos].title);
    printf("Nhap tac gia: ");
    scanf(" %[^\n]", books[pos].author);
    printf("Nhap gia tien: ");
    scanf("%f", &books[pos].price);
    printf("Nhap the loai: ");
    scanf(" %[^\n]", books[pos].category);

    bookCount++;
    printf("Da them sach thanh cong!\n");
}
void deleteBookById() {
    int id, found = 0;
    printf("Nhap ma sach can xoa: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            printf("Da xoa sach co ma %d\n", id);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sach co ma %d\n", id);
    }
}
void updateBookById() {
    int id, found = 0;
    printf("Nhap ma sach can cap nhat: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            printf("Nhap ten sach moi: ");
            scanf(" %[^\n]", books[i].title);
            printf("Nhap ten tac gia moi: ");
            scanf(" %[^\n]", books[i].author);
            printf("Nhap gia tien moi: ");
            scanf("%f", &books[i].price);
            printf("Nhap the loai moi: ");
            scanf(" %[^\n]", books[i].category);
            printf("Cap nhat thanh cong!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sach co ma %d\n", id);
    }
}
void sortBooksByPrice(int ascending) {
    for (int i = 0; i < bookCount - 1; i++) {
        for (int j = 0; j < bookCount - i - 1; j++) {
            if ((ascending && books[j].price > books[j + 1].price) ||
                (!ascending && books[j].price < books[j + 1].price)) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep sach theo gia %s!\n", ascending ? "tang dan" : "giam dan");
}
void searchBookByTitle() {
    char title[100];
    int found = 0;
    printf("Nhap ten sach can tim: ");
    scanf(" %[^\n]", title);

    for (int i = 0; i < bookCount; i++) {
        if (strstr(books[i].title, title)) {
            printf("Ma: %d, Ten: %s, Tac gia: %s, Gia: %.2f, The loai: %s\n",
                   books[i].id, books[i].title, books[i].author, books[i].price, books[i].category);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay sach co ten \"%s\"\n", title);
    }
}
void menu() {
    int choice;
    do {
        printf("\n======== MENU ========\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Cap nhat thong tin sach\n");
        printf("6. Sap xep sach theo gia (1-Tang, 0-Giam)\n");
        printf("7. Tim kiem sach theo ten\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputBooks();
            break;
            case 2: displayBooks();
            break;
            case 3: addBookAtPosition();
            break;
            case 4: deleteBookById();
            break;
            case 5: updateBookById();
            break;
            case 6: {
                int order;
                printf("Nhap lua chon (1-Tang, 0-Giam): ");
                scanf("%d", &order);
                sortBooksByPrice(order);
                break;
            }
            case 7: searchBookByTitle();
            break;
            case 8: printf("Da thoat khoi chuong trinh\n");
            break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);
}

int main() {
    menu();
    return 0;
}
