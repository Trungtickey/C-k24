#include <stdio.h>
#include <string.h>

#define MAX 100
typedef struct {
    int id;
    char name[100];
    float importPrice;
    float sellPrice;
    int quantity;
} Product;

Product products[MAX];
int productCount = 0;
float revenue = 0.0;

// Hàm kiểm tra sản phẩm có tồn tại không (trả về index nếu có, -1 nếu không)
int findProductById(int id) {
    for (int i = 0; i < productCount; i++) {
        if (products[i].id == id) return i;
    }
    return -1;
}
void inputProducts() {
    printf("Nhap so luong san pham: ");
    scanf("%d", &productCount);
    for (int i = 0; i < productCount; i++) {
        printf("\nNhap thong tin san pham thu %d:\n", i + 1);
        printf("Ma san pham: ");
        scanf("%d", &products[i].id);
        printf("Ten san pham: ");
        scanf(" %[^\n]", products[i].name);
        printf("Gia nhap: ");
        scanf("%f", &products[i].importPrice);
        printf("Gia ban: ");
        scanf("%f", &products[i].sellPrice);
        printf("So luong: ");
        scanf("%d", &products[i].quantity);
        revenue -= products[i].quantity * products[i].importPrice;
    }
}
void displayProducts() {
    if (productCount == 0) {
        printf("Khong co san pham nao!\n");
        return;
    }
    printf("\nDanh sach san pham:\n");
    for (int i = 0; i < productCount; i++) {
        printf("Ma: %d, Ten: %s, Gia nhap: %.2f, Gia ban: %.2f, So luong: %d\n",
               products[i].id, products[i].name, products[i].importPrice, products[i].sellPrice, products[i].quantity);
    }
}
void addProduct() {
    int id, quantity;
    float importPrice, sellPrice;
    char name[100];

    printf("Nhap ma san pham: ");
    scanf("%d", &id);

    int index = findProductById(id);
    if (index != -1) {
        printf("San pham da ton tai! Nhap so luong them: ");
        scanf("%d", &quantity);
        products[index].quantity += quantity;
        revenue -= quantity * products[index].importPrice;
        printf("Cap nhat so luong thanh cong!\n");
    } else {
        if (productCount >= MAX) {
            printf("Danh sach san pham da day!\n");
            return;
        }
        printf("Nhap ten san pham: ");
        scanf(" %[^\n]", name);
        printf("Nhap gia nhap: ");
        scanf("%f", &importPrice);
        printf("Nhap gia ban: ");
        scanf("%f", &sellPrice);
        printf("Nhap so luong: ");
        scanf("%d", &quantity);

        products[productCount].id = id;
        strcpy(products[productCount].name, name);
        products[productCount].importPrice = importPrice;
        products[productCount].sellPrice = sellPrice;
        products[productCount].quantity = quantity;

        revenue -= quantity * importPrice;
        productCount++;
        printf("Da them san pham thanh cong!\n");
    }
}
void updateProduct() {
    int id, index;
    printf("Nhap ma san pham can cap nhat: ");
    scanf("%d", &id);
    index = findProductById(id);

    if (index == -1) {
        printf("Khong tim thay san pham!\n");
        return;
    }

    printf("Nhap ten san pham moi: ");
    scanf(" %[^\n]", products[index].name);
    printf("Nhap gia nhap moi: ");
    scanf("%f", &products[index].importPrice);
    printf("Nhap gia ban moi: ");
    scanf("%f", &products[index].sellPrice);
    printf("Nhap so luong moi: ");
    scanf("%d", &products[index].quantity);

    printf("Cap nhat san pham thanh cong!\n");
}
void sortProductsByPrice(int ascending) {
    for (int i = 0; i < productCount - 1; i++) {
        for (int j = 0; j < productCount - i - 1; j++) {
            if ((ascending && products[j].sellPrice > products[j + 1].sellPrice) ||
                (!ascending && products[j].sellPrice < products[j + 1].sellPrice)) {
                Product temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep san pham theo gia %s!\n", ascending ? "tang dan" : "giam dan");
}
void searchProduct() {
    char name[100];
    printf("Nhap ten san pham can tim: ");
    scanf(" %[^\n]", name);
    int found = 0;

    for (int i = 0; i < productCount; i++) {
        if (strstr(products[i].name, name)) {
            printf("Ma: %d, Ten: %s, Gia nhap: %.2f, Gia ban: %.2f, So luong: %d\n",
                   products[i].id, products[i].name, products[i].importPrice, products[i].sellPrice, products[i].quantity);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay san pham!\n");
    }
}
void sellProduct() {
    int id, quantity;
    printf("Nhap ma san pham can ban: ");
    scanf("%d", &id);
    int index = findProductById(id);

    if (index == -1) {
        printf("Khong tim thay san pham!\n");
        return;
    }

    if (products[index].quantity == 0) {
        printf("San pham da het hang!\n");
        return;
    }

    printf("Nhap so luong can ban: ");
    scanf("%d", &quantity);

    if (quantity > products[index].quantity) {
        printf("Khong du hang de ban!\n");
        return;
    }

    products[index].quantity -= quantity;
    revenue += quantity * products[index].sellPrice;
    printf("Ban hang thanh cong!\n");
}
void displayRevenue() {
    printf("Doanh thu hien tai: %.2f\n", revenue);
}
void menu() {
    int choice;
    do {
        printf("\n======== MENU ========\n");
        printf("1. Nhap thong tin san pham\n");
        printf("2. Hien thi danh sach san pham\n");
        printf("3. Nhap san pham\n");
        printf("4. Cap nhat san pham\n");
        printf("5. Sap xep san pham theo gia\n");
        printf("6. Tim kiem san pham\n");
        printf("7. Ban san pham\n");
        printf("8. Xem doanh thu\n");
        printf("9. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputProducts();
            break;
            case 2: displayProducts();
            break;
            case 3: addProduct();
            break;
            case 4: updateProduct();
            break;
            case 5: sortProductsByPrice(1);
            break;
            case 6: searchProduct();
            break;
            case 7: sellProduct();
            break;
            case 8: displayRevenue();
            break;
            case 9: printf("Da thoat khoi chuong trinh\n");
            break;
            default: printf("Lua chon khong hop le, Vui long nhap lai!\n");
        }
    } while (choice != 9);
}

// Hàm main
int main() {
    menu();
    return 0;
}
